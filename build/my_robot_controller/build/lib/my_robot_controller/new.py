#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from std_msgs.msg import Float64

import sys


class NaoController(Node):
    def __init__(self):
        super().__init__("nao_controller")

        self.publisher_move = self.create_publisher(Float64, '/move', 10)
        self.publisher_rot = self.create_publisher(Float64, '/rot', 10)

        



    def move(self):
        msg = Float64()
        msg.data = 0.5
        self.publisher_move.publish(msg)

    def rot(self):
        msg = Float64()
        msg.data = "nord"
        self.publisher_rot.publish(msg)
        

def main(args=None):
    rclpy.init(args=args)
    node = NaoController()



    command_to_function = {
        "move": node.move,
        "rot": node.rot,
        
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

if __name__ == '__main__':
    main()
