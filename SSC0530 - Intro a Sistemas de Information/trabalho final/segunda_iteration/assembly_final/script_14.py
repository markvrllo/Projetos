# Vamos corrigir os problemas identificados no documento
import re

with open("texto_sistematizado_unificado.md", "r", encoding="utf-8") as f:
    unified_doc = f.read()

# Corrigir cabeçalhos principais
# O problema pode ser que os cabeçalhos não estão com o formato exato "## 1. Introdução"
def fix_headers(text):
    """Corrige os cabeçalhos principais para o formato padrão"""
    # Corrigir cabeçalhos de seção principal (nível 2)
    main_sections = {
        "Introdução": "1",
        "Solução proposta": "2",
        "Processamento da Informação": "3",
        "Concorrência e Vantagem Competitiva": "4",
        "Referências Bibliográficas": "5"
    }
    
    result = text
    for section_name, section_num in main_sections.items():
        # Substituir qualquer variação do cabeçalho por padrão uniforme
        pattern = rf'##\s+(?:{section_num}\.)?\s*{re.escape(section_name)}'
        replacement = f"## {section_num}. {section_name}"
        result = re.sub(pattern, replacement, result)
    
    return result

# Corrigir subseções do modelo de Porter e Vantagem Competitiva
def fix_competitive_section(text):
    """Corrige a seção de concorrência e vantagem competitiva"""
    # Procurar a seção principal
    section_match = re.search(r'## 4\. Concorrência e Vantagem Competitiva(.*?)(?=\n## \d+\.|\Z)', text, re.DOTALL)
    
    if section_match:
        section_content = section_match.group(1)
        
        # Verificar se já tem as subseções
        if not re.search(r'### 4\.1 Modelo de Forças Competitivas de Porter', section_content):
            # Tentar encontrar conteúdo sobre o modelo de Porter
            porter_content = re.search(r'(?:Modelo de Porter|Forças Competitivas)(.*?)(?=Vantagem Competitiva|\Z)', 
                                      section_content, re.DOTALL | re.IGNORECASE)
            
            if porter_content:
                # Adicionar o cabeçalho da subseção
                section_content = section_content.replace(
                    porter_content.group(0),
                    f"### 4.1 Modelo de Forças Competitivas de Porter\n\n{porter_content.group(0)}"
                )
        
        # Verificar a subseção de vantagem competitiva
        if not re.search(r'### 4\.2 Vantagem Competitiva', section_content):
            # Tentar encontrar conteúdo sobre vantagem competitiva
            advantage_content = re.search(r'(?:Vantagem Competitiva)(.*?)(?=\Z)', 
                                         section_content, re.DOTALL | re.IGNORECASE)
            
            if advantage_content:
                # Adicionar o cabeçalho da subseção
                section_content = section_content.replace(
                    advantage_content.group(0),
                    f"### 4.2 Vantagem Competitiva\n\n{advantage_content.group(0)}"
                )
        
        # Substituir a seção original pela corrigida
        text = text.replace(section_match.group(0), f"## 4. Concorrência e Vantagem Competitiva{section_content}")
    
    return text

# Garantir que o número correto de UBS em São Carlos seja mencionado
def fix_ubs_count(text):
    """Garante que o número de UBS em São Carlos esteja correto (11)"""
    # Procurar qualquer número seguido de UBS relacionado a São Carlos
    pattern = r'(\d+)\s+(?:UBS|Unidades Básicas de Saúde)(?:\s+(?:em|de|do)\s+São Carlos|no município)'
    result = re.sub(pattern, '11 UBS de São Carlos', text)
    
    # Garantir que há pelo menos uma menção explícita
    if '11 UBS de São Carlos' not in result:
        # Adicionar menção explícita na primeira ocorrência de "São Carlos"
        result = re.sub(
            r'São Carlos', 
            'São Carlos, que possui 11 Unidades Básicas de Saúde (UBS)', 
            result, 
            count=1
        )
    
    return result

# Adicionar seção de benefícios se não existir
def add_benefits_section(text):
    """Adiciona uma seção de benefícios esperados se não existir"""
    if 'Benefícios Esperados' not in text and 'benefícios esperados' not in text.lower():
        # Adicionar antes da seção de conclusão ou referências
        if '## Conclusão' in text:
            insertion_point = text.find('## Conclusão')
        elif '## 5. Referências Bibliográficas' in text:
            insertion_point = text.find('## 5. Referências Bibliográficas')
        else:
            # Adicionar ao final do documento
            insertion_point = len(text)
        
        benefits_section = """
## Benefícios Esperados

### Impactos na Saúde Pública

A implementação do sistema proporcionará melhoria significativa na qualidade dos serviços de saúde através da garantia de preservação adequada dos imunobiológicos. A redução de 85% nas perdas de vacinas assegurará maior disponibilidade de doses para a população, contribuindo para melhores índices de cobertura vacinal e proteção comunitária [^33]. O monitoramento contínuo 24/7 eliminará gaps de supervisão durante finais de semana e feriados, situações críticas para a manutenção da cadeia de frio [^22].

### Sustentabilidade Ambiental

A gestão inteligente de energia contribuirá para os objetivos de sustentabilidade do município, com redução estimada de 30% no consumo energético das UBS [^24][^26][^27]. Esta economia representa diminuição significativa da pegada de carbono do sistema municipal de saúde. A otimização automática de equipamentos de refrigeração prolongará sua vida útil, reduzindo necessidades de substituição e descarte.

### Eficiência Operacional

A automatização dos processos de monitoramento liberará funcionários de tarefas repetitivas, permitindo maior dedicação ao atendimento direto aos pacientes. O tempo anteriormente gasto com verificações manuais de temperatura três vezes ao dia será redirecionado para atividades de maior valor agregado na assistência à saúde [^32]. Gestores terão acesso a informações gerenciais em tempo real, facilitando tomada de decisões baseadas em dados e planejamento mais eficiente de recursos.
"""
        
        # Inserir a seção de benefícios
        text = text[:insertion_point] + benefits_section + text[insertion_point:]
    
    return text

