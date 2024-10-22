#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from naoqi_bridge_msgs.msg import JointAnglesWithSpeed
from geometry_msgs.msg import Twist
import sys
import time

class NaoController(Node):
    def __init__(self):
        super().__init__("nao_controller")
        self.joint_pub = self.create_publisher(JointAnglesWithSpeed, "/joint_angles", 10)
        self.walk_pub = self.create_publisher(Twist, "/cmd_vel", 10)
        self.get_logger().info("NAO STARTS MOVING...")

    def arm_down(self):
        self.publish_joint_angles(['LShoulderPitch', 'RShoulderPitch'], [1.5, 1.5], 0.1)

    def arm_up(self):
        self.publish_joint_angles(['LShoulderPitch', 'RShoulderPitch'], [-1.0, -1.0], 0.1)

    def arm_up2(self):
        self.publish_joint_angles(['LShoulderPitch', 'RShoulderPitch'], [-1.5, -1.5], 0.1)

    def walk(self):
        self.publish_walk_command(0.5, 0.0, 0.0)  # Walk forward with a linear speed of 0.5

    def stop(self):
        self.publish_walk_command(0.0, 0.0, 0.0)  # Stop walking

    def publish_joint_angles(self, joint_names, angles, speed):
        msg = JointAnglesWithSpeed()
        msg.joint_names = joint_names
        msg.joint_angles = angles
        msg.speed = speed
        self.joint_pub.publish(msg)
        time.sleep(2)

    def publish_walk_command(self, x, y, theta):
        msg = Twist()
        msg.linear.x = x
        msg.linear.y = y
        msg.angular.z = theta
        self.walk_pub.publish(msg)
        time.sleep(2)

def main(args=None):
    rclpy.init(args=args)
    node = NaoController()

    command_to_function = {
        "arm_down": node.arm_down,
        "arm_up": node.arm_up,
        "arm_up2": node.arm_up2,
        "walk": node.walk,
        "stop": node.stop,
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
