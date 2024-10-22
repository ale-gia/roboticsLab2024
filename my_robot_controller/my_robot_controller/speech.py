from naoqi import ALProxy
import time

IP_DEL_TUO_ROBOT = "192.168.0.103"  # Sostituisci con l'IP del tuo robot
PORTA_DEL_TUO_ROBOT = 9559

def callback(value):
    if value:
        print("Riconosciuto:", value[0])

speech_recognition = ALProxy("ALSpeechRecognition", IP_DEL_TUO_ROBOT, PORTA_DEL_TUO_ROBOT)
speech_recognition.setLanguage("Italian")
keywords = ["ciao", "come stai", "aiuto"]
speech_recognition.setVocabulary(keywords, False)

speech_recognition.subscribe("Test_ASR")

try:
    while True:
        time.sleep(1)
except KeyboardInterrupt:
    print("Interruzione del programma")

speech_recognition.unsubscribe("Test_ASR")