import qi
import sys
import rclpy
from rclpy.node import Node
from qi_unipa_msgs.msg import PostureWithSpeed,Track
class QiUnipatracking(Node):  
    def __init__(self):
        super().__init__('qi_unipa_tracking')
        
        # Ottieni i parametri
        self.declare_parameter('ip', '192.168.0.161')
        self.declare_parameter('port', 9559)
        ip = self.get_parameter('ip').get_parameter_value().string_value
        port = self.get_parameter('port').get_parameter_value().integer_value
        
        # Connessione sessione
        self.session = self.set_connection(ip, port)

        self.is_tracking=False
        self.tracker_service = self.session.service("ALTracker")
        self.tracker_service.setMode("Move")
        self.tracking_sub = self.create_subscription(Track, "/track", self.set_tracking, 10)
       
        self.posture_pub = self.create_publisher(PostureWithSpeed, "/posture", 10)


    def set_connection(self, ip, port):
            session = qi.Session()
            try:
                session.connect(f"tcp://{ip}:{port}")
            except RuntimeError:
                self.get_logger().error(f"Can't connect to Naoqi at ip \"{ip}\" on port {port}.\n"
                                        "Please check your script arguments.")
                sys.exit(1)
            return session



    def set_tracking(self, msg):
        """Callback per il topic /track"""
        
        if not self.is_tracking:
            self.start_tracking(msg)
       
        else:
            self.stop_tracking()

    def start_tracking(self,msg_in):

        msg=PostureWithSpeed()
        msg.posture_name="StandInit"
        msg.speed=0.5
        self.posture_pub.publish(msg)
        params=""
        if(msg_in.target_name =="Face"):
            params=msg_in.distance

        elif(msg_in.target_name =="Sound"):
            confidence=0.5
            params=[msg_in.distance,confidence]

        elif(msg_in.target_name =="Stop"):
            self.stop_tracking()
            return 

        self.tracker_service.registerTarget(msg_in.target_name, params)
        self.tracker_service.setRelativePosition([-0.5, 0.0, 0.0, 0.1, 0.1, 0.3])
        self.tracker_service.track(msg_in.target_name)
        print ("ALTracker successfully started")
        self.is_tracking=True



    def stop_tracking(self):
        self.tracker_service.stopTracker()
        self.tracker_service.unregisterAllTargets()
        print ("ALTracker stopped")
        self.is_tracking=False
        msg=PostureWithSpeed()
        msg.posture_name="Sit"
        msg.speed=0.5
        self.posture_pub.publish(msg)
    


def main(args=None):
    rclpy.init(args=args)
 
    node = QiUnipatracking()


    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()