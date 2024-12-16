import rclpy
import wave
import time
from rclpy.node import Node
from std_msgs.msg import Bool,String,Int32,ByteMultiArray

from .llm_groq import Llm_Groq
from .whisper_hugging import WhisperHugging
from qi_unipa_msgs.srv import Speak


class Speech_Controller(Node):
    def __init__(self):
        super().__init__("speech_controller")
    
        
        self.speech_controller = self.create_subscription(Bool, "/speech", self.set_speech, 10)
        self.record_pub = self.create_publisher(Int32, "/record",10)
        self.speak_pub = self.create_publisher(String, "/speak",10)
        self.speak_sub = self.create_subscription(String, "/robot_speak",self.robot_speak,10)
        self.robot_speech_sub = self.create_subscription(String, "/robot_speech",self.robot_speech,10)
        self.user_transcription_pub = self.create_publisher(String, "/transcription",10)
        self.isSpeaking_sub = self.create_subscription(Bool, "/is_speaking",self.check_speaking,10)
        self.record_cli=self.create_client(Speak,'record')
        while not self.record_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req=Speak.Request()
   

        #self.audio_sub = self.create_subscription(ByteMultiArray,'/audio',self.get_audio, 10)

        self.assistant = Llm_Groq()
        self.whisper = WhisperHugging()
        self.file_path="/home/alessandro/Desktop/roboticsLab2024/src/audio/audio_recording.wav"
        self.is_speaking=False
  
  

    def set_speech(self,msg):
        if msg.data:
             self.get_logger().info("Avvio speech_controller")
             msg=Int32()
             msg.data=10
             self.record_pub.publish(msg) # salva in locale il file audio wav
             time.sleep(5)

             transcription=self.STT()#trascrizione 
             context="Descrizione compito : Sei pepper, un robot umanoide e sei al servizio delle persone per fornire una dieta, \
                      e vivi al laboratorio di robotica nell'università di palermo. La dieta per il tuo interlocutore prevede : \
                      lunedì(carne e verdura),martedì(pesce e uova),mercoledì( riso e pollo) . \
                      non puoi mangiare due giorni di fila carne.Oggi è martedì. rispondi in italiano"
             resp=self.Speech_By_LLM(context,transcription)#risposta llm
             msg=String()
             msg.data=resp
             self.speak_pub.publish(msg)

    def send_request(self):
        
             self.req.data=10
             self.future=self.record_cli.call_async(self.req)
           
             rclpy.spin_until_future_complete(self, self.future)
             self.get_logger().info(f"future: {self.future.result()}")
             if self.future.done():
                try:
                    response = self.future.result()
                    self.get_logger().info(f"Risposta: {response}")
                    return response  #completamento audio
                except Exception as e:
                    self.get_logger().error(f"Chiamata al servizio fallita: {e}")
                    return None
            


    def robot_speech(self,msg):#
             
             self.get_logger().info("robot speech in ascolto..")
             test=Int32()# cambiare in booleano
             test.data=10
             time.sleep(3)
             #self.record_pub.publish(test) # salva in locale il file audio wav

             response=self.send_request()
            
             transcription=self.STT()#trascrizione 
             msg2=String()
             msg2.data=transcription
             self.user_transcription_pub.publish(msg2)
               
             self.get_logger().info(f"trascrizione inviata {transcription}")
  


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

    def robot_speak(self,msg):
        self.get_logger().info(f"robot_speak:{msg.data}")
        sentence=String()
        sentence.data=msg.data
        self.speak_pub.publish(sentence)

    def check_speaking(self,msg):
        self.is_speaking=msg.data
         


def main(args=None):
    rclpy.init(args=args)
 
    node = Speech_Controller()
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
