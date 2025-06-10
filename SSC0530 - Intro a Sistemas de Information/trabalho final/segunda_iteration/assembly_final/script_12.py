# Vou tentar uma abordagem diferente, extraindo as seções diretamente do texto completo
import re

def get_full_section(content, section_number, section_name):
    """Extrai uma seção completa incluindo todas as subseções"""
    pattern = rf'## {section_number}\. {section_name}(.*?)(?=\n## \d+\.|\Z)'
    match = re.search(pattern, content, re.DOTALL)
    return match.group(1).strip() if match else ""

# Função para construir seção se disponível, ou usar alternativa
def get_section_content(main_file_content, alt_file_content, section_number, section_name):
    # Tentar extrair da fonte principal
    content = get_full_section(main_file_content, section_number, section_name)
    
    # Se não encontrar ou estiver vazio, tenta da fonte alternativa
    if not content or len(content) < 100:
        alt_pattern = rf'## {section_number}\. {section_name}(.*?)(?=\n## \d+\.|\Z)'
        match = re.search(alt_pattern, alt_file_content, re.DOTALL)
        content = match.group(1).strip() if match else ""
    
    return content

# Função para corrigir referências a UBS em São Carlos
def correct_ubs_count(text):
    """Corrige o número de UBS em São Carlos de 26 para 11"""
    corrected = re.sub(r'26 UBS(?:\s+(?:do|de|em)\s+São Carlos|no município)', 
                      '11 UBS de São Carlos', text)
    corrected = re.sub(r'26 Unidades Básicas de Saúde(?:\s+(?:do|de|em)\s+São Carlos|no município)', 
                      '11 Unidades Básicas de Saúde de São Carlos', corrected)
    return corrected

# Função para incluir apenas dados verificados
def use_verified_data(text):
    """Substitui dados não verificados por dados verificados"""
    # Lista de substituições (padrão, substituição)
    replacements = [
        # Perdas de vacinas
        (r'45% das perdas de medicamentos', '41,4% das doses com alteração de temperatura foram perdidas [^28][^31]'),
        # Precisão do sensor
        (r'DS18B20 com precisão', 'DS18B20 com precisão oficial de ±0,5°C [^55][^59]'),
        # Economia energética
        (r'economia energética de até \d+%', 'economia energética de até 30% [^24][^26][^27]'),
    ]
    
    result = text
    for pattern, replacement in replacements:
        result = re.sub(pattern, replacement, result)
    
    return result

# Vamos reconstruir o documento do zero, garantindo conteúdo completo

# Selecionar o conteúdo principal do documento
main_file = "Sistema-Inteligente-de-Gestao-Energetica-e-Conserv.md"
with open(main_file, "r", encoding="utf-8") as f:
    main_content = f.read()

# Conteúdo alternativo do documento UBS atualizado
alt_file = "Verifiquei-o-arquivo-texto-sistematizado-ubs.md-em.md"
with open(alt_file, "r", encoding="utf-8") as f:
    alt_content = f.read()

# Iniciar documento unificado com título e resumo
unified_document = """# Sistema Inteligente de Gestão Energética e Conservação de Vacinas para Unidades Básicas de Saúde

## Resumo Executivo

Este trabalho apresenta uma solução inovadora de Sistema de Informação baseada em Internet das Coisas (IoT) para otimização do consumo energético e monitoramento inteligente da conservação de vacinas em Unidades Básicas de Saúde (UBS) do município de São Carlos. A proposta surge da necessidade de retomar e aprimorar o sistema de monitoramento desenvolvido pela UFSCar durante a pandemia de COVID-19, que foi descontinuado, expandindo suas funcionalidades para incluir gestão energética sustentável e controle automatizado de inventário farmacêutico. A solução integra sensores IoT, análise de dados em tempo real e interfaces intuitivas para promover eficiência operacional, redução de custos energéticos e garantia da qualidade dos imunobiológicos, contribuindo significativamente para os objetivos de sustentabilidade e modernização do Sistema Único de Saúde.

"""

# Adicionar seção 1: Introdução
section1 = """## 1. Introdução

"""
# Tentar extrair a introdução completa do documento principal
intro_section = get_section_content(main_content, alt_content, 1, "Introdução")
if intro_section:
    section1 += intro_section
else:
    # Se não encontrar a seção completa, tentar construir com subseções
    for subsec_name in ["Contextualização do problema", "Motivação e justificativa", "Soluções existentes"]:
        pattern = rf'### {subsec_name}(.*?)(?=\n###|\Z)'
        match = re.search(pattern, main_content, re.DOTALL)
        if match:
            section1 += f"### 1.{len(re.findall(r'### 1\.\d+', section1)) + 1} {subsec_name}\n\n"
            section1 += match.group(1).strip() + "\n\n"

# Corrigir o número de UBS
section1 = correct_ubs_count(section1)
# Usar apenas dados verificados
section1 = use_verified_data(section1)

