import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import Bool,String,Int32,ByteMultiArray

from langchain_openai import ChatOpenAI
from langchain_core.runnables import RunnablePassthrough
from langchain.prompts import ChatPromptTemplate, MessagesPlaceholder
from langchain.agents import AgentExecutor
from langchain.agents.output_parsers import OpenAIFunctionsAgentOutputParser
from langchain_core.utils.function_calling import convert_to_openai_function
from langchain.agents.format_scratchpad import format_to_openai_function_messages

from .tools import InformationTool, ActivityTool, RecipeTool, MemoryTool,graph
from .shared import memory

class Pepper_Controller(Node):
    def __init__(self):
        super().__init__("pepper_controller")
        self.speech_pub= self.create_publisher(Bool, "/speech", 10)
        self.robot_speak_pub=self.create_publisher(String,"/robot_speak",10) #parlato
        self.robot_speech_pub=self.create_publisher(String,"/robot_speech",10)#ascolto
        self.transcription_sub=self.create_subscription(String,"/transcription",self.user_transcription,10) 

        self.isSpeaking_sub = self.create_subscription(Bool, "/is_speaking",self.check_speaking,10)
        self.is_speaking=False
        # Configurazione modello e tools
        llm = ChatOpenAI(model="gpt-4o-mini", temperature=0)
        tools = [InformationTool(), ActivityTool(), RecipeTool(), MemoryTool()]
        llm_with_tools = llm.bind(functions=[convert_to_openai_function(t) for t in tools])

        # Creazione prompt
        prompt = ChatPromptTemplate.from_messages([
            ("system", 
                "Tu sei Pepper, un robot umanoide che deve assistere una persona anziana ovvero colui con il quale stai interagendo "
                "Se hai già ottenuto informazioni per una persona, NON richiamare nuovamente il tool. "
                "Ragiona sempre sull'output ottenuto confrontandolo con la richiesta in input "
                "Se la persona con la quale stai interagendo ora ha un nome differente da quello memorizzato allora invoca MemoryTool per cancellare la memoria e rispondi alla domanda usando i tool"
                "Se ottieni una risposta completa da un tool, usa queste informazioni per formulare la tua risposta all'utente e termina l'elaborazione."
                "Ti occuperai di consigliare ricette adatte alle intolleranze della persona assistita"
                "Ti occuperai di consigliare attività adatte alle patologie o umore della persona assistita"
                "Rispondi sempre  con le parole essenziali e con un tono cordiale, rispetto le informazioni a tua disposizione"
            ),
            MessagesPlaceholder(variable_name="chat_history"),
            ("user", "{input}"),
            MessagesPlaceholder(variable_name="agent_scratchpad"),
        ])

        # Configurazione agente
        agent = (
            {
                "input": RunnablePassthrough(),
                "chat_history": lambda x: x.get("chat_history", []),
                "agent_scratchpad": lambda x: format_to_openai_function_messages(
                    x.get("intermediate_steps", [])
                ),
            }
            | prompt
            | llm_with_tools
            | OpenAIFunctionsAgentOutputParser()
        )

        self.agent_executor = AgentExecutor(
            agent=agent, 
            tools=tools, 
            verbose=True,
            memory=memory,
            return_intermediate_steps=False,
            max_iterations=5
        )
        self.user_input=""
        self.last_user_input=""
        self.start_conversation=False
        

    def user_transcription(self,msg): #aggiornamento trascrizione whisper
        self.get_logger().info(f"Pepper: trascrizione ottenuta {msg.data}")
        self.user_input=msg.data

    # Loop conversazionale
    def conversational_loop(self):
        self.get_logger().info(f"Conversational loop started")
        msg=String()
        if not (self.start_conversation):

            msg.data="Ciao sono Pepper ! Come posso aiutarti oggi ?"
            self.robot_speak_pub.publish(msg)
      
            self.start_conversation=True
        self.robot_speech_pub.publish(msg) #ascolta
        while True:
        
            try:    
                if self.user_input!=self.last_user_input: 
                    self.get_logger().info(f"Pepper sta rispondendo ..")
                    self.get_logger().info(f"Listening ---> {self.user_input}")                  
                    if self.user_input== 'termina':
                    
                        msg.data= "È stato un piacere aiutarti. A presto!"
                        self.robot_speak_pub.publish(msg)
                        self.last_user_input=self.user_input
                        break

                    response = self.agent_executor.invoke({"input": self.user_input})
                    self.get_logger().info(f"Response{response['output']}")
                    msg.data=response['output']
                    self.robot_speak_pub.publish(msg)

                    while(self.is_speaking):#
                        time.sleep(0.3)

                    memory.save_context(
                        {"input": self.user_input}, 
                        {"output": response['output']}
                    )
                    self.last_user_input=self.user_input
                    self.robot_speech_pub.publish(msg) #ascolta
               
            except Exception as e:
                print(f"Errore: {e}")

    def check_speaking(self,msg):
        self.is_speaking=msg.data
         


def main(args=None):
    rclpy.init(args=args)
 
    node = Pepper_Controller()
    node.conversational_loop()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    
    try:
        main()
    finally:
        graph._driver.close()