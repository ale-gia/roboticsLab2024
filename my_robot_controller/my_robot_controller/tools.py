from typing import Optional, Type
from pydantic import BaseModel, Field
from langchain_core.tools import BaseTool
from langchain_community.graphs import Neo4jGraph
import os
from langchain.memory import ConversationBufferMemory
from shared import memory

# Configurazione ambiente
os.environ["NEO4J_URI"] = "bolt://localhost:7689"
os.environ["NEO4J_USERNAME"] = "neo4j"
os.environ["NEO4J_PASSWORD"] = "12345678"



# Query per estrarre i dati principali della persona
description_query = """
    MATCH (p:Persone {id: $id_persona})
    OPTIONAL MATCH (p)-[:AVERE]->(mob:Mobilità)
    OPTIONAL MATCH (p)-[:AVERE]->(u:Umore)
    OPTIONAL MATCH (p)-[:AVERE]->(pat:Patologie)
    OPTIONAL MATCH (p)-[:AVERE]->(intol:Intolleranze)
    RETURN 
        p.id AS Nome, 
        collect(DISTINCT mob.id) AS Mobilità,
        collect(DISTINCT u.id) AS Umore,
        collect(DISTINCT pat.descrizione) AS Patologie,
        collect(DISTINCT intol.intolleranza) AS Intolleranze;
"""
activity_query = """
    MATCH (p:Persone {id: $id_persona})
    OPTIONAL MATCH (p)-[:AVERE]->(pat:Patologie)-[:VIETARE]->(attivita_vietata:Attività)
    OPTIONAL MATCH (p)-[:AVERE]->(mob:Mobilità)-[:PERMETTERE]->(att_mob:Attività)
    WHERE NOT (att_mob = attivita_vietata) 
    RETURN DISTINCT att_mob as attività
"""
recipe_query ="""
    MATCH (p:Persone {id: $id_persona})
    OPTIONAL MATCH (p)-[:AVERE]->(intol:Intolleranze)
    MATCH (r:Ricette)
    WHERE NOT EXISTS {
        MATCH (intol:Intolleranze)-[:PROIBIRE]->(r)
    }
    RETURN r.id AS Ricetta, r.ingredienti AS Ingredienti, r.intolleranze AS Intolleranze
    LIMIT 5;
"""
# Connessione al database Neo4j
graph = Neo4jGraph()

def get_information(entity: str) -> str:
    if not entity:
        return "Non conosco il tuo nome. Come ti chiami?"
    try:
        data = graph.query(description_query, params={"id_persona": entity})
        if data:
            return f"Nome: {data[0]['Nome']}, Umore: {data[0]['Umore']}, Mobilità: {data[0]['Mobilità']}, Patologie: {data[0]['Patologie']}, Intolleranze: {data[0]['Intolleranze']}"
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
            return "Attività consigliate:\n" + "\n".join(activity_list)
        else:
            return "Non ho trovato attività adatte alle tue condizioni."
    except Exception as e:
        return f"Errore durante la ricerca delle attività: {str(e)}"
    
def get_recipes(entity: str) -> str:
    try:
        recipes = graph.query(recipe_query, params={"id_persona": entity})
        
        if recipes:
            recipe_list = [f"{r['Ricetta']}: Ingredienti - {r['Ingredienti']}" for r in recipes]
            return "Ecco alcune ricette adatte a te:\n" + "\n".join(recipe_list)
        else:
            return "Non ho trovato ricette adatte alle tue intolleranze o preferenze."
    except Exception as e:
        return f"Errore durante la ricerca delle ricette: {str(e)}"

def clear_memory():
    memory.clear()
    return "Memoria cancellata"


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
    description: str = "trova attività adatte alle condizioni della persona"
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
    description: str = "trova ricette adatte alle intolleranze della persona"
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
    

class MemoryTool(BaseTool):
    name: str = "Memory"
    description: str = "cancella la memoria"

    def _run(
        self,

    ) -> str:
        return clear_memory()

    """
    async def _arun(
        self,
    ) -> str:
        return clear_memory()
    """
    