# Agora vou ler o PDF do projeto
import PyPDF2

try:
    with open("Projeto-SSC0530-ELLEN.pdf", "rb") as f:
        pdf_reader = PyPDF2.PdfReader(f)
        project_text = ""
        for page in pdf_reader.pages:
            project_text += page.extract_text() + "\n"
    
    print("Texto extraído do PDF do projeto:")
    print("=" * 50)
    print(project_text)
    
except Exception as e:
    print(f"Erro ao ler PDF: {e}")
    print("\nVou usar as informações dos attachments fornecidos...")