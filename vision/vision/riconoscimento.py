#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from naoqi_bridge_msgs.msg import JointAnglesWithSpeed
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2  # Import OpenCV per analisi immagini
import numpy as np  # Importa NumPy per l'elaborazione dei dati
import os  # Importa os per gestire il salvataggio dei file
import matplotlib.pyplot as plt  # Importa Matplotlib per visualizzare le immagini

class VisionYolo(Node):
    def __init__(self):
        super().__init__("vision_yolo")
        self.subscription = self.create_subscription(Image, "/camera", self.image_callback, 100)
        self.walk_pub = self.create_publisher(Twist, "/cmd_vel", 10)
        #self.get_logger().info("NAO STARTS MOVING...")
        self.bridge = CvBridge()

        # Specifica il percorso ai file YOLO
        yolo_dir = os.path.expanduser("~/ros2_ws_robotics/src/vision/yolo_files")  # Percorso della cartella 'yolo_files'
        weights_path = os.path.join(yolo_dir, "yolov3.weights")
        config_path = os.path.join(yolo_dir, "yolov3.cfg")

        # Carica YOLOghfhgchgchgjc
        self.net = cv2.dnn.readNet(weights_path, config_path)
        with open(os.path.join(yolo_dir, "coco.names"), "r") as f:
            self.classes = [line.strip() for line in f.readlines()]
        self.layer_names = self.net.getLayerNames()

        # Gestione dell'output delle layer non connesse
        output_layers_indices = self.net.getUnconnectedOutLayers()
        if len(output_layers_indices) > 0:
            self.output_layers = [self.layer_names[i - 1] for i in output_layers_indices.flatten()]
        else:
            self.output_layers = []  # Imposta a una lista vuota se non ci sono layer non connesse

        # Crea la cartella per le immagini riconosciute
        #self.output_dir = os.path.expanduser("~/ros2_ws_1/src/vision_controller/Immagini_riconosciute")
        #os.makedirs(self.output_dir, exist_ok=True)


    def image_callback(self, msg):
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        height, width, _ = cv_image.shape

        # Prepara l'immagine per YOLO
        blob = cv2.dnn.blobFromImage(cv_image, 0.00392, (416, 416), (0, 0, 0), True, crop=False)
        self.net.setInput(blob)
        outs = self.net.forward(self.output_layers)

        # Inizializza le liste per le informazioni sugli oggetti rilevati
        class_ids = []
        confidences = []
        boxes = []

        # Elaborazione degli output di YOLO
        for out in outs:
            for detection in out:
                scores = detection[5:]
                class_id = np.argmax(scores)
                confidence = scores[class_id]
                if confidence > 0.5:  # soglia di confidenza
                    center_x = int(detection[0] * width)
                    center_y = int(detection[1] * height)
                    w = int(detection[2] * width)
                    h = int(detection[3] * height)

                    # Coordinate del rettangolo
                    x = int(center_x - w / 2)
                    y = int(center_y - h / 2)

                    boxes.append([x, y, w, h])
                    confidences.append(float(confidence))
                    class_ids.append(class_id)

        # Applica non-maxima suppression per rimuovere le sovrapposizioni
        indexes = cv2.dnn.NMSBoxes(boxes, confidences, 0.5, 0.4)

        # Disegna i bounding box e le etichette sugli oggetti rilevati
        for i in range(len(boxes)):
            if i in indexes:
                x, y, w, h = boxes[i]
                label = str(self.classes[class_ids[i]])
                confidence = confidences[i]
                cv2.rectangle(cv_image, (x, y), (x + w, y + h), (0, 255, 0), 2)
                cv2.putText(cv_image, f"{label} {confidence:.2f}", (x, y + 30), cv2.FONT_HERSHEY_PLAIN, 2, (0, 255, 0), 2)

                # Salva il frame con il nome dell'oggetto riconosciuto
                output_image_path = os.path.join(self.output_dir, f"{label}_{i}.jpg")
                cv2.imwrite(output_image_path, cv_image)
                self.get_logger().info(f"Image saved at {output_image_path}")

        # Mostra l'immagine con gli oggetti riconosciuti usando Matplotlib
        #cv_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB)  # Cambia il formato dei colori per Matplotlib
        plt.imshow(cv_image)
        plt.axis('off')  # Nasconde gli assi
        plt.show(block=False)  # Mostra l'immagine senza bloccare l'esecuzione
        plt.pause(0.001)  # Aggiunge una breve pausa per l'aggiornamento della finestra

def main(args=None):
    rclpy.init(args=args)
    vision_yolo = VisionYolo()
    rclpy.spin(vision_yolo)
    vision_yolo.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
