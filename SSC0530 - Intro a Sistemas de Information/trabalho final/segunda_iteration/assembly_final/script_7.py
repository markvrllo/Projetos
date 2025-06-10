# Vou criar o texto sistematizado unificado baseado nos arquivos disponíveis
# Começarei com a estrutura requerida e vou preenchendo com o conteúdo mais relevante

# Primeiro, vou extrair as referências dos arquivos para garantir que temos fundamentação adequada
import re

# Função para extrair referências de um texto
def extract_references(text):
    # Padrão para encontrar referências no formato [^número]
    pattern = r'\[\^(\d+)\]'
    refs = re.findall(pattern, text)
    return list(set(refs))  # Remove duplicatas

# Função para extrair texto de seções específicas
def extract_section(text, section_name):
    # Padrão para encontrar seção específica
    pattern = rf'## {re.escape(section_name)}(.*?)(?=##|\Z)'
    match = re.search(pattern, text, re.DOTALL)
    return match.group(1).strip() if match else ""

# Vou analisar as referências disponíveis em todos os arquivos
all_references = set()

for filename, content in all_content.items():
    refs = extract_references(content)
    all_references.update(refs)
    print(f"{filename}: {len(refs)} referências encontradas")

print(f"\nTotal de referências únicas encontradas: {len(all_references)}")

# Agora vou começar a construir o documento sistematizado
unified_text = """# Sistema Inteligente de Gestão Energética e Conservação de Vacinas para Unidades Básicas de Saúde

## Resumo Executivo

Este trabalho apresenta uma solução inovadora de Sistema de Informação baseada em Internet das Coisas (IoT) para otimização do consumo energético e monitoramento inteligente da conservação de vacinas em Unidades Básicas de Saúde (UBS). A proposta surge da necessidade de retomar e aprimorar o sistema de monitoramento desenvolvido pela UFSCar durante a pandemia de COVID-19, expandindo suas funcionalidades para incluir gestão energética sustentável e controle automatizado de inventário farmacêutico. A solução integra sensores IoT, análise de dados em tempo real e interfaces intuitivas para promover eficiência operacional, redução de custos energéticos e garantia da qualidade dos imunobiológicos, contribuindo significativamente para os objetivos de sustentabilidade e modernização do Sistema Único de Saúde.

## 1. Introdução

### 1.1 Contextualização do Problema

O Sistema Único de Saúde (SUS) brasileiro enfrenta crescentes desafios relacionados à sustentabilidade energética e à preservação adequada de medicamentos e vacinas. No contexto das Unidades Básicas de Saúde, dois problemas críticos convergem: o alto consumo energético desnecessário e as perdas significativas de imunobiológicos por falhas no controle de temperatura.

"""

print("Iniciando a construção do texto sistematizado...")
print(f"Texto inicial criado com {len(unified_text)} caracteres")