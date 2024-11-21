import os
from groq import Groq

class Llm_Groq:
    def __init__(self, api_key=None, model="llama3-8b-8192"):
        # Inizializza il client con la chiave API
        self.api_key = api_key or os.environ.get("GROQ_API_KEY")
        if not self.api_key:
            raise ValueError("API key non fornita e non trovata nelle variabili d'ambiente.")
        self.client = Groq(api_key=self.api_key)
        self.model = model

    def get_response(self, system_message, user_message):
        """
        Metodo per ottenere una risposta dal modello di chat.
        
        :param system_message: serve per indiciare il contesto.
        :param user_message: serve per indicare la domanda da porre.
        :return: La risposta generata dal modello.
        """
        try:
            chat_completion = self.client.chat.completions.create(
                messages=[
                    {"role": "system", "content": system_message},
                    {"role": "user", "content": user_message},
                ],
                model=self.model,
            )
            return chat_completion.choices[0].message.content
        except Exception as e:
            return f"Errore durante l'elaborazione della richiesta: {e}"
