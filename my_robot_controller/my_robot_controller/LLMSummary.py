
from langchain_core.runnables import RunnablePassthrough
from langchain.prompts import ChatPromptTemplate
from langchain_groq import ChatGroq


class LLMSummary:
    def __init__(self):
        self.llm = ChatGroq(model="llama3-70b-8192", temperature=0)
        self.summary_prompt = ChatPromptTemplate.from_messages([
            ("system", """
                Analizza la risposta dell'agente e crea un riassunto rispetto queste informazioni:

                1. CONTESTO: Una frase che descrive il contesto della richiesta dell'utente.
                2. AZIONI: Le principali azioni intraprese dall'agente per rispondere.
                3. RISPOSTA: Il nucleo della risposta fornita dall'agente.
                4. DATI UTILIZZATI: I tool e le informazioni utilizzate per formulare la risposta.

                Il riassunto deve essere conciso, discorsivo ed informativo, evidenziando i punti chiave 
                dell'interazione senza ripetere informazioni non necessarie.
            """),
            ("user", "{response}")
        ])

    def create_summary_chain(self):
        return (
            {"response": RunnablePassthrough()} 
            | self.summary_prompt 
            | self.llm
        )