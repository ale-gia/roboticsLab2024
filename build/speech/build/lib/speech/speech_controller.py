#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import sounddevice as sd
import numpy as np
from naoqi_bridge_msgs.msg import AudioBuffer


class Speech_controller(Node):
    def __init__(self):
        super().__init__("speech_controller")
       
        self.subscription = self.create_subscription(AudioBuffer,'/audio',self.audio_callback,10)
       
        self.get_logger().info("Start speech ..")




    def audio_callback(self, msg):
            # Frequenza di campionamento dal messaggio
            frequency = msg.frequency
            
            # Dati audio
            audio_data = np.array(msg.data, dtype=np.int16)
            
            # Riproduci l'audio con sounddevice
            sd.play(audio_data, samplerate=frequency)
            sd.wait()  # Aspetta il termine della riproduzione
    
        
        
 
 
    
       


 


def main(args=None):
    rclpy.init(args=args)
    node = Speech_controller()
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
