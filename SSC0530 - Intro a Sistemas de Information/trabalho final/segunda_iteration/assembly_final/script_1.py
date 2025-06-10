# Vou ler o arquivo principal do projeto para entender os requisitos
with open("Projeto-SSC0530-ELLEN.pdf", "rb") as f:
    project_content = f.read()
    print(f"Arquivo do projeto encontrado, tamanho: {len(project_content)} bytes")

# Agora vou ler alguns dos arquivos markdown principais para entender o conteúdo já desenvolvido
files_to_analyze = [
    "especificacoes-tecnicas-sistema.md",
    "texto-sistematizado-ubs.md",
    "Sistema-Integrado-de-Monitoramento-e-Gestao-de-Vac.md"
]

content_summary = {}
for filename in files_to_analyze:
    if os.path.exists(filename):
        with open(filename, "r", encoding="utf-8") as f:
            content = f.read()
            content_summary[filename] = {
                "length": len(content),
                "first_500_chars": content[:500]
            }
            print(f"\n{filename}:")
            print(f"Tamanho: {len(content)} caracteres")
            print(f"Primeiros 500 caracteres:")
            print(content[:500])
            print("=" * 50)