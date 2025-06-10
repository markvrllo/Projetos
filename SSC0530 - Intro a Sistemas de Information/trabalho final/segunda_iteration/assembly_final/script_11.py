# Vou começar a construir o documento final
# Definirei funções para ajudar na construção do texto

def extract_section_with_pattern(content, pattern):
    """Extrai seções baseadas em um padrão regex"""
    match = re.search(pattern, content, re.DOTALL)
    return match.group(1).strip() if match else ""

def extract_section_by_header(content, header, level=2):
    """Extrai seções baseadas no cabeçalho"""
    header_markers = '#' * level
    pattern = rf'{header_markers} {re.escape(header)}(.*?)(?={header_markers}|\Z)'
    return extract_section_with_pattern(content, pattern)

def extract_subsection(content, section, subsection):
    """Extrai uma subseção específica"""
    # Primeiro, extraimos a seção
    section_content = extract_section_by_header(content, section)
    # Depois, extraimos a subseção dentro da seção
    return extract_section_by_header(section_content, subsection, 3)

# Agora vou começar a construir o documento final
# Vou usar o arquivo principal como base e atualizar conforme necessário

# Documento principal: Sistema-Inteligente-de-Gestao-Energetica-e-Conserv.md
# Documento UBS: texto-sistematizado-ubs.md
# Documento atualizado: Verifiquei-o-arquivo-texto-sistematizado-ubs.md-em.md

# Iniciar o documento
unified_document = """# Sistema Inteligente de Gestão Energética e Conservação de Vacinas para Unidades Básicas de Saúde

## Resumo Executivo

Este trabalho apresenta uma solução inovadora de Sistema de Informação baseada em Internet das Coisas (IoT) para otimização do consumo energético e monitoramento inteligente da conservação de vacinas em Unidades Básicas de Saúde (UBS) do município de São Carlos. A proposta surge da necessidade de retomar e aprimorar o sistema de monitoramento desenvolvido pela UFSCar durante a pandemia de COVID-19, que foi descontinuado, expandindo suas funcionalidades para incluir gestão energética sustentável e controle automatizado de inventário farmacêutico. A solução integra sensores IoT, análise de dados em tempo real e interfaces intuitivas para promover eficiência operacional, redução de custos energéticos e garantia da qualidade dos imunobiológicos, contribuindo significativamente para os objetivos de sustentabilidade e modernização do Sistema Único de Saúde.

"""

# Seção 1: Introdução
section1 = "## 1. Introdução\n\n"

# Extrair a contextualização do problema do documento principal
contextual = extract_subsection(main_content, "Contextualização do problema", "")
# Corrigir o número de UBS
contextual = re.sub(r'26 UBS', '11 UBS', contextual)
section1 += "### 1.1 Contextualização do problema\n\n" + contextual + "\n\n"

# Extrair motivação e justificativa do documento principal
motivation = extract_subsection(main_content, "Motivação e justificativa", "")
section1 += "### 1.2 Motivação e justificativa\n\n" + motivation + "\n\n"

# Extrair soluções existentes do documento principal
solutions = extract_subsection(main_content, "Soluções existentes", "")
section1 += "### 1.3 Soluções existentes\n\n" + solutions + "\n\n"

# Seção 2: Solução proposta
section2 = "## 2. Solução proposta\n\n"

# Extrair funcionalidades do documento UBS atualizado, se disponível, ou do principal
functionalities_updated = extract_section_with_pattern(updated_ubs_content, r'### 2\.1 Especificações de Hardware(.*?)(?=###|\Z)')
functionalities_main = extract_subsection(main_content, "Funcionalidades", "")

if len(functionalities_updated) > 100:  # Se encontramos conteúdo substancial no atualizado
    section2 += "### 2.1 Funcionalidades\n\n" + functionalities_updated + "\n\n"
else:
    section2 += "### 2.1 Funcionalidades\n\n" + functionalities_main + "\n\n"

# Extrair questões técnicas do documento UBS atualizado, se disponível
tech_updated = extract_section_with_pattern(updated_ubs_content, r'### 2\.2 Infraestrutura de Nuvem(.*?)(?=###|\Z)')
tech_main = extract_subsection(main_content, "Questões técnicas", "")

if len(tech_updated) > 100:
    section2 += "### 2.2 Questões técnicas\n\n" + tech_updated + "\n\n"
else:
    section2 += "### 2.2 Questões técnicas\n\n" + tech_main + "\n\n"

# Extrair questões organizacionais
org_main = extract_subsection(main_content, "Questões organizacionais", "")
section2 += "### 2.3 Questões organizacionais\n\n" + org_main + "\n\n"

# Extrair questões humanas
human_main = extract_subsection(main_content, "Questões humanas", "")
section2 += "### 2.4 Questões humanas\n\n" + human_main + "\n\n"

# Extrair processos de negócio
business_main = extract_subsection(main_content, "Processos de negócio", "")
section2 += "### 2.5 Processos de negócio\n\n" + business_main + "\n\n"

# Seção 3: Processamento da Informação
section3 = "## 3. Processamento da Informação\n\n"

# Extrair dados de entrada
input_main = extract_subsection(main_content, "Dados de entrada", "")
section3 += "### 3.1 Dados de entrada\n\n" + input_main + "\n\n"

# Extrair processamento - preferir o documento UBS atualizado
processing_updated = extract_section_with_pattern(updated_ubs_content, r'### 3\.1 Modelos Preditivos(.*?)(?=###|\Z)')
processing_main = extract_subsection(main_content, "Processamento", "")

if len(processing_updated) > 100:
    section3 += "### 3.2 Processamento\n\n" + processing_updated + "\n\n"
else:
    section3 += "### 3.2 Processamento\n\n" + processing_main + "\n\n"

# Extrair dados de saída
output_main = extract_subsection(main_content, "Dados de saída", "")
section3 += "### 3.3 Dados de saída\n\n" + output_main + "\n\n"

# Seção 4: Concorrência e Vantagem Competitiva
section4 = "## 4. Concorrência e Vantagem Competitiva\n\n"

# Extrair Modelo de Forças Competitivas de Porter do documento UBS atualizado
porter_updated = extract_section_with_pattern(updated_ubs_content, r'## 1\. Análise de Forças Competitivas.*?### 1\.1 Rivalidade entre Concorrentes(.*?)(?=##|\Z)')
porter_main = extract_subsection(main_content, "Modelo de Forças Competitivas de Porter", "")

if len(porter_updated) > 100:
    section4 += "### 4.1 Modelo de Forças Competitivas de Porter\n\n" + porter_updated + "\n\n"
else:
    section4 += "### 4.1 Modelo de Forças Competitivas de Porter\n\n" + porter_main + "\n\n"

# Extrair Vantagem Competitiva
competitive_main = extract_subsection(main_content, "Vantagem Competitiva", "")
section4 += "### 4.2 Vantagem Competitiva\n\n" + competitive_main + "\n\n"

# Combinar tudo
unified_document += section1 + section2 + section3 + section4

# Verificar tamanho do documento
print(f"Tamanho do documento unificado: {len(unified_document)} caracteres")
print(f"Quantidade aproximada de palavras: {len(unified_document.split())}")

# Verificar se há imagens no documento
images = re.findall(r'!\[(.*?)\]\((.*?)\)', unified_document)
print(f"Número de imagens encontradas: {len(images)}")

# Mostrar o início do documento para verificação
print("\nInício do documento unificado:")
print(unified_document[:1000] + "...")