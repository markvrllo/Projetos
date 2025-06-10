# Vou extrair as melhores partes de cada documento para compor o texto final
# Vou começar com a estrutura completa do documento

# Primeiro, vou extrair o conteúdo mais completo do documento principal
main_file = "Sistema-Inteligente-de-Gestao-Energetica-e-Conserv.md"
with open(main_file, "r", encoding="utf-8") as f:
    main_content = f.read()

# Também quero verificar o texto-sistematizado-ubs.md para ver a estrutura
with open("texto-sistematizado-ubs.md", "r", encoding="utf-8") as f:
    ubs_content = f.read()

# E o Verifiquei-o-arquivo-texto-sistematizado-ubs.md-em.md que tem atualizações
with open("Verifiquei-o-arquivo-texto-sistematizado-ubs.md-em.md", "r", encoding="utf-8") as f:
    updated_ubs_content = f.read()

# Função para extrair seção específica de um texto
def extract_section_content(text, section_title, include_subsections=True):
    pattern = rf'(?:^|\n)## {re.escape(section_title)}(.*?)(?=\n## |\Z)'
    if include_subsections:
        match = re.search(pattern, text, re.DOTALL)
        return match.group(1).strip() if match else ""
    else:
        # Se não quisermos incluir subseções, removemos elas do resultado
        match = re.search(pattern, text, re.DOTALL)
        if match:
            content = match.group(1)
            # Remover subseções
            content = re.sub(r'\n### .*?(?=\n## |\n### |\Z)', '', content, flags=re.DOTALL)
            return content.strip()
        return ""

# Vou estruturar o documento conforme os requisitos do projeto
# Isso nos dará uma estrutura básica para preencher

sections = [
    {"title": "1. Introdução", "subsections": [
        "1.1 Contextualização do problema",
        "1.2 Motivação e justificativa",
        "1.3 Soluções existentes"
    ]},
    {"title": "2. Solução proposta", "subsections": [
        "2.1 Funcionalidades",
        "2.2 Questões técnicas",
        "2.3 Questões organizacionais",
        "2.4 Questões humanas",
        "2.5 Processos de negócio"
    ]},
    {"title": "3. Processamento da Informação", "subsections": [
        "3.1 Dados de entrada",
        "3.2 Processamento",
        "3.3 Dados de saída"
    ]},
    {"title": "4. Concorrência e Vantagem Competitiva", "subsections": [
        "4.1 Modelo de Forças Competitivas de Porter",
        "4.2 Vantagem Competitiva"
    ]},
    {"title": "5. Referências Bibliográficas", "subsections": []}
]

# Vou verificar a presença dessas seções nos documentos
for section in sections:
    title = section["title"]
    print(f"\nChecando seção: {title}")
    
    # Verificar no documento principal
    main_section = extract_section_content(main_content, title.split(". ")[1], False)
    if main_section:
        print(f"- Encontrada no documento principal com {len(main_section)} caracteres")
    
    # Verificar no documento ubs
    ubs_section = extract_section_content(ubs_content, title, False)
    if ubs_section:
        print(f"- Encontrada no documento UBS com {len(ubs_section)} caracteres")
    
    # Verificar no documento ubs atualizado
    updated_ubs_section = extract_section_content(updated_ubs_content, title.split(". ")[1], False)
    if updated_ubs_section:
        print(f"- Encontrada no documento UBS atualizado com {len(updated_ubs_section)} caracteres")
    
    # Verificar subseções
    for subsection in section["subsections"]:
        subsec_name = subsection.split(" ", 1)[1] if "." in subsection else subsection
        
        # No documento principal
        main_subsection = re.search(rf'### {re.escape(subsec_name)}(.*?)(?=###|\Z)', main_content, re.DOTALL)
        if main_subsection:
            print(f"  - Subseção '{subsection}' encontrada no documento principal")
        
        # No documento ubs
        ubs_subsection = re.search(rf'### {re.escape(subsection)}(.*?)(?=###|\Z)', ubs_content, re.DOTALL)
        if ubs_subsection:
            print(f"  - Subseção '{subsection}' encontrada no documento UBS")
            
        # No documento ubs atualizado
        updated_ubs_subsection = re.search(rf'### \d+\.\d+\s+{re.escape(subsec_name)}(.*?)(?=###|\Z)', 
                                          updated_ubs_content, re.DOTALL)
        if updated_ubs_subsection:
            print(f"  - Subseção '{subsection}' encontrada no documento UBS atualizado")