#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import sounddevice as sd
import numpy as np
from naoqi_bridge_msgs.msg import AudioBuffer
import time
import wave


class Speech_controller(Node):
    def __init__(self):
        super().__init__("speech_controller")
       
        self.subscription = self.create_subscription(AudioBuffer,'/audio',self.audio_callback,10)
        # Inizializzazione delle variabili
        self.frequency = None
        self.audio_buffer = []
        self.start_time = time.time()

    def audio_callback(self, msg):
        # Imposta la frequenza di campionamento solo alla prima ricezione
        if self.frequency is None:
            self.frequency = msg.frequency
        
        # Aggiunge i dati audio ricevuti nel buffer
        self.audio_buffer.extend(msg.data)
        
        # Interrompe la registrazione dopo 10 secondi
        if time.time() - self.start_time >= 10:
            self.save_audio()
            rclpy.shutdown()  # Ferma il nodo e termina il programma

    def save_audio(self):
        # Conversione del buffer in un array numpy
        audio_data = np.array(self.audio_buffer, dtype=np.int16)
        
        # Salva il buffer audio in un file WAV
        with wave.open('output_recorded.wav', 'w') as wf:
            wf.setnchannels(1)  # Monofonico
            wf.setsampwidth(2)  # 16 bit = 2 byte
            wf.setframerate(self.frequency)
            wf.writeframes(audio_data.tobytes())
        
        self.get_logger().info("Registrazione completata e salvata come output_recorded.wav")

    
            
    
        
        
 
 
    
       


 


def main(args=None):
    rclpy.init(args=args)
    node = Speech_controller()
    
    rclpy.spin(node)
    

if __name__ == '__main__':
    main()
