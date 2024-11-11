#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from naoqi_bridge_msgs.msg import BodyPoseActionGoal
import sys
import time

class NaoController(Node):
    def __init__(self):
        super().__init__("nao_controller")
        self.pose_publisher = self.create_publisher(BodyPoseActionGoal, "/body_pose/goal", 10)
        self.get_logger().info("NAO STARTS MOVING...")

    def arm_down(self):
        self.publish_pose("arms_down")

    def arm_up(self):
        self.publish_pose("arms_up")

    def arm_up2(self):
        self.publish_pose("arms_up2")

    def rest(self):
        self.publish_pose("rest")

    def publish_pose(self, pose_name):
        msg = BodyPoseActionGoal()
        msg.goal.pose_name = pose_name
        self.pose_publisher.publish(msg)
        time.sleep(2)

def main(args=None):
    rclpy.init(args=args)
    node = NaoController()

    command_to_function = {
        "arm_down": node.arm_down,
        "arm_up": node.arm_up,
        "arm_up2": node.arm_up2,
        "rest": node.rest,
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
