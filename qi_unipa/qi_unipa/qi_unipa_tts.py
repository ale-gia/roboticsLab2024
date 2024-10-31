import qi
import rclpy
import argparse
from rclpy.node import Node
import sys
from std_msgs.msg import String


class QiUnipa_tts(Node):
    
    def __init__(self, args):
        super().__init__('qi_unipa_tts')
        self.session = self.set_connection(args)
        
        self.subscription1 = self.create_subscription(String, "/tts", self.tts, 10)
        self.tts_service= self.session.service("ALTextToSpeech")
        self.tts_service.setLanguage("Italian")
       

    def set_connection(self, args):
        session = qi.Session()
        try:
            session.connect("tcp://" + args.ip + ":" + str(args.port))
        except RuntimeError:
            print ("Can't connect to Naoqi at ip \"" + args.ip + "\" on port " + str(args.port) +".\n"
                    "Please check your script arguments. Run with -h option for help.")
            sys.exit(1)
        return session
    
    def tts(self, msg):
        
        self.tts_service.say(msg.data)
        
 

def main(args=None):
    rclpy.init(args=args)
    parser = argparse.ArgumentParser()
    parser.add_argument("--ip", type=str, default="192.168.0.161",
                        help="Robot IP address. On robot or Local Naoqi: use '127.0.0.1'.")
    parser.add_argument("--port", type=int, default=9559,
                        help="Naoqi port number")
    
    args = parser.parse_args()

    
    node = QiUnipa_tts(args)
    
    rclpy.spin(node)
    rclpy.shutdown()
    

if __name__ == '__main__':
    main()