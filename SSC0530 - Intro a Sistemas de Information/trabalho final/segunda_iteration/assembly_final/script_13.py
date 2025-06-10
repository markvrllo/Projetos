# Vamos examinar o documento gerado para garantir qualidade e completude
import re

with open("texto_sistematizado_unificado.md", "r", encoding="utf-8") as f:
    unified_doc = f.read()

# Verificar se todas as seções requeridas estão presentes
required_sections = [
    "1. Introdução",
    "1.1 Contextualização do problema",
    "1.2 Motivação e justificativa",
    "1.3 Soluções existentes",
    "2. Solução proposta",
    "2.1 Funcionalidades",
    "2.2 Questões técnicas",
    "2.3 Questões organizacionais",
    "2.4 Questões humanas",
    "2.5 Processos de negócio",
    "3. Processamento da Informação",
    "3.1 Dados de entrada",
    "3.2 Processamento",
    "3.3 Dados de saída",
    "4. Concorrência e Vantagem Competitiva",
    "4.1 Modelo de Forças Competitivas de Porter",
    "4.2 Vantagem Competitiva",
    "5. Referências Bibliográficas"
]

print("Verificação de seções requeridas:")
for section in required_sections:
    # Adaptar o padrão de busca conforme o nível da seção
    if len(section.split()) == 1 or '.' not in section:
        pattern = rf'## {re.escape(section)}'
    elif section.count('.') == 1:
        num, title = section.split(' ', 1)
        pattern = rf'### {re.escape(num)} {re.escape(title)}'
    else:
        pattern = rf'### {re.escape(section)}'
    
    if re.search(pattern, unified_doc):
        print(f"✓ Seção '{section}' encontrada")
    else:
        print(f"✗ Seção '{section}' NÃO encontrada")

# Verificar citações e referências
citations = re.findall(r'\[\^(\d+)\]', unified_doc)
references = re.findall(r'\[\^(\d+)\]:.*', unified_doc)

print(f"\nCitações encontradas: {len(set(citations))} únicas em {len(citations)} totais")
print(f"Referências definidas: {len(references)}")

# Verificar citações sem referência correspondente
missing_refs = set(citations) - set(ref.replace('[^', '').split(']')[0] for ref in references)
if missing_refs:
    print(f"Citações sem referência correspondente: {missing_refs}")
else:
    print("Todas as citações têm referências correspondentes.")

# Verificar imagens e formatação
images = re.findall(r'!\[(.*?)\]\((.*?)\)', unified_doc)
print(f"\nImagens no documento: {len(images)}")

# Verificar tabelas
tables = re.findall(r'\n\|(.*?)\|\n', unified_doc, re.DOTALL)
print(f"Tabelas encontradas: {len(tables)}")

# Verificar se o documento contém menções a UBS em São Carlos
ubs_mentions = re.findall(r'(\d+)\s+(?:UBS|Unidades Básicas de Saúde)(?:\s+(?:do|de|em)\s+São Carlos|no município)', unified_doc)
print(f"\nMenções a número de UBS em São Carlos: {ubs_mentions}")

# Verificar informações sobre os benefícios esperados
benefits_section = re.search(r'benefícios esperados(.*?)(?=\n## |\Z)', unified_doc, re.IGNORECASE | re.DOTALL)
if benefits_section:
    print(f"\nSeção de benefícios encontrada com {len(benefits_section.group(1))} caracteres")
    print(benefits_section.group(1)[:300] + "...")
else:
    print("\nSeção de benefícios NÃO encontrada explicitamente")

# Verificar se o infográfico está mencionado
infographic_mention = re.search(r'infográfico', unified_doc, re.IGNORECASE)
if infographic_mention:
    print("\nMenção a infográfico encontrada")
else:
    print("\nNenhuma menção a infográfico no documento")

# Extrair e exibir a conclusão
conclusion = re.search(r'## Conclusão(.*?)(?=\n## |\Z)', unified_doc, re.IGNORECASE | re.DOTALL)
if conclusion:
    print(f"\nConclusão encontrada com {len(conclusion.group(1))} caracteres")
    print(conclusion.group(1)[:300] + "...")
else:
    print("\nSeção de conclusão NÃO encontrada explicitamente")