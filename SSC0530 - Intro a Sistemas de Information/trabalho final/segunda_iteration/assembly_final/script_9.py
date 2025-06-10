# Vou buscar informações específicas sobre São Carlos e o número de UBS
import re

# Procurar em todos os arquivos
for filename, content in all_content.items():
    # Buscar menções a São Carlos e número de UBS
    ubs_count_mentions = re.findall(r'(\d+)\s+(?:UBS|Unidades Básicas de Saúde)(?:\s+(?:do|de|em)\s+São Carlos|no município)', content)
    
    if ubs_count_mentions:
        print(f"\nEm {filename} encontrei menções a UBS em São Carlos:")
        for count in ubs_count_mentions:
            print(f"- Menciona {count} UBS")
            
        # Verificar se há alguma fonte ou verificação
        verification = re.search(r'UBS.{1,100}São Carlos.{1,200}(fonte|verificad|confirmad|oficial)', content, re.IGNORECASE | re.DOTALL)
        if verification:
            print(f"Encontrei verificação: {verification.group(0)}")

# Agora vou verificar especificamente os dados sobre UBS em São Carlos nos arquivos de verificação
for filename in verification_files:
    with open(filename, "r", encoding="utf-8") as f:
        content = f.read()
        
        # Buscar informações específicas sobre UBS em São Carlos
        sao_carlos_info = re.search(r'### Infraestrutura de São Carlos(.*?)(?=###|\Z)', content, re.DOTALL)
        
        if sao_carlos_info:
            print(f"\nInformação verificada sobre UBS em São Carlos em {filename}:")
            print(sao_carlos_info.group(1))