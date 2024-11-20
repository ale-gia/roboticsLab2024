import qi
import sys
import rclpy
import wave
from rclpy.node import Node
from std_msgs.msg import Bool,String,Int32,ByteMultiArray


class Speech_Controller(Node):
    def __init__(self):
        super().__init__("speech_controller")
    
        
        self.speech_controller = self.create_subscription(Bool, "/speech", self.set_speech, 10)
        self.record_pub = self.create_publisher(Int32, "/record",10)
        self.speak_pub = self.create_publisher(String, "/speak",10)
        self.audio_sub = self.create_subscription(ByteMultiArray,'/audio',self.get_audio, 10)


    def get_audio(self,msg):
        """
        file_path = "received_audio.wav"
        #Salva i dati ricevuti in un file WAV
        with wave.open(file_path, 'wb') as wav_file:
            wav_file.setnchannels(1)  # Canale mono
            wav_file.setsampwidth(2)  # Profondità di 16 bit
            wav_file.setframerate(16000)  # Frequenza di campionamento 16kHz
            wav_file.writeframes(bytes(msg.data))
        """
        self.get_logger().info(f"Audio ricevuto in speech controller .")

    def set_speech(self,msg):
        if msg.data:
             self.get_logger().info("Avvio speech_controller")
             msg=Int32()
             msg.data=10
             self.record_pub.publish(msg)
















def main(args=None):
    rclpy.init(args=args)
 
    node = Speech_Controller()
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
