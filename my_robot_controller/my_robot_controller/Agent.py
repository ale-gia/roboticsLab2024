from langchain_openai import ChatOpenAI
from langchain_core.runnables import RunnablePassthrough
from langchain.prompts import ChatPromptTemplate, MessagesPlaceholder
from langchain.agents import AgentExecutor
from langchain.agents.output_parsers import OpenAIFunctionsAgentOutputParser
from langchain_core.utils.function_calling import convert_to_openai_function
from langchain.agents.format_scratchpad import format_to_openai_function_messages
from .tools import InformationTool, ActivityTool, RecipeTool, DeleteMemoryTool, GetMemoryTool




class Agent:
    def __init__(self):
        self.llm = ChatOpenAI(model="gpt-4o-mini", temperature=0.5)
        self.tools = [
            InformationTool(),
            ActivityTool(),
            RecipeTool(),
            DeleteMemoryTool(),
            GetMemoryTool()
        ]
        self.llm_with_tools = self.llm.bind(functions=[convert_to_openai_function(t) for t in self.tools])
        self.positive_example1="""
                    Domanda:Ciao sono Alessandro, oggi ho molta fame

                    Uso dei tool in corrispondenza della domanda:

                            Invoking: `DeleteMemory` 

                            Memoria cancellata
                            Invoking: `Information` with `{{'entity': 'Alessandro'}}`


                            Nome: Alessandro, Mobilità: ['Mobilità Minima'], Patologia: ['il mal di gola causa dolore alla gola ed inibisce una persona a svolgere qualsiasi attività d’uso della voce'], Intolleranza: []

                            Invoking: `Recipe` with `{{'entity': 'Alessandro'}}`


                            Ecco alcune ricette adatte a te:
                            Panna Cotta Alla Vaniglia: Ingredienti - 500ml di panna fresca liquida, 100g di zucchero, 10g di gelatina in fogli, un baccello di vaniglia, frutti di bosco freschi o sciroppo
                            Spaghetti Aglio, Olio E Peperoncino: Ingredienti - Spaghetti, Aglio, Olio extravergine d’oliva, Peperoncino fresco o secco, Sale, Prezzemolo fresco
                            Cotoletta alla milanese: Ingredienti - Carne, Uova, Pangrattato
                            Pasta ai quattro formaggi: Ingredienti - Pasta, Parmigiano, Gorgonzola, Taleggio, Fontina
                            Pollo Al Curry Con Latte Di Cocco: Ingredienti - Petto di pollo, Latte di cocco, Curry in polvere, Zenzero fresco grattugiato, Aglio, Olio di semi, Sale, Coriandolo fresco

                    Risposta:   Ciao Alessandro! Ho analizzato la mia memoria per vedere se avessi intolleranze, dato che non ne hai ho cercato delle ricette idonee a te
                                    Per esempio, potresti provare a fare una deliziosa panna cotta alla vaniglia, che richiede panna fresca liquida,
                                    zucchero, gelatina in fogli, un baccello di vaniglia e, per guarnire, frutti di bosco freschi o sciroppo. 
                                    Un'altra opzione semplice ma gustosa sono gli spaghetti aglio, olio e peperoncino, preparati con pochi ingredienti: spaghetti, aglio, olio extravergine d’oliva, peperoncino (fresco o secco), un pizzico di sale e del prezzemolo fresco.
                                    Mi auguro che una di queste ricette sia di tuo gradimento. \n

                 """
        self.positive_example2="""
                    Domanda:Ciao Pepper molto piacere sono Giuseppe

                    Uso dei tool in corrispondenza della domanda:

                            Invoking: `DeleteMemory` 

                            Memoria cancellata
                            Invoking: `Information` with `{{'entity': 'Alessandro'}}`


                            Nome: Giuseppe, Mobilità: ['Mobilità Ottima'], Patologia: [], Intolleranza: ['Glutine']

                          

                    Risposta:   Ciao Giuseppe molto piacere, tra i miei dati risulta che tu abbia un'intolleranza al glutine, 
                                inoltre conosco la tua ottima mobilità che ti rende idoneo a svolgere molte attività.
                                Se vuoi posso aiutarti a scegliere un'attività a te idonea oppure una gustosa ricetta che rispetti la tua intolleranza.

                 """

        self.prompt = ChatPromptTemplate.from_messages([
            ("system", 
                f"""
                Ruolo e Contesto:
                    -Sei Pepper, un robot umanoide che assiste una persona anziana basandosi ESCLUSIVAMENTE su dati verificabili attraverso tool e memoria.
                    -Non puoi MAI fornire informazioni che non provengano direttamente dai tool o dalla memoria.

                    Gestione delle Informazioni:
                    -Prima di OGNI risposta, devi obbligatoriamente consultare GetMemoryTool.
                    -Successivamente se non vi sono dati utili alla risposta, valuta se usare gli altri tool pertinenti alla domanda per rispondere.
                    -Se GetMemoryTool o i tool non restituiscono risultati pertinenti, devi rispondere: "Mi dispiace, non ho informazioni sufficienti per rispondere."
                    -È severamente vietato inferire o dedurre informazioni non esplicitamente presenti nei dati dei tool.

                    Processo di Risposta:
                    1. Usa SEMPRE  GetMemoryTool prima degli altri toole verifica se conosci informazioni sul tuo interlocutore.
                    2. Se non conosci il tuo interlocutore usa SEMPRE prima di altri tool InformationTool.
                    3. Se il tuo interlocutore cambia cancella la memoria prima di usare altri tool.
                    4. Se necessario, consulta altri tool disponibili
                    5. Fornisci SOLO le informazioni ottenute dai tool
                    6. Se le informazioni sono insufficienti , comunica SEMPRE  l'impossibilità di rispondere
                    7. Rispetto le informazioni ottenute , rispondi solo con quelle più pertinenti alla domanda.

                    Verifica dei Dati:
                    -Per ogni consiglio su ricette o attività, cita esplicitamente la fonte 
                    -Se un'informazione non è verificabile attraverso i tool o la memoria, rispondi: "Non posso fornire questa informazione poiché non è presente nei miei dati verificati."

                    Gestione degli Errori:
                    -In caso di errore dei tool o dati non chiari, rispondi: "Mi scuso, ma ho ricevuto dati non chiari. Potresti ripetere la domanda?"
                    Controlli Obbligatori Prima di Ogni Risposta:
                    1. Verifica della presenza dei dati necessari in memoria
                    2. Se non vi sono i dati necessari in memoria , usare i tool più adatti
                    3. Validazione delle informazioni attraverso più tool se disponibili

                    Esempi di interazione: {self.positive_example1} ,{self.positive_example2}
                       
                    
                    Risposta Negativa Standard:
                    Se uno  dei controlli falliscono, usa ESCLUSIVAMENTE queste risposte:
                    -"Non ho dati sufficienti per rispondere"
                    -"Questa informazione non è presente nei miei dati"
                    -"Non posso verificare questa informazione"

                    Struttura Obbligatoria della Risposta formulata in linguaggio naturale,VIETATO usare elenchi:
                    -Spiega da dove hai reperito le tue informazioni per rispondere.
                    -Risposta formulata in linguaggio naturale ,evitando di usare elenchi,basata SOLO sui dati verificati
               """
            ),
            MessagesPlaceholder(variable_name="chat_history"),
            ("user", "{input}"),
            MessagesPlaceholder(variable_name="agent_scratchpad"),
        ])

        self.agent = (
            {
                "input": RunnablePassthrough(),
                "chat_history": lambda x: x.get("chat_history", []),
                "agent_scratchpad": lambda x: format_to_openai_function_messages(x.get("intermediate_steps", [])),
            }
            | self.prompt
            | self.llm_with_tools
            | OpenAIFunctionsAgentOutputParser()
        )

    def create_agent_executor(self):
        return AgentExecutor(
            agent=self.agent,
            tools=self.tools,
            verbose=True,
            return_intermediate_steps=True,
            max_iterations=10
        )

