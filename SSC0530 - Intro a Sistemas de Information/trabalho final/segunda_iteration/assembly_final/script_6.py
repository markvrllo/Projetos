# Vou analisar o conteúdo do arquivo mais completo para verificar se ele segue a estrutura necessária
import re

# Arquivo que parece ser o mais completo
main_file = "Sistema-Inteligente-de-Gestao-Energetica-e-Conserv.md"

with open(main_file, "r", encoding="utf-8") as f:
    content = f.read()

# Divido o conteúdo em seções principais
sections = re.split(r'## ', content)

print(f"Número de seções principais encontradas: {len(sections)}")

# Examino as primeiras seções para entender a estrutura
for i, section in enumerate(sections[:5]):  # Primeiras 5 seções
    section_title = section.split('\n')[0] if section.strip() else "Início do documento"
    print(f"\nSeção {i}: {section_title}")
    
    # Encontrar subseções
    subsections = re.findall(r'### (.*?)(?=\n)', section)
    if subsections:
        print("Subseções:")
        for subsection in subsections:
            print(f"- {subsection}")
    
    # Mostro um trecho do conteúdo da seção
    section_content = '\n'.join(section.split('\n')[1:10])  # Primeiras 10 linhas
    print(f"Trecho do conteúdo:\n{section_content}")

# Verifico se o documento segue a estrutura solicitada no projeto
required_sections = [
    "Introdução", 
    "Solução proposta", 
    "Processamento da Informação", 
    "Concorrência e Vantagem Competitiva"
]

found_sections = []
for section in sections:
    section_title = section.split('\n')[0] if section.strip() else ""
    for required in required_sections:
        if required.lower() in section_title.lower():
            found_sections.append(required)
            break

print("\n" + "="*50)
print("Análise da estrutura do documento:")
print(f"Seções requeridas: {required_sections}")
print(f"Seções encontradas: {found_sections}")
print(f"Seções faltantes: {[s for s in required_sections if s not in found_sections]}")