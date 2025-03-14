import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool,String

from .whisper_hugging import WhisperHugging
from qi_unipa_msgs.srv import Speak


class Speech_Controller(Node):
    def __init__(self):
        super().__init__("speech_controller")
    
        
      
        self.speak_pub = self.create_publisher(String, "/speak",10)
        self.user_transcription_pub = self.create_publisher(String, "/transcription",10)
        self.speak_sub = self.create_subscription(String, "/robot_speak",self.robot_speak,10)
        self.robot_listen_sub = self.create_subscription(Bool, "/robot_listen",self.robot_listen,10)
        self.isSpeaking_sub = self.create_subscription(Bool, "/is_speaking",self.check_speaking,10)
        self.record_cli=self.create_client(Speak,'record')
        while not self.record_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req=Speak.Request()
   
        self.whisper = WhisperHugging()
        self.file_path="/home/alessandro/Desktop/degree_ws/src/audio/audio_recording.wav"
        self.is_speaking=False
  
  

   
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
            


    def robot_listen(self,msg):#
             
             self.get_logger().info("robot  in ascolto..")
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