# Adicionar seção 2: Solução proposta
section2 = """## 2. Solução proposta

"""
# Extrair a seção completa do documento principal
solution_section = get_section_content(main_content, alt_content, 2, "Solução proposta")
if solution_section:
    section2 += solution_section
else:
    # Se não encontrar a seção completa, tentar construir com subseções
    subsec_names = ["Funcionalidades", "Questões técnicas", "Questões organizacionais", 
                    "Questões humanas", "Processos de negócio"]
    for i, subsec_name in enumerate(subsec_names, start=1):
        pattern = rf'### {subsec_name}(.*?)(?=\n###|\Z)'
        match = re.search(pattern, main_content, re.DOTALL)
        if match:
            section2 += f"### 2.{i} {subsec_name}\n\n"
            section2 += match.group(1).strip() + "\n\n"

# Corrigir o número de UBS
section2 = correct_ubs_count(section2)
# Usar apenas dados verificados
section2 = use_verified_data(section2)

# Adicionar seção 3: Processamento da Informação
section3 = """## 3. Processamento da Informação

"""
# Extrair a seção completa do documento principal
processing_section = get_section_content(main_content, alt_content, 3, "Processamento da Informação")
if processing_section:
    section3 += processing_section
else:
    # Se não encontrar a seção completa, tentar construir com subseções
    subsec_names = ["Dados de entrada", "Processamento", "Dados de saída"]
    for i, subsec_name in enumerate(subsec_names, start=1):
        pattern = rf'### {subsec_name}(.*?)(?=\n###|\Z)'
        match = re.search(pattern, main_content, re.DOTALL)
        if match:
            section3 += f"### 3.{i} {subsec_name}\n\n"
            section3 += match.group(1).strip() + "\n\n"

# Corrigir o número de UBS
section3 = correct_ubs_count(section3)
# Usar apenas dados verificados
section3 = use_verified_data(section3)

# Adicionar seção 4: Concorrência e Vantagem Competitiva
section4 = """## 4. Concorrência e Vantagem Competitiva

"""
# Usar a seção atualizada se disponível
competition_updated = get_section_content(alt_content, main_content, 1, "Análise de Forças Competitivas")
if competition_updated and len(competition_updated) > 500:
    # Adaptação para o formato correto
    section4 += re.sub(r'### 1\.(\d+)', r'### 4.\1', competition_updated)
else:
    # Extrair a seção completa do documento principal
    competition_section = get_section_content(main_content, alt_content, 4, "Concorrência e Vantagem Competitiva")
    if competition_section:
        section4 += competition_section
    else:
        # Se não encontrar a seção completa, tentar construir com subseções
        subsec_names = ["Modelo de Forças Competitivas de Porter", "Vantagem Competitiva"]
        for i, subsec_name in enumerate(subsec_names, start=1):
            pattern = rf'### {subsec_name}(.*?)(?=\n###|\Z)'
            match = re.search(pattern, main_content, re.DOTALL)
            if match:
                section4 += f"### 4.{i} {subsec_name}\n\n"
                section4 += match.group(1).strip() + "\n\n"

# Corrigir o número de UBS
section4 = correct_ubs_count(section4)
# Usar apenas dados verificados
section4 = use_verified_data(section4)

# Adicionar seção 5: Referências Bibliográficas
section5 = """## 5. Referências Bibliográficas

"""
# Extrair referências do documento de verificação de fontes
with open("Verificacao-de-Fontes-dos-Dados-Numericos_-Resulta.md", "r", encoding="utf-8") as f:
    verification_content = f.read()
    references = re.findall(r'\[\^(\d+)\]: (.*?)(?=\n\[\^|\Z)', verification_content, re.DOTALL)
    for ref_num, ref_text in references:
        section5 += f"[^{ref_num}]: {ref_text.strip()}\n\n"

# Combinar o documento completo
unified_document += section1 + section2 + section3 + section4 + section5

# Verificar tamanho do documento
word_count = len(unified_document.split())
print(f"Tamanho do documento unificado: {len(unified_document)} caracteres")
print(f"Quantidade de palavras: {word_count}")

# Verificar se está dentro do intervalo solicitado (3000-4500 palavras)
if 3000 <= word_count <= 4500:
    print("O documento está dentro do intervalo de palavras solicitado.")
else:
    print(f"Atenção: O documento tem {word_count} palavras, fora do intervalo solicitado (3000-4500).")

# Verificar imagens no documento
images = re.findall(r'!\[(.*?)\]\((.*?)\)', unified_document)
print(f"Número de imagens encontradas: {len(images)}")
for img_alt, img_url in images[:3]:  # Mostrar apenas as primeiras 3
    print(f"- Imagem: {img_alt} ({img_url})")

# Salvar o documento para verificação
with open("texto_sistematizado_unificado.md", "w", encoding="utf-8") as f:
    f.write(unified_document)
print("\nDocumento salvo como 'texto_sistematizado_unificado.md'")

# Mostrar o início do documento para verificação
print("\nInício do documento unificado:")
print(unified_document[:1000] + "...")