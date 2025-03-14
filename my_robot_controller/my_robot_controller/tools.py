from typing import Optional, Type
from pydantic import BaseModel, Field
from langchain_core.tools import BaseTool
from langchain_community.graphs import Neo4jGraph
import os
from .shared import memory

# Configurazione ambiente
os.environ["NEO4J_URI"] = "bolt://localhost:7689"
os.environ["NEO4J_USERNAME"] = "neo4j"
os.environ["NEO4J_PASSWORD"] = "12345678"



# Query per estrarre i dati principali della persona
description_query = """
    MATCH (p:Persona {id: $id_persona})
    OPTIONAL MATCH (p)-[:AVERE]->(mob:Mobilità)
    OPTIONAL MATCH (p)-[:AVERE]->(pat:Patologia)
    OPTIONAL MATCH (p)-[:AVERE]->(intol:Intolleranza)
    RETURN 
        p.id AS Nome, 
        collect(DISTINCT mob.id) AS Mobilità,
        collect(DISTINCT pat.descrizione) AS Patologia,
        collect(DISTINCT intol.intolleranza) AS Intolleranza;
"""

activity_query = """
    MATCH (p:Persona {id: $id_persona})
    OPTIONAL MATCH (p)-[:AVERE]->(:Patologia)-[:VIETARE]->(attivita_vietata:Attività)
    OPTIONAL MATCH (p)-[:AVERE]->(:Mobilità)-[:PERMETTERE]->(att_mob:Attività)
    WHERE att_mob IS NOT NULL AND NOT EXISTS {
        MATCH (p)-[:AVERE]->(:Patologia)-[:VIETARE]->(att_mob)
    }
    RETURN DISTINCT att_mob AS attività
    ORDER BY rand();
    """

recipe_query ="""
    MATCH (p:Persona {id: $id_persona})
    OPTIONAL MATCH (p)-[:AVERE]->(intol:Intolleranza)
    MATCH (r:Ricetta)
    WHERE NOT EXISTS {
        MATCH (intol:Intolleranza)-[:PROIBIRE]->(r)
    }
    ORDER BY rand()
    RETURN r.id AS Ricetta, r.ingredienti AS Ingredienti, r.intolleranze AS Intolleranza
   
    
"""
# Connessione al database Neo4j
graph = Neo4jGraph()

def get_information(entity: str) -> str:
    if not entity:
        return "Non conosco il tuo nome. Come ti chiami?"
    try:
        data = graph.query(description_query, params={"id_persona": entity})
        if data:
            return f"Nome: {data[0]['Nome']}, Mobilità: {data[0]['Mobilità']}, Patologia: {data[0]['Patologia']}, Intolleranza: {data[0]['Intolleranza']}"+ "\n"
        elif not data:
            return "Non ho trovato informazioni su questa persona."
        
        
    except Exception as e:
        print(f"Errore nel recupero informazioni: {e}")
    return "Nessuna informazione trovata"


  
def get_activities(entity: str) -> str:
    try:
        # Query activities
        activities = graph.query(activity_query, params={
            "id_persona": entity
        })
        
        if activities:
            activity_list = [f"{act['attività']['id']}: {act['attività']['descrizione']}" for act in activities]
            return "Attività consigliate:\n" + "\n".join(activity_list)+ "\n"
        else:
            return "Non ho trovato attività adatte alle tue condizioni."
    except Exception as e:
        return f"Errore durante la ricerca delle attività: {str(e)}"
    
def get_recipes(entity: str) -> str:
    try:
        recipes = graph.query(recipe_query, params={"id_persona": entity})
        
        if recipes:
            recipe_list = [f"{r['Ricetta']}: Ingredienti - {r['Ingredienti']}" for r in recipes]
            return "Ecco alcune ricette adatte a te:\n" + "\n".join(recipe_list)+ "\n"
        else:
            return "Non ho trovato ricette adatte alle tue intolleranze o preferenze."
    except Exception as e:
        return f"Errore durante la ricerca delle ricette: {str(e)}"

def clear_memory():
    memory.clear()
    return "Memoria cancellata"

def get_memory():
    # Recupero della memoria attuale
    chat_history = memory.chat_memory.messages
    output_dict = {"memory": []}
    
    if len(chat_history) > 0:
        for msg in chat_history[-5:]:
            output_dict["memory"].append(f"{msg.type}: {msg.content}")
    else:
        output_dict["memory"].append("")

    return output_dict

# Definizione tool per LangChain

# tool per estrarre informazioni sulla persona
class InformationInput(BaseModel):
    entity: str = Field(description="nome della persona menzionata nella domanda")

class InformationTool(BaseTool):
    name: str = "Information"
    description: str = "Strumento per recuperare informazioni personali"
    args_schema: Type[BaseModel] = InformationInput

    def _run(
        self,
        entity: str,
      
    ) -> str:
        return get_information(entity)

# tool per estrarre informazioni sulle attività adatte alla persona
class ActivityInput(BaseModel):
    entity: str = Field(description="nome della persona per cui cercare attività")
    
class ActivityTool(BaseTool):
    name: str = "Activity"
    description: str = "Strumento per trovare attività adatte alle condizioni della persona"
    args_schema: Type[BaseModel] = ActivityInput

    def _run(
        self,
        entity: str,
       
    ) -> str:
        return get_activities(entity)

    async def _arun(
        self,
        entity: str,
        
    ) -> str:
        return get_activities(entity)

# tool per estrarre informazioni riguardanti le ricette adatte alla persona
class RecipeInput(BaseModel):
    entity: str = Field(description="nome della persona per cui cercare ricette")

class RecipeTool(BaseTool):
    name: str = "Recipe"
    description: str = "Strumento per trovare ricette "
    args_schema: Type[BaseModel] = RecipeInput

    def _run(
        self,
        entity: str,
        
    ) -> str:
        return get_recipes(entity)

    async def _arun(
        self,
        entity: str,
        
    ) -> str:
        return get_recipes(entity)
    
# tool per eliminare la memoria
class DeleteMemoryTool(BaseTool):
    name: str = "DeleteMemory"
    description: str = "strumento per cancella la memoria qualora l'interlocutore sia differente"

    def _run(
        self,

    ) -> str:
        return clear_memory()

 
# tool per ottenere informazioni dalla memoria   
class GetMemoryTool(BaseTool):
    name: str = "GetMemory"
    description: str = "strumento per  ottenere la memoria rispetto l'interlocutore attuale"

    def _run(
        self,

    ) -> dict:
        return get_memory()