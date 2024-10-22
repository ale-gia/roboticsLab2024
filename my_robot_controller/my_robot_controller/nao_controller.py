#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import sys
import time

class NaoController(Node):
    def __init__(self):
        super().__init__("nao_controller")
        self.l_shoulderpitch_pub = self.create_publisher(Float64,"/LShoulderPitch",10)
        self.r_shoulderpitch_pub = self.create_publisher(Float64,"/RShoulderPitch",10)
        self.get_logger().info("NAO STARTS MOVING...")
    
    def send_command(self):
        msg=Float64()
        msg.data = 1.0
        self.l_shoulderpitch_pub.publish(msg)
        self.r_shoulderpitch_pub.publish(msg)

    def arm_down(self):
        msg=Float64()
        msg.data = 1.0
        self.l_shoulderpitch_pub.publish(msg)
        self.r_shoulderpitch_pub.publish(msg)
        time.sleep(10)
        pass
    
    def arm_up(self):
        msg=Float64()
        msg.data = 0.0
        self.l_shoulderpitch_pub.publish(msg)
        self.r_shoulderpitch_pub.publish(msg)
        time.sleep(10)
        pass

    def arm_up2(self):
        msg=Float64()
        msg.data = -1.0
        self.l_shoulderpitch_pub.publish(msg)
        self.r_shoulderpitch_pub.publish(msg)
        time.sleep(10)
        pass





    

def main(args=None):
    rclpy.init(args=args)
    node = NaoController()

    # Dizionario che mappa i comandi a funzioni specifiche
    command_to_function = {
        "arm_down": node.arm_down,
        "arm_up": node.arm_up, 
        "arm_up2": node.arm_up2,
    }

    if len(sys.argv) > 1:
        command = sys.argv[1]
        function = command_to_function.get(command)
        if function:
            function()
            rclpy.shutdown()
            return
        
            
        

    rclpy.spin(node)
    rclpy.shutdown()

