import qi
import sys
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool,String
from qi_unipa_msgs.msg import PostureWithSpeed,Track

class QiUnipaSpeech(Node):  
    def __init__(self):
        super().__init__('qi_unipa_speech')
        
        # Ottieni i parametri
        self.declare_parameter('ip', '192.168.0.161')
        self.declare_parameter('port', 9559)
        ip = self.get_parameter('ip').get_parameter_value().string_value
        port = self.get_parameter('port').get_parameter_value().integer_value
        
        # Connessione sessione
        self.session = self.set_connection(ip, port)

        self.is_recognizing = False
        self.last_word=""
        self.vocabulary = ["ciao", "come stai", "stop", 
                           "gruppo di formiche","troppo rumoroso","nuova scoperta",
                           "potremmo differenziare","funzionano le cose","di ragazze",
                           "colorato assegnato"]
        
        self.reply={"ciao":"Ciao ^start(animations/Stand/BodyTalk/BodyTalk_1) a te ^wait(animations/Stand/BodyTalk/BodyTalk_1) ",
                    "come stai": " Io sto bene e tu come ti senti?",
                    "stop":"Ciao Ciao",
                    "gruppo di formiche": "Anche ^start(animations/Stand/Emotions/Positive/Peaceful_1) io, Simone. Le formiche sono affascinanti! Hanno una società così complessa...^wait(animations/Stand/Emotions/Positive/Peaceful_1)",
                    "troppo rumoroso":"Forse ^start(animations/Stand/BodyTalk/BodyTalk_8) potremmo aiutarla a trovare un po' di ordine, no, Simone?^wait(animations/Stand/BodyTalk/BodyTalk_8)",
                    "nuova scoperta":"Esatto ^start(animations/Stand/Emotions/Positive/Hysterical_1)! è come un'avventura. Si esplorano nuovi mondi, si fanno nuove scoperte, si imparano nuove cose...^wait(animations/Stand/Emotions/Positive/Hysterical_1)",
                    "potremmo differenziare":"Ottima ^start(animations/Stand/Gestures/Enthusiastic_4) idea! Potrei analizzare i codici a barre delle confezioni e suggerire il contenitore più adatto.^wait(animations/Stand/Gestures/Enthusiastic_4)",
                    "funzionano le cose":"Potrei ^start(animations/Stand/Gestures/Thinking_1) mostrarti le immagini di un cervello che prova il piacere della scoperta, ma temo che nessuno qui reggerebbe la tua espressione di perplessità. ^wait(animations/Stand/Gestures/Thinking_1)",
                    "di ragazze":"In ^start(animations/Stand/Gestures/Desperate_1)effetti, non posso darti torto. Potresti darmi una mano tu! ^wait(animations/Stand/Gestures/Desperate_1)",
                    "colorato assegnato":"Pensate ^start(animations/Stand/Emotions/Positive/Happy_4)che io sono stato programmato allo stesso modo, ma il mio algoritmo è molto più complesso!^wait(animations/Stand/Emotions/Positive/Happy_4)"}
        
        
        self.asr_service = self.session.service("ALSpeechRecognition")
        self.memory = self.session.service("ALMemory")
        self.animated_service = self.session.service("ALAnimatedSpeech")
        self.tts_service= self.session.service("ALTextToSpeech")
        #self.configuration = {"bodyLanguageMode":"contextual"}
        
        self.speech_sub = self.create_subscription(Bool, "/listen", self.speech_callback, 10)
        self.tts_sub = self.create_subscription(String, "/speak", self.tts, 10)
        self.tracking_pub = self.create_publisher(Track, "/track", 10)
        self.posture_pub = self.create_publisher(PostureWithSpeed, "/posture", 10)

        # Setup iniziale del riconoscimento vocale
        self.setup_recognition()
        
        # Timer per il controllo periodico del riconoscimento vocale
        self.create_timer(1.5, self.check_recognition)

    def set_connection(self, ip, port):
        session = qi.Session()
        try:
            session.connect(f"tcp://{ip}:{port}")
        except RuntimeError:
            self.get_logger().error(f"Can't connect to Naoqi at ip \"{ip}\" on port {port}.\n"
                                    "Please check your script arguments.")
            sys.exit(1)
        return session
    
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
            
            self.get_logger().info("Lingua impostata a Italiano")
            
            # Imposta il vocabolario
            self.asr_service.setVocabulary(self.vocabulary, False)
            self.get_logger().info(f"Vocabolario impostato: {self.vocabulary}")
            
            # Creazione del proxy per l'evento
            self.memory.declareEvent("WordRecognized")
            self.get_logger().info("Evento WordRecognized dichiarato")

        except Exception as e:
            self.get_logger().info(f"Errore nella configurazione: {e}")
            raise
        
    def start_recognition(self):
        """Avvia il riconoscimento vocale"""
        try:
            if not self.is_recognizing:
                # Avvio Tracking
                msg=Track()
                msg.target_name="Face"
                msg.distance=1.0
                self.tracking_pub.publish(msg)
                self.get_logger().info("Tracking Facciale avviato")

              

                self.asr_service.subscribe("SpeechRecognition")
                self.is_recognizing = True
                self.get_logger().info("Riconoscimento vocale avviato")
        except Exception as e:
            self.get_logger().info(f"Errore nell'avvio del riconoscimento: {e}")
            self.is_recognizing = False
        
    def stop_recognition(self):
        """Ferma il riconoscimento vocale"""
        try:
            if self.is_recognizing:
                #Stop Tracking
              
                msg=Track()
                msg.target_name="Stop"
                msg.distance=1.0
                self.tracking_pub.publish(msg)
                self.get_logger().info("Tracking Facciale disattivato")

                self.asr_service.unsubscribe("SpeechRecognition")
                self.is_recognizing = False
                self.get_logger().info("Riconoscimento vocale fermato")
        except Exception as e:
             self.get_logger().info(f"Errore nell'arresto del riconoscimento vocale: {e}")
            
    def check_recognition(self):
        """Controlla periodicamente i risultati del riconoscimento vocale"""
        if not self.is_recognizing:
            return
            
        try:
            word_data = self.memory.getData("WordRecognized")
            self.memory.insertData("WordRecognized","")
            if word_data and len(word_data) >= 2:
                word = word_data[0]
                confidence = word_data[1]
              
                if confidence > 0.45 :
                    self.get_logger().info(f"Parola riconosciuta: {word} (confidenza: {confidence})")
                    self.answers(word)
                 
        except Exception as e:
             self.get_logger().info(f"Errore durante il controllo del riconoscimento: {e}")


        
    def tts(self, msg):
        
        self.tts_service.say(msg.data)

    def answers(self,word):
       

        if word  in self.reply:
            self.get_logger().info(f'risposta :{self.reply[word]}')
            ans=self.reply[word]
            self.animated_service.say(ans)
            msg=PostureWithSpeed()
            msg.posture_name="StandInit"
            msg.speed=0.5
            self.posture_pub.publish(msg)
            if word =="stop" :
                self.stop_recognition()
                

def main(args=None):
    rclpy.init(args=args)
 
    node = QiUnipaSpeech()


    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()