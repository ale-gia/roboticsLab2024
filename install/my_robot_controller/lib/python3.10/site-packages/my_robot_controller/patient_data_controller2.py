#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import json

class PatientDataCheckerNode(Node):
    def __init__(self):
        super().__init__('patient_data_checker')
        self.publisher = self.create_publisher(String, '/echo', 10)
        self.speech_publisher = self.create_publisher(String, '/speech', 10)
        self.timer = self.create_timer(1.0, self.publish_patient_data)
        self.previous_output = None
        self.patient_data = None

    def read_patient_data(self):
        file_path = '/home/rosario/ros2_ws/src/my_robot_controller/my_robot_controller/data/patient_data.json'
        with open(file_path, 'r') as file:
            data = json.load(file)
        return data

    def check_patient_vitals(self, patient_data):
        pazienti_da_riposare = []
        for patient in patient_data['pazienti']:
            nome = patient['nome']
            parametri = patient['parametri_vitali']
            pressione_arteriosa = parametri['pressione_arteriosa'].split('/')
            sistolica = int(pressione_arteriosa[0])
            diastolica = int(pressione_arteriosa[1])
            if (sistolica > 140 or diastolica > 90 or parametri['frequenza_cardiaca'] > 100 or parametri['livello_glicemico'] > 150):
                pazienti_da_riposare.append(nome)
        
        if len(pazienti_da_riposare) == 1:
            output = f"Il paziente {pazienti_da_riposare[0]} deve riposarsi"
        elif len(pazienti_da_riposare) > 1:
            pazienti_string = ', '.join(pazienti_da_riposare)
            output = f"I pazienti {pazienti_string} devono riposarsi"
        else:
            output = "I valori dei pazienti sono normali"
        
        return output
    
    def print_patient_data_table(self):
        if self.patient_data:
            print("Dati del paziente:")
            print("-------------------")
            for patient in self.patient_data['pazienti']:
                print(f"Nome: {patient['nome']}")
                print("Parametri vitali:")
                for key, value in patient['parametri_vitali'].items():
                    print(f"- {key}: {value}")
                print("-------------------")
    
    def publish_patient_data(self):
        patient_data = self.read_patient_data()
        self.patient_data = patient_data
        output = self.check_patient_vitals(patient_data)
        
        if output != self.previous_output:
            self.previous_output = output
            msg = String()
            msg.data = output
            self.publisher.publish(msg)
            self.print_patient_data_table()

            # Pubblica l'output sul topic /speech per farlo pronunciare a NAO
            speech_msg = String()
            speech_msg.data = output
            self.speech_publisher.publish(speech_msg)

def main(args=None):
    rclpy.init(args=args)
    node = PatientDataCheckerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
