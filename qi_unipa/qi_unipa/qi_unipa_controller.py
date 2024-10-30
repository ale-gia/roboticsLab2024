import qi
import rclpy
import argparse
from rclpy.node import Node
import sys
from std_msgs.msg import Int32, Float32MultiArray,String
import time 

class Qi_Unipa_controller(Node):
    def __init__(self, args):
        super().__init__('qi_unipa_controller')
        self.session = self.set_connection(args)
        self.state_sub = self.create_subscription(Int32, "/state", self.set_state, 10)
        self.walkTo_sub = self.create_subscription(Float32MultiArray, "/walkTo", self.walkTo, 10)
        #self.walkTo_sub = self.create_subscription(String, "/listen", self.listen, 10)


    def set_connection(self, args):
        session = qi.Session()
        try:
            session.connect("tcp://" + args.ip + ":" + str(args.port))
        except RuntimeError:
            print ("Can't connect to Naoqi at ip \"" + args.ip + "\" on port " + str(args.port) +".\n"
                    "Please check your script arguments. Run with -h option for help.")
            sys.exit(1)
        return session

    def set_state(self, msg):
        state = msg.data
        state_service = self.session.service("ALMotion")
        if state == 0:
            state_service.wakeUp()
        else:
            state_service.rest()
    

    def walkTo(self,msg):
        x,y,theta=msg.data
        walk_service = self.session.service("ALMotion")
        walk_service.moveTo(x,y,theta)

    def speech_rec(self):
        speech_service = self.session.service("ALSpeechRecognition")
        memory_service = self.session.service("ALMemory")
        speech_service.setLanguage("Italian")
        keywords = ["ciao", "Pepper", "come stai", "aiuto"]
        speech_service.setVocabulary(keywords, False)
        memory_service.subscribeToEvent("WordRecognized", "Test_ASR", "self.onWordRecognized")
        speech_service.subscribe("Test_ASR")
                # Mantieni attivo il riconoscimento per un certo periodo di tempo
        try:
            time.sleep(20)  # Riconosce per 20 secondi, modifica se necessario
        finally:
            # Interrompi il riconoscimento
            speech_service.unsubscribe("Test_ASR")
            memory_service.unsubscribeToEvent("WordRecognized","Test_ASR", "self.onWordRecognized")


    # Funzione per gestire l'output del riconoscimento vocale
    def onWordRecognized(self,value):
        if isinstance(value, list) and len(value) > 1:
            word = value[0]
            confidence = value[1]
            print(f"Parola riconosciuta: {word} con confidenza: {confidence}")

def main(args=None):
    rclpy.init(args=args)
    parser = argparse.ArgumentParser()
    parser.add_argument("--ip", type=str, default="192.168.0.161",
                        help="Robot IP address. On robot or Local Naoqi: use '127.0.0.1'.")
    parser.add_argument("--port", type=int, default=9559,
                        help="Naoqi port number")
    
    args = parser.parse_args()

    
    node = Qi_Unipa_controller(args)
    node.speech_rec()
    rclpy.spin(node)
    rclpy.shutdown()
    
       

if __name__ == '__main__':
    main()