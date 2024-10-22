import json
import random
import time
import random

# Funzione per modificare casualmente i parametri vitali con limiti realistici
def modify_patient_data(json_data):
    for patient in json_data['pazienti']:
        # Modifica casualmente la pressione arteriosa
        systolic, diastolic = map(int, patient['parametri_vitali']['pressione_arteriosa'].split('/'))
        systolic += random.randint(-5, 5)
        diastolic += random.randint(-5, 5)
        
        # Limiti realistici per la pressione arteriosa
        systolic = max(90, min(180, systolic))
        diastolic = max(60, min(120, diastolic))
        
        patient['parametri_vitali']['pressione_arteriosa'] = f"{systolic}/{diastolic}"

        # Modifica casualmente la frequenza cardiaca
        heart_rate = patient['parametri_vitali']['frequenza_cardiaca'] + random.randint(-3, 3)
        
        # Limite realistico per la frequenza cardiaca
        heart_rate = max(40, min(200, heart_rate))
        
        patient['parametri_vitali']['frequenza_cardiaca'] = heart_rate

        # Modifica casualmente il livello glicemico
        blood_sugar = patient['parametri_vitali']['livello_glicemico'] + random.randint(-5, 5)
        
        # Limite realistico per il livello glicemico
        blood_sugar = max(60, min(300, blood_sugar))
        
        patient['parametri_vitali']['livello_glicemico'] = blood_sugar

        # Modifica casualmente il BMI
        bmi = patient['parametri_vitali']['BMI'] + random.uniform(-0.5, 0.5)
        
        # Limiti realistici per il BMI
        bmi = max(15, min(45, bmi))
        
        patient['parametri_vitali']['BMI'] = bmi

    return json_data



def main(args=None):
        # Percorso del file JSON
    file_path = '/home/vboxuser/ros2_ws/src/my_robot_controller/my_robot_controller/data/patient_data.json'

    # Leggi i dati dal file JSON
    with open(file_path, 'r') as file:
        patient_data = json.load(file)

    # Simula modifiche ai parametri vitali ogni tot secondi
    while True:
        # Modifica i dati del paziente
        modified_data = modify_patient_data(patient_data)

        # Sovrascrivi il file JSON con i nuovi dati modificati
        with open(file_path, 'w') as file:
            json.dump(modified_data, file, indent=4)

        print("Dati aggiornati.")
        time.sleep(5)  # Attendi 5 secondi prima di effettuare la prossima modifica


if __name__ == '__main__':
    main()