import qi
import time
import sys

class SpeechRecognition:
    def __init__(self, robot_ip, robot_port=9559):
        # Connessione al robot
        self.session = qi.Session()
        try:
            self.session.connect(f"tcp://{robot_ip}:{robot_port}")
            print("Connesso a Pepper")
        except RuntimeError:
            print("Impossibile connettersi a Pepper")
            sys.exit(1)
            
        # Inizializzazione dei servizi necessari
        self.asr_service = self.session.service("ALSpeechRecognition")
        self.memory = self.session.service("ALMemory")
        
    def setup_recognition(self, vocabulary):
        """Configura il riconoscimento vocale con il vocabolario specificato"""
        try:
            # Imposta la lingua in italiano
            self.asr_service.setLanguage("Italian")
            print("Lingua impostata a Italiano")
            
            # Imposta il vocabolario
            self.asr_service.setVocabulary(vocabulary, False)
            print(f"Vocabolario impostato: {vocabulary}")
            
            # Creazione del proxy per l'evento
            self.memory.declareEvent("WordRecognized")
            print("Evento WordRecognized dichiarato")

        except Exception as e:
            print(f"Errore nella configurazione: {e}")
            raise
        
    def start_recognition(self):
        """Avvia il riconoscimento vocale"""
        try:
            # Avvia il riconoscimento vocale
            self.asr_service.subscribe("SpeechRecognition")
            print("Riconoscimento vocale avviato")
            
            # Inizia il loop di controllo della memoria
            while True:
                # Leggi direttamente dalla memoria
                word_data = self.memory.getData("WordRecognized")
                if word_data and len(word_data) >= 2:
                    word = word_data[0]
                    confidence = word_data[1]
                    if confidence > 0.5:  # Soglia di confidenza personalizzabile
                        print(f"Parola riconosciuta: {word} (confidenza: {confidence})")
                time.sleep(0.1)  # Piccola pausa per non sovraccaricare la CPU
                
        except KeyboardInterrupt:
            self.stop_recognition()
        except Exception as e:
            print(f"Errore durante il riconoscimento: {e}")
            self.stop_recognition()
        
    def stop_recognition(self):
        """Ferma il riconoscimento vocale"""
        try:
            self.asr_service.unsubscribe("SpeechRecognition")
            print("Riconoscimento vocale fermato")
        except Exception as e:
            print(f"Errore nell'arresto del riconoscimento vocale: {e}")


if __name__ == "__main__":
    robot_ip = "192.168.0.161" 
    
    try:
        # Creazione dell'istanza
        speech = SpeechRecognition(robot_ip)
        
        # Configurazione del vocabolario
        vocabulary = ["ciao", "come stai", "arrivederci"]
        speech.setup_recognition(vocabulary)
        
        # Avvio del riconoscimento
        speech.start_recognition()
        
    except Exception as e:
        print(f"Errore generale: {e}")
        sys.exit(1)