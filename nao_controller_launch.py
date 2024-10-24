from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():


   return LaunchDescription([

   
   #Node(
      #package="movement",
      #namespace="movement",
      #excecutable="movement.py",
      #name="movement"
   #),
   Node(
      package="naoqi_interface",
      namespace="naoqi_interface",
      executable="interface_controller",
   ),
   Node(
      package="ros_gz_bridge",
      #namespace="gazebo_bridge",
      executable="parameter_bridge",
      ros_arguments=["-p","config_file:=/home/rosario/ros2_ws/src/my_robot_controller/config/full.yaml"]
   )

   ])

