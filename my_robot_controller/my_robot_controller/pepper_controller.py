import rclpy
import time

from rclpy.node import Node
from std_msgs.msg import Bool,String

from .shared import memory
from .Agent import Agent
from .LLMSummary import LLMSummary
from .tools import graph

class Pepper_Controller(Node):
    def __init__(self):
        super().__init__("pepper_controller")
        self.robot_speak_pub=self.create_publisher(String,"/robot_speak",10) #parlato
        self.robot_listen_pub=self.create_publisher(String,"/robot_listen",10)#ascolto
        self.transcription_sub=self.create_subscription(String,"/transcription",self.user_transcription,10) 
        self.isSpeaking_sub = self.create_subscription(Bool, "/is_speaking",self.check_speaking,10)
        self.is_speaking=False
        # Configurazione modelli e tools
        agent=Agent()
        llm_sum=LLMSummary()
        self.agent_executor=agent.create_agent_executor()
        self.summary_chain=llm_sum.create_summary_chain()
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

            msg.data="Ciao sono Pepper ! ricordami il tuo nome ,così posso aiutarti a scegliere attività o ricette adatte alle tue esigenze?"
            self.robot_speak_pub.publish(msg)
            self.start_conversation=True

        self.robot_listen_pub.publish(msg) #ascolta
        while True:
        
            try:    
                if self.user_input!=self.last_user_input: 
                    self.get_logger().info(f"Listening ---> {self.user_input}")                  
                    if self.user_input== 'termina':
                    
                        msg.data= "È stato un piacere aiutarti. A presto!"
                        self.robot_speak_pub.publish(msg)
                        self.last_user_input=self.user_input
                        break

                    response = self.agent_executor.invoke({"input": self.user_input})
                    # risposta agente
                    self.get_logger().info(f"Response{response['output']}\n")
              
                    

                    msg.data=response['output']
                    self.robot_speak_pub.publish(msg)

                    # riassunto sull'attuale interazione
                    summary_input = {
                    "response": f"""
                        Risposta completa: {response['output']}
                        
                        Passi intermedi:
                        {response['intermediate_steps']}
                    """
                    }
                    #uso del modello per riassumere l'interazione
                    summary_output = self.summary_chain.invoke(summary_input)
            
                    summary= summary_output.content
            
                    print("\n\nRiassunto dell'interazione:")
                    print(summary)
                    #salviamo in memoria il riassunto ottenuto
                    memory.save_context(
                        {"input": self.user_input}, 
                        {"output": summary}
                    )
               
                    while(self.is_speaking):
                        time.sleep(0.3)

                    memory.save_context(
                        {"input": self.user_input}, 
                        {"output": response['output']}
                    )
                    self.last_user_input=self.user_input
                    self.robot_listen_pub.publish(msg) #ascolta
               
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