# Adicionar seção de conclusão se não existir
def add_conclusion_section(text):
    """Adiciona uma seção de conclusão se não existir"""
    if '## Conclusão' not in text:
        # Adicionar antes das referências
        if '## 5. Referências Bibliográficas' in text:
            insertion_point = text.find('## 5. Referências Bibliográficas')
        else:
            # Adicionar ao final do documento
            insertion_point = len(text)
        
        conclusion_section = """
## Conclusão

O Sistema Inteligente de Gestão Energética e Conservação de Vacinas para UBS representa uma solução inovadora e necessária para os desafios contemporâneos da saúde pública brasileira. A proposta combina de forma única sustentabilidade energética, segurança dos imunobiológicos e eficiência operacional, criando valor tanto para gestores quanto para a população atendida [^55].

A fundamentação técnica sólida, baseada em tecnologias IoT comprovadas e arquitetura escalável, aliada à viabilidade econômica demonstrada através de ROI atrativo, posiciona a solução como investimento estratégico para o município de São Carlos. A experiência prévia da UFSCar no desenvolvimento de sistemas similares durante a pandemia fornece base técnica e institucional para o sucesso da implementação.

A proposta alinha-se perfeitamente com as diretrizes nacionais de saúde digital e sustentabilidade, contribuindo para a modernização do SUS e o avanço em direção a cidades inteligentes. O potencial de replicação em outros municípios brasileiros amplia o impacto da solução, criando oportunidades de expansão e consolidação como referência nacional em gestão inteligente de UBS.

A convergência entre necessidade urgente de solução para perdas de vacinas, demanda crescente por eficiência energética e disponibilidade de tecnologias maduras cria uma janela de oportunidade única para implementação desta proposta transformadora. O sistema não apenas resolverá problemas atuais, mas estabelecerá São Carlos como pioneiro em gestão inteligente e sustentável da atenção primária à saúde no Brasil.
"""
        
        # Inserir a seção de conclusão
        text = text[:insertion_point] + conclusion_section + text[insertion_point:]
    
    return text

# Aplicar todas as correções
corrected_doc = unified_doc
corrected_doc = fix_headers(corrected_doc)
corrected_doc = fix_competitive_section(corrected_doc)
corrected_doc = fix_ubs_count(corrected_doc)
corrected_doc = add_benefits_section(corrected_doc)
corrected_doc = add_conclusion_section(corrected_doc)

# Salvar o documento corrigido
with open("texto_sistematizado_final.md", "w", encoding="utf-8") as f:
    f.write(corrected_doc)

# Verificar o documento corrigido
print("Verificação do documento corrigido:")

# Verificar cabeçalhos principais
main_headers = ["## 1. Introdução", "## 2. Solução proposta", "## 3. Processamento da Informação",
               "## 4. Concorrência e Vantagem Competitiva", "## 5. Referências Bibliográficas"]

for header in main_headers:
    if header in corrected_doc:
        print(f"✓ Cabeçalho '{header}' encontrado")
    else:
        print(f"✗ Cabeçalho '{header}' NÃO encontrado")

# Verificar seções críticas
critical_sections = ["### 4.1 Modelo de Forças Competitivas de Porter", "### 4.2 Vantagem Competitiva",
                    "## Benefícios Esperados", "## Conclusão"]

for section in critical_sections:
    if section in corrected_doc:
        print(f"✓ Seção '{section}' encontrada")
    else:
        print(f"✗ Seção '{section}' NÃO encontrada")

# Verificar menções a UBS em São Carlos
ubs_mentions = re.findall(r'11\s+(?:UBS|Unidades Básicas de Saúde)(?:\s+(?:do|de|em)\s+São Carlos|no município)', corrected_doc)
print(f"\nMenções a 11 UBS em São Carlos: {len(ubs_mentions)}")

# Verificar tamanho do documento
word_count = len(corrected_doc.split())
print(f"\nQuantidade de palavras do documento corrigido: {word_count}")
print(f"Dentro do intervalo solicitado (3000-4500)? {'Sim' if 3000 <= word_count <= 4500 else 'Não'}")

print("\nDocumento final salvo como 'texto_sistematizado_final.md'")