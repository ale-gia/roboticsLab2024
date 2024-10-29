#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from naoqi_bridge_msgs.msg import JointAnglesWithSpeed
from geometry_msgs.msg import Twist,PoseStamped
from std_msgs.msg import Float64
from nav_msgs.msg import Odometry
import sys
import time

import qi
import argparse
import sys
import math

class Movement_controller(Node):
    def __init__(self):
        super().__init__("movement_controller")
        self.joint_pub = self.create_publisher(JointAnglesWithSpeed, "/joint_angles", 10)


        #self.walk_pub = self.create_publisher(Twist, "/cmd_vel", 10)
        #self.publisher = self.create_publisher(PoseStamped, '/move_base_simple/goal', 10)
        #self.subscription = self.create_subscription(Float64, "/move", self.move_callback, 10)
        #self.subscription_odo = self.create_subscription(Odometry,'/odom',self.odom_callback,10)
        #self.position_x=0
        #self.is_walking=False
        #self.subscription
        #self.subscription_odoo
        self.get_logger().info("Movement Node Run ..")
    '''
    def move_callback(self,msg):
        dist=msg.data
        self.get_logger().info(f"_______________{dist} start________________________________________________________")
        p0=self.position_x
        self.p_target=p0+dist
        self.walk()
        
        
 
    def odom_callback(self, msg):
        # Estrai i dati di posizione e velocità dal messaggio
        position = msg.pose.pose.position
        orientation = msg.pose.pose.orientation
        twist = msg.twist.twist
        self.position_x=position.x


        if(self.is_walking and self.position_x>self.p_target):
            self.stop()
            self.get_logger().info("_______________stop________________________________________________________")

        self.get_logger().info(f"Posizione -> x: {position.x}, y: {position.y}, z: {position.z}")
        self.get_logger().info(f"Velocità lineare -> x: {twist.linear.x}, y: {twist.linear.y}")
        self.get_logger().info(f"Velocità angolare -> z: {twist.angular.z}")
    '''

    def arm_down(self):

        self.publish_joint_angles(['LShoulderPitch', 'RShoulderPitch'], [1.5, 1.5], 0.1)

        

    def arm_up(self):
        self.publish_joint_angles(['LShoulderPitch', 'RShoulderPitch'], [0.0, 0.0], 0.1)

    def arm_up2(self):
        self.publish_joint_angles(['LShoulderPitch', 'RShoulderPitch'], [-1.5, -1.5], 0.1)
    

    
    def stand(self):

        joint = [
        "HeadYaw",
        "HeadPitch",
        "LShoulderPitch",
        "LShoulderRoll",
        "LElbowYaw",
        "LElbowRoll",
        "LWristYaw",
        
        "LHipYawPitch",
        "LHipRoll",
        "LHipPitch",
        "LKneePitch",
        "LAnklePitch",
        "LAnkleRoll",
        "RHipYawPitch",
        "RHipRoll",
        "RHipPitch",
        "RKneePitch",
        "RAnklePitch",
        "RAnkleRoll",
        "RShoulderPitch",
        "RShoulderRoll",
        "RElbowYaw",
        "RElbowRoll",
        "RWristYaw",
        
        ]

        angles = [
            -0.018450021743774414,
            -0.1565098762512207,
            1.4956080913543701,
            0.17636799812316895,
            -1.1658821105957031,
            -0.3880600929260254,
            0.07052206993103027,
            
            -0.17023205757141113,
            0.09975194931030273,
            0.1304318904876709,
            -0.09054803848266602,
            0.08893013000488281,
            -0.13034796714782715,
            -0.17023205757141113,
            -0.09966802597045898,
            0.1288139820098877,
            -0.08893013000488281,
            0.09054803848266602,
            0.1304318904876709,
            1.4880218505859375,
            -0.17491793632507324,
            1.1688660383224487,
            0.39427995681762695,
            0.0858621597290039,
            
        ]


        
        self.publish_joint_angles(joint,angles, 0.05)


    
    def publish_joint_angles(self, joint_names, angles, speed):
        msg = JointAnglesWithSpeed()
        msg.joint_names = joint_names
        msg.joint_angles = angles
        msg.speed = speed
        self.joint_pub.publish(msg)
        time.sleep(1)

    '''
    def walk(self):
        self.is_walking=True
        self.publish_walk_command(-0.5, 0.0, 0.0)  # Walk forward with a linear speed of 0.5
        self.get_logger().info("start_move")

    def stop(self):
        self.is_walking=False
        self.publish_walk_command(0.0, 0.0, 0.0)  # Stop walking
        self.get_logger().info("stop_move")

    def publish_walk_command(self, x, y, theta):
        msg = Twist()
        msg.linear.x = x
        msg.linear.y = y
        msg.angular.z = theta
        self.walk_pub.publish(msg)
        #time.sleep(2)
    '''

def main(args=None):
    rclpy.init(args=args)
    node = Movement_controller()

    command_to_function = {
        "arm_down": node.arm_down,
        "arm_up": node.arm_up,
        "arm_up2": node.arm_up2,
        "stand": node.stand,

    
        
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
