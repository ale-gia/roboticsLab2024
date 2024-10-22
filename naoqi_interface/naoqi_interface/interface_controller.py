#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from naoqi_bridge_msgs.msg import JointAnglesWithSpeed
from geometry_msgs.msg import Twist,PoseStamped
from std_msgs.msg import Float64
from nav_msgs.msg import Odometry
import sys
import time

class Interface_controller(Node):
    def __init__(self):
        super().__init__("interface_controller")
       
        self.subscription = self.create_subscription(JointAnglesWithSpeed, "/joint_angles", self.joint_callback, 10)

        
        self.RShoulderPitch_pub = self.create_publisher(Float64, "/RShoulderPitch", 10)
        self.HeadPitch_pub = self.create_publisher(Float64, "/HeadPitch", 10)
        self.HeadYaw_pub = self.create_publisher(Float64, "/HeadYaw", 10)
        self.LAnklePitch_pub = self.create_publisher(Float64, "/LAnklePitch", 10)
        self.LAnkleRoll_pub = self.create_publisher(Float64, "/LAnkleRoll", 10)
        self.LElbowRoll_pub = self.create_publisher(Float64, "/LElbowRoll", 10)
        self.LElbowYaw_pub = self.create_publisher(Float64, "/LElbowYaw", 10)
        self.LHipPitch_pub = self.create_publisher(Float64, "/LHipPitch", 10)
        self.LHipRoll_pub = self.create_publisher(Float64, "/LHipRoll", 10)
        self.LHipYawPitch_pub = self.create_publisher(Float64, "/LHipYawPitch", 10)
        self.LKneePitch_pub = self.create_publisher(Float64, "/LKneePitch", 10)
        self.LShoulderPitch_pub = self.create_publisher(Float64, "/LShoulderPitch", 10)
        self.LShoulderRoll_pub = self.create_publisher(Float64, "/LShoulderRoll", 10)
        self.LWristYaw_pub = self.create_publisher(Float64, "/LWristYaw", 10)
        self.RAnklePitch_pub = self.create_publisher(Float64, "/RAnklePitch", 10)
        self.RAnkleRoll_pub = self.create_publisher(Float64, "/RAnkleRoll", 10)
        self.RElbowRoll_pub = self.create_publisher(Float64, "/RElbowRoll", 10)
        self.RElbowYaw_pub = self.create_publisher(Float64, "/RElbowYaw", 10)
        self.RHipPitch_pub = self.create_publisher(Float64, "/RHipPitch", 10)
        self.RHipRoll_pub = self.create_publisher(Float64, "/RHipRoll", 10)
        self.RHipYawPitch_pub = self.create_publisher(Float64, "/RHipYawPitch", 10)
        self.RKneePitch_pub = self.create_publisher(Float64, "/RKneePitch", 10)
        self.RShoulderRoll_pub = self.create_publisher(Float64, "/RShoulderRoll", 10)
        self.RWristYaw_pub = self.create_publisher(Float64, "/RWristYaw", 10)
        self.get_logger().info("Start Interface ..")

        self.joint_publishers = {
            "RShoulderPitch": self.RShoulderPitch_pub,
            "HeadPitch": self.HeadPitch_pub,
            "HeadYaw": self.HeadYaw_pub,
            "LAnklePitch": self.LAnklePitch_pub,
            "LAnkleRoll": self.LAnkleRoll_pub,
            "LElbowRoll": self.LElbowRoll_pub,
            "LElbowYaw": self.LElbowYaw_pub,
            "LHipPitch": self.LHipPitch_pub,
            "LHipRoll": self.LHipRoll_pub,
            "LHipYawPitch": self.LHipYawPitch_pub,
            "LKneePitch": self.LKneePitch_pub,
            "LShoulderPitch": self.LShoulderPitch_pub,
            "LShoulderRoll": self.LShoulderRoll_pub,
            "LWristYaw": self.LWristYaw_pub,
            "RAnklePitch": self.RAnklePitch_pub,
            "RAnkleRoll": self.RAnkleRoll_pub,
            "RElbowRoll": self.RElbowRoll_pub,
            "RElbowYaw": self.RElbowYaw_pub,
            "RHipPitch": self.RHipPitch_pub,
            "RHipRoll": self.RHipRoll_pub,
            "RHipYawPitch": self.RHipYawPitch_pub,
            "RKneePitch": self.RKneePitch_pub,
            "RShoulderRoll": self.RShoulderRoll_pub,
            "RWristYaw": self.RWristYaw_pub,
        }

    def send_command(self,data,publisher):
            msg=Float64()
            msg.data = data
            publisher.publish(msg)
            time.sleep(5)

    def joint_callback(self,msg):
        velocità=msg.speed
        for joint, angolo in zip(msg.joint_names, msg.joint_angles):
             self.send_command(angolo,self.joint_publishers[joint])
    
        
        
 
 
    
       


 


def main(args=None):
    rclpy.init(args=args)
    node = Interface_controller()
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
