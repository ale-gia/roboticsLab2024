import qi
import sys
import rclpy
import wave
from rclpy.node import Node
from std_msgs.msg import Bool,String,Int32,ByteMultiArray
from llm_groq import Llm_Groq
from whisper_hugging import WhisperHugging



class Speech_Controller(Node):
    def __init__(self):
        super().__init__("speech_controller")
    
        
        self.speech_controller = self.create_subscription(Bool, "/speech", self.set_speech, 10)
        self.record_pub = self.create_publisher(Int32, "/record",10)
        self.speak_pub = self.create_publisher(String, "/speak",10)
        self.audio_sub = self.create_subscription(ByteMultiArray,'/audio',self.get_audio, 10)

        self.assistant = Llm_Groq()
        self.whisper = WhisperHugging()

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
             self.record_pub.publish(msg) # salva in locale il file audio wav
             #acquisisci file audio locale -- da completare 
             transcription=self.STT() #trascrizione 
             resp=self.Speech_By_LLM("",transcription)#risposta llm



    def STT(self):
        #Speech to Text by whisper-large-v3-turbo"
        try:
            # Trascrivi un file audio
            transcription = self.whisper.transcribe_audio("test.wav")
            self.get_logger().info(f"risposta ricevuta da whisper :{transcription}")
        except Exception as e:
            self.get_logger().error(f"Errore durate richiesta trascrizione whisper {e}")

    def Speech_By_LLM(self,context,question):
        try:
            response = self.assistant.get_response(context, question)
            self.get_logger().info(f"risposta ricevuta da lllm :{response}")

        except Exception as e:
            self.get_logger().error(f"Errore durate richiesta risposta llm {e}")





def main(args=None):
    rclpy.init(args=args)
 
    node = Speech_Controller()
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
