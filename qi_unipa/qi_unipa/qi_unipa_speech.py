import qi
import time
import sys
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool,String

class QiUnipaSpeech(Node):  
    def __init__(self, robot_ip, robot_port=9559):
        super().__init__('qi_unipa_speech')
        
        self.is_recognizing = False
        self.last_word=""
        self.vocabulary = ["ciao", "come stai", "arrivederci"]
        self.reply={"ciao":"Ciao a te","come stai": " Io sto bene e tu come ti senti?"}
        self.session = qi.Session()
        try:
            self.session.connect(f"tcp://{robot_ip}:{robot_port}")
            print("Connesso a Pepper")
        except RuntimeError:
            print("Impossibile connettersi a Pepper")
            sys.exit(1)
            
      
        self.asr_service = self.session.service("ALSpeechRecognition")
        self.memory = self.session.service("ALMemory")
       
        self.tts_service= self.session.service("ALTextToSpeech")
        self.speech_sub = self.create_subscription(Bool, "/speech_start", self.speech_callback, 10)
        self.tts_sub = self.create_subscription(String, "/tts", self.tts, 10)
        # Setup iniziale del riconoscimento vocale
        self.setup_recognition()
        
        # Timer per il controllo periodico del riconoscimento vocale
        self.create_timer(1, self.check_recognition)

    def speech_callback(self, msg):
        """Callback per il topic /speech"""
        if msg.data:
            if not self.is_recognizing:
                self.start_recognition()
        else:
            if self.is_recognizing:
                self.stop_recognition()

    def setup_recognition(self):
        """Configura il riconoscimento vocale con il vocabolario specificato"""
        try:
            # Imposta la lingua in italiano
            self.asr_service.setLanguage("Italian")
            self.tts_service.setLanguage("Italian")
            print("Lingua impostata a Italiano")
            
            # Imposta il vocabolario
            self.asr_service.setVocabulary(self.vocabulary, False)
            print(f"Vocabolario impostato: {self.vocabulary}")
            
            # Creazione del proxy per l'evento
            self.memory.declareEvent("WordRecognized")
            print("Evento WordRecognized dichiarato")

        except Exception as e:
            print(f"Errore nella configurazione: {e}")
            raise
        
    def start_recognition(self):
        """Avvia il riconoscimento vocale"""
        try:
            if not self.is_recognizing:
                self.asr_service.subscribe("SpeechRecognition")
                self.is_recognizing = True
                print("Riconoscimento vocale avviato")
        except Exception as e:
            print(f"Errore nell'avvio del riconoscimento: {e}")
            self.is_recognizing = False
        
    def stop_recognition(self):
        """Ferma il riconoscimento vocale"""
        try:
            if self.is_recognizing:
                self.asr_service.unsubscribe("SpeechRecognition")
                self.is_recognizing = False
                print("Riconoscimento vocale fermato")
        except Exception as e:
            print(f"Errore nell'arresto del riconoscimento vocale: {e}")
            
    def check_recognition(self):
        """Controlla periodicamente i risultati del riconoscimento vocale"""
        if not self.is_recognizing:
            return
            
        try:
            word_data = self.memory.getData("WordRecognized")
      
            if word_data and len(word_data) >= 2:
                word = word_data[0]
                confidence = word_data[1]
                if confidence > 0.5 and word!=self.last_word:
                    print(f"Parola riconosciuta: {word} (confidenza: {confidence})")
                    self.answers(word)
                    self.last_word=word
        except Exception as e:
            print(f"Errore durante il controllo del riconoscimento: {e}")


        
    def tts(self, msg):
        
        self.tts_service.say(msg.data)

    def answers(self,word):
        
        if word  in self.reply:
            print(f'risposta :{self.reply[word]}')
            ans=self.reply[word]
            self.tts_service.say(ans)


def main(args=None):
    rclpy.init(args=args)
    
    robot_ip = "192.168.0.161"
    node = QiUnipaSpeech(robot_ip)
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()