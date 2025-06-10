# Agora vou identificar as partes mais bem fundamentadas dos documentos
# para integrá-las no texto sistematizado final

import re

# Verificando dados numéricos confirmados
# Baseado principalmente no documento "Verificacao-de-Fontes-dos-Dados-Numericos_-Resulta.md"
print("=== DADOS NUMÉRICOS CONFIRMADOS ===")

dados_confirmados = [
    "28 milhões de doses de vacinas desperdiçadas (TCU)",
    "R$ 1,2 bilhão em prejuízo com vacinas vencidas (TCU)",
    "11 UBS em São Carlos (Prefeitura Municipal)",
    "Economia energética de 30% possível em estabelecimentos de saúde (ANEEL)",
    "41,4% das doses com alteração de temperatura foram perdidas (SciELO)",
    "70,1% das falhas causadas por problemas estruturais (SciELO)",
    "Consumo energético médio UBS: 90,72 kWh/m²/ano (CBCS)",
    "Tarifa comercial SP 2024: R$ 0,7456/kWh",
    "Custo hardware estimado por UBS: R$ 259,30"
]

for dado in dados_confirmados:
    print(f"✓ {dado}")

print("\n=== HARDWARE PARA SOLUÇÃO IOT ===")
hardware = [
    "ESP32-WROOM-32 (microcontrolador): R$ 49,90",
    "DHT22 (sensor temperatura/umidade): R$ 35,50",
    "DS18B20 (sensor temperatura precisão): R$ 11,90",
    "Medidor Energia SCT-013: R$ 42,00"
]

for item in hardware:
    print(f"• {item}")

print("\n=== TECNOLOGIAS CONFIRMADAS ===")
tecnologias = [
    "Node.js (backend) - Alta eficiência em I/O assíncrono",
    "PostgreSQL (dados estruturados) - Suporte a JSONB",
    "InfluxDB (séries temporais) - Otimizado para dados de sensores",
    "MQTT (comunicação) - Protocolo padrão IoT",
    "Modelos LSTM-ARIMA - Detecção de anomalias térmicas",
    "Algoritmos K-Means - Clusterização de UBS para políticas personalizadas",
    "React.js - Dashboard responsivo web"
]

for tech in tecnologias:
    print(f"• {tech}")

print("\n=== ESTRUTURA PROPOSTA PARA ORGANIZAÇÃO DO CONTEÚDO ===")
print("1. INTRODUÇÃO")
print("   • Contextualização (problema das perdas de vacinas + desperdício energético)")
print("   • Motivação (dados confirmados do TCU e ANEEL)")
print("   • Caso São Carlos (Sistema UFSCar descontinuado)")
print("   • Soluções existentes (Sensorweb, Nexxto, EDP)")
print("2. SOLUÇÃO PROPOSTA")
print("   • Sistema integrado IoT (temperatura + energia)")
print("   • Arquitetura detalhada (hardware, software, cloud)")
print("   • Recursos necessários e questões organizacionais")
print("   • Impacto nos processos e pessoas")
print("3. PROCESSAMENTO DA INFORMAÇÃO")
print("   • Fluxo de dados completo (sensores → nuvem → decisão)")
print("   • Algoritmos de machine learning justificados")
print("   • Dashboard e interfaces de usuário")
print("4. VANTAGEM COMPETITIVA")
print("   • Análise de Porter completa e fundamentada")
print("   • Diferenciação por integração única")
print("   • ROI demonstrável")
print("5. REFERÊNCIAS VERIFICADAS")

print("\nAgora vou começar a produzir o texto sistematizado com base nessa organização.")