import rclpy
import wave
import time
from rclpy.node import Node
from std_msgs.msg import Bool,String,Int32,ByteMultiArray

from .llm_groq import Llm_Groq
from .whisper_hugging import WhisperHugging



class Speech_Controller(Node):
    def __init__(self):
        super().__init__("speech_controller")
    
        
        self.speech_controller = self.create_subscription(Bool, "/speech", self.set_speech, 10)
        self.record_pub = self.create_publisher(Int32, "/record",10)
        self.speak_pub = self.create_publisher(String, "/speak",10)
        #self.audio_sub = self.create_subscription(ByteMultiArray,'/audio',self.get_audio, 10)

        self.assistant = Llm_Groq()
        self.whisper = WhisperHugging()
        self.file_path="/home/alessandro/Desktop/roboticsLab2024/src/audio/audio_recording.wav"

  

    def set_speech(self,msg):
        if msg.data:
             self.get_logger().info("Avvio speech_controller")
             msg=Int32()
             msg.data=10
             self.record_pub.publish(msg) # salva in locale il file audio wav
             time.sleep(15)

             transcription=self.STT()#trascrizione 
             
             resp=self.Speech_By_LLM("Descrizione compito : Sei pepper, un robot umanoide,  e vivi al laboratorio di robotica nell'università di palermo. rispondi con poche parole. rispondi in italiano",
                                     transcription)#risposta llm
             msg=String()
             msg.data=resp
             self.speak_pub.publish(msg)


    def STT(self):
        #Speech to Text by whisper-large-v3-turbo"
        try:
        
            # Trascrivi un file audio
            transcription = self.whisper.transcribe_audio(self.file_path)
            self.get_logger().info(f"risposta ricevuta da whisper :{transcription}")
            return transcription
        except Exception as e:
            self.get_logger().error(f"Errore durate richiesta trascrizione whisper {e}")

    def Speech_By_LLM(self,context,question):
        try:
            response = self.assistant.get_response(context, question)
            self.get_logger().info(f"risposta ricevuta da lllm :{response}")
            return response
        except Exception as e:
            self.get_logger().error(f"Errore durate richiesta risposta llm {e}")





def main(args=None):
    rclpy.init(args=args)
 
    node = Speech_Controller()
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
