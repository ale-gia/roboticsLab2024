import qi
import rclpy
import argparse
from rclpy.node import Node
import sys
from std_msgs.msg import String
from qi_unipa_msgs.msg import Sonar
import time

class QiUnipa_sensor(Node):
    
    def __init__(self, args):
        super().__init__('qi_unipa_sensor')
        self.session = self.set_connection(args)
        
        
        self.sonar_pub = self.create_publisher(Sonar, "/sonar", 10)

        self.sonar_service= self.session.service("ALSonar")
        self.memory_service= self.session.service("ALMemory")

        self.timer = self.create_timer(1.0, self.set_sonar)

        

        
       

    def set_connection(self, args):
        session = qi.Session()
        try:
            session.connect("tcp://" + args.ip + ":" + str(args.port))
        except RuntimeError:
            print ("Can't connect to Naoqi at ip \"" + args.ip + "\" on port " + str(args.port) +".\n"
                    "Please check your script arguments. Run with -h option for help.")
            sys.exit(1)
        return session
    
    def set_sonar(self):

        self.sonar_service.subscribe("Sonar_app")
        msg=Sonar()
        msg.front_sonar=self.memory_service.getData("Device/SubDeviceList/Platform/Front/Sonar/Sensor/Value")
        msg.back_sonar=self.memory_service.getData("Device/SubDeviceList/Platform/Back/Sonar/Sensor/Value")
        self.sonar_pub.publish(msg)
        self.sonar_service.unsubscribe("Sonar_app")
        
 

def main(args=None):
    rclpy.init(args=args)
    parser = argparse.ArgumentParser()
    parser.add_argument("--ip", type=str, default="192.168.0.161",
                        help="Robot IP address. On robot or Local Naoqi: use '127.0.0.1'.")
    parser.add_argument("--port", type=int, default=9559,
                        help="Naoqi port number")
    
    args = parser.parse_args()
    node = QiUnipa_sensor(args)






    
    rclpy.spin(node)
    rclpy.shutdown()
    

if __name__ == '__main__':
    main()