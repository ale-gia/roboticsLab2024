import qi
import sys
import rclpy
import re
import time
import os
import wave
import socket
import struct
from rclpy.node import Node
from std_msgs.msg import Bool,String,Int32,ByteMultiArray
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
        self.vocabulary = ["ciao pepper", "come stai", "stop parlato"]
        
        self.reply={"ciao pepper":"Ciao ^start(animations/Stand/BodyTalk/BodyTalk_1) io sono Paul, piacere di conoscerti ^wait(animations/Stand/BodyTalk/BodyTalk_1) ",
                    "come stai": " Io sto bene e tu come ti senti?",
                    "stop parlato":"Ciao Ciao",
                   }
        
        
        self.asr_service = self.session.service("ALSpeechRecognition")
        self.memory = self.session.service("ALMemory")
        self.animated_service = self.session.service("ALAnimatedSpeech")
        self.audio_service = self.session.service("ALAudioRecorder")
        self.configuration = {"bodyLanguageMode":"contextual"}
        
        self.speech_sub = self.create_subscription(Bool, "/listen", self.set_speech, 10)
        self.tts_sub = self.create_subscription(String, "/speak", self.set_tts, 10)

        self.record_sub = self.create_subscription(Int32, "/record", self.record_2, 10)
        self.tracking_pub = self.create_publisher(Track, "/track", 10)
        self.audio_publisher = self.create_publisher(ByteMultiArray,'/audio', 10)
        self.posture_pub = self.create_publisher(PostureWithSpeed, "/posture", 10)

        # Setup iniziale del riconoscimento vocale
        self.setup_recognition()
        
        # Timer per il controllo periodico del riconoscimento vocale
        self.create_timer(1.0, self.check_recognition)

    def set_connection(self, ip, port):
        session = qi.Session()
        try:
            session.connect(f"tcp://{ip}:{port}")
        except RuntimeError:
            self.get_logger().error(f"Can't connect to Naoqi at ip \"{ip}\" on port {port}.\n"
                                    "Please check your script arguments.")
            sys.exit(1)
        return session

    def setup_recognition(self):
        try:
            # Imposta la lingua in italiano
            self.asr_service.setLanguage("Italian")
            self.get_logger().info("Lingua impostata a Italiano")
            
            # Imposta il vocabolario
            self.asr_service.setVocabulary(self.vocabulary, True)
            self.get_logger().info(f"Vocabolario impostato: {self.vocabulary}")
            
            # Creazione del proxy per l'evento
            self.memory.declareEvent("WordRecognized")
            self.get_logger().info("Evento WordRecognized dichiarato")

        except Exception as e:
            self.get_logger().info(f"Errore nella configurazione: {e}")
            raise

    def set_speech(self, msg):
        if msg.data and not self.is_recognizing:
            self.start_recognition()

        elif not msg.data and self.is_recognizing:
            self.stop_recognition()
            self.pub_track("Stop", 3.0)

    def pub_track(self, name, distance):
        msg=Track()
        msg.target_name=name
        msg.distance=distance
        self.tracking_pub.publish(msg)

    def pub_posture(self, name, speed):
        msg=PostureWithSpeed()
        msg.posture_name=name
        msg.speed=speed
        self.posture_pub.publish(msg)
  
    def start_recognition(self):
        try:
            self.pub_track("Sound", 1.0)
            self.asr_service.subscribe("SpeechRecognition")
            self.is_recognizing = True
            self.get_logger().info("Riconoscimento vocale avviato")
        except Exception as e:
            self.get_logger().info(f"Errore nell'avvio del riconoscimento: {e}")
            self.is_recognizing = False
        
    def stop_recognition(self):
        try:
            #self.pub_posture("Stand", 0.5)
            self.asr_service.unsubscribe("SpeechRecognition")
            self.is_recognizing = False
            self.get_logger().info("Riconoscimento vocale fermato")
        except Exception as e:
             self.get_logger().info(f"Errore nell'arresto del riconoscimento vocale: {e}")

    def answers(self,word):
        if word  in self.reply:
            self.get_logger().info(f'risposta :{self.reply[word]}')
            ans=self.reply[word]
            self.stop_recognition()
            self.animated_service.say(ans)
            self.pub_posture("Stand", 0.5)
            self.start_recognition()
            if word =="stop parlato" and self.is_recognizing :
                self.stop_recognition()
                self.pub_track("Stop", 3.0)
            
    def check_recognition(self):
        if not self.is_recognizing:
            return
            
        try:
            word_data = self.memory.getData("WordRecognized")
            
            self.memory.insertData("WordRecognized","") #evita di leggere ripetutamente la stessa parola
            if word_data:
                self.get_logger().info(f"Sentence: {word_data}")
                word =re.sub(r'\W+', ' ', word_data[0]).strip() # Regex per eliminare tutto ciò che non è una parola
                
            if word_data and word_data!=self.last_word:
                confidence = word_data[1]
                self.get_logger().info(f"Parola riconosciuta: {word} (confidenza: {confidence})")
                if confidence > 0.455 :
                    #self.get_logger().info(f"Parola riconosciuta: {word} (confidenza: {confidence})")
                    self.answers(word)
                    self.last_word=word
                    
        except Exception as e:
             self.get_logger().info(f"Errore durante il controllo del riconoscimento: {e}")

    def set_tts(self, msg):
        self.animated_service.say(msg.data)
        self.pub_posture("Stand", 0.5)


    def record_2(self,msg):
        """
        Registra audio dai microfoni di Pepper e lo salva direttamente in locale sul computer.

        :param ip: Indirizzo IP del robot Pepper
        :param port: Porta di connessione (di default 9559)
        :param duration: Durata della registrazione in secondi
        :param output_file: Percorso del file audio in locale
        """
        self.get_logger().info("test")
        output_file="received_audio.wav"
        duration=msg.data
        try:
    
            # Servizio ALAudioDevice
            audio_device = self.session.service("ALAudioDevice")

            # Configurazione socket per ricevere audio
            server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            server_socket.bind(('0.0.0.0', 9000))  # Porta locale per ricevere audio
            server_socket.listen(1)
            self.get_logger().info("test")
            # Configura ALAudioDevice per inviare audio
            channels = 4  # Canale 3 = microfoni frontali, posteriori, sinistro e destro
            client_name="python_client"
            audio_device.setClientPreferences(client_name, 48000, channels, 1)
            self.get_logger().info("test")
            audio_device.subscribe(client_name)

            self.get_logger().info("In attesa di connessione dal robot...")
            conn, addr = server_socket.accept()

            
            self.get_logger().info(f"Connessione stabilita con {addr}.")

            # Configurazione del file WAV
            wav_file = wave.open(output_file, 'wb')
            wav_file.setnchannels(4)  # Numero di canali (4 microfoni)
            wav_file.setsampwidth(2)  # Profondità (16-bit = 2 byte)
            wav_file.setframerate(16000)  # Frequenza di campionamento

            self.get_logger().info(f"Inizio registrazione per {duration} secondi...")
            start_time = time.time()

            while time.time() - start_time < duration:
                # Ricevi dati audio dal robot
                data = conn.recv(4096)
                if not data:
                    break
                wav_file.writeframes(data)

            # Ferma la registrazione
            wav_file.close()
            audio_device.unsubscribe(client_name)
            conn.close()
            server_socket.close()
            self.get_logger().info(f"Registrazione completata. File salvato in: {output_file}")
            

        except Exception as e:
            self.get_logger().info(f"Errore nel salvataggio locale dell'audio: {e}")
            
    def record_3(self,msg):
       
        

        # Configurazione della registrazione
        channels = [1, 1, 1, 1]  # Solo il microfono centrale è abilitato
        audio_format = "wav"
        sample_rate = 16000  # Frequenza di campionamento (16 kHz)
        duration=msg.data  # Durata della registrazione in secondi
        output_file_robot = "/home/nao/audio_record_unipa/test_pepper.wav"

        # Avviare la registrazione
        self.get_logger().info("Avvio registrazione...")
        
        self.audio_service.startMicrophonesRecording(output_file_robot, audio_format, sample_rate, channels)

        # Attendere la fine della registrazione
        time.sleep(duration)

        # Terminare la registrazione
        self.audio_service.stopMicrophonesRecording()
        self.get_logger().info(f"Registrazione terminata e salvata in: {output_file_robot}")
        

        # Trasferire il file al PC
        local_output_file = "audio_recording.wav"
        os.system(f"scp nao@192.168.0.161:{output_file_robot} {local_output_file}")
        
        self.get_logger().info(f"File audio trasferito al PC: {local_output_file}")
        


    def record(self,msg):
        channels = [1, 1, 1, 1]  # Abilitare tutti e 4 i microfoni (frontale, posteriore, sinistro, destro)
        audio_format = "wav"
        duration=msg.data
        current_dir = os.getcwd()
        relative_path="../../../test_pepper.wav"
        file_path = os.path.join(current_dir, relative_path)
        try:
            self.get_logger().info(f"Inizio registrazione per {duration} secondi...")
            # Avvia la registrazione
            self.audio_service.startMicrophonesRecording("/home/nao/audio_record_unipa/test_pepper.wav", audio_format, 16000, channels)

            # Aspetta per la durata specificata
            time.sleep(duration)

            # Ferma la registrazione
            self.audio_service.stopMicrophonesRecording()
      
            # Pubblica l'audio registrato
            self.publish_audio(file_path)

        except Exception as e:
            self.get_logger().info(f"Errore durante la registrazione: {e}")

    def publish_audio(self, file_path):
        try:
            # Leggi il file WAV
            with wave.open(file_path, 'rb') as wav_file:
                frames = wav_file.readframes(wav_file.getnframes())
                audio_msg = ByteMultiArray(data=frames)
                self.audio_publisher.publish(audio_msg)
                self.get_logger().info(f"File audio pubblicato sul topic 'audio_topic'.")
        except Exception as e:
            self.get_logger().error(f"Errore durante la pubblicazione del file audio: {e}")

def main(args=None):
    rclpy.init(args=args)
 
    node = QiUnipaSpeech()
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()