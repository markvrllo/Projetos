# Vou analisar as verificações de fontes para saber quais informações são confiáveis
import re

# Vou ler os arquivos de verificação de fontes
verification_files = [
    "Verificacao-de-Fontes-dos-Dados-Numericos.md",
    "Verificacao-de-Fontes-dos-Dados-Numericos_-Resulta.md"
]

verified_data = {}

for filename in verification_files:
    with open(filename, "r", encoding="utf-8") as f:
        content = f.read()
        
        # Encontrar seções de dados confirmados
        confirmed_section = re.search(r'## Dados Confirmados com Fontes Fidedignas(.*?)(?=## Dados Sem Fontes Verificáveis|\Z)', 
                                      content, re.DOTALL)
        
        if confirmed_section:
            confirmed_data = confirmed_section.group(1)
            print(f"\nDados confirmados encontrados em {filename}:")
            print(confirmed_data[:500] + "...")
            
            # Extrair fatos específicos
            facts = re.findall(r'- \*\*(.*?)\*\*: (.*?)(?=\n- \*\*|\Z)', confirmed_data, re.DOTALL)
            
            for fact_name, fact_desc in facts:
                verified_data[fact_name] = fact_desc.strip()
                print(f"Fato verificado: {fact_name}")
        
        # Encontrar seções de dados não verificados
        unverified_section = re.search(r'## Dados Sem Fontes Verificáveis(.*?)(?=## |## Dados Incorretos Identificados|\Z)', 
                                       content, re.DOTALL)
        
        if unverified_section:
            unverified_data = unverified_section.group(1)
            print(f"\nDados sem verificação encontrados em {filename}:")
            print(unverified_data[:500] + "...")

print("\n" + "="*50)
print(f"Total de fatos verificados: {len(verified_data)}")
for fact, desc in verified_data.items():
    print(f"- {fact}: {desc[:150]}...")