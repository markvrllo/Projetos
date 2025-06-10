# Vou ler todos os arquivos markdown disponíveis para extrair o conteúdo mais completo
import re

files_to_read = [
    "especificacoes-tecnicas-sistema.md",
    "texto-sistematizado-ubs.md",
    "Sistema-Integrado-de-Monitoramento-e-Gestao-de-Vac.md",
    "Sistema-Integrado-para-Monitoramento-e-Gestao-em-U.md",
    "Sistema-Inteligente-de-Gestao-Energetica-e-Conserv.md",
    "Texto-Sistematizado_-Sistema-Integrado-de-Monitora.md",
    "Verificacao-de-Fontes-dos-Dados-Numericos.md",
    "Verificacao-de-Fontes-dos-Dados-Numericos_-Resulta.md",
    "Verifiquei-o-arquivo-texto-sistematizado-ubs.md-em.md"
]

all_content = {}

for filename in files_to_read:
    if os.path.exists(filename):
        with open(filename, "r", encoding="utf-8") as f:
            content = f.read()
            all_content[filename] = content
            print(f"Lido: {filename} - {len(content)} caracteres")

print(f"\nTotal de arquivos lidos: {len(all_content)}")

# Vou analisar qual arquivo contém as informações mais organizadas
print("\n" + "="*50)
print("Analisando a estrutura de cada arquivo:")

for filename, content in all_content.items():
    lines = content.split('\n')
    headers = [line for line in lines if line.startswith('#')]
    print(f"\n{filename}:")
    print(f"- {len(headers)} cabeçalhos encontrados")
    if headers:
        print("- Principais seções:")
        for header in headers[:10]:  # Primeiros 10 cabeçalhos
            print(f"  {header}")