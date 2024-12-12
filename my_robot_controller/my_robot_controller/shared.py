from langchain.memory import ConversationBufferMemory

# Oggetto memory condiviso
memory = ConversationBufferMemory(
    memory_key="chat_history", 
    return_messages=True,
    input_key="input",  
    output_key="output"
)
