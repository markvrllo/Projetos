# Vou organizar os dados confirmados que encontrei na busca para facilitar a reescrita do relatório

dados_confirmados = {
    "Perdas de vacinas Brasil": {
        "valor": "28 milhões de doses desperdiçadas",
        "prejuizo": "R$ 1,2 bilhão",
        "fonte": "Tribunal de Contas da União (TCU)",
        "citation_id": "confirmado_anteriormente"
    },
    "Temperatura conservação": {
        "faixa": "+2°C a +8°C",
        "fonte": "ANVISA/Ministério da Saúde",
        "citation_id": "confirmado_anteriormente"
    },
    "Eficiência energética hospitalar": {
        "economia_possivel": "30%",
        "economia_aneel": "1.478,28 MWh/ano",
        "investimento_aneel": "R$ 2.848.887,64",
        "fonte": "ANEEL - 5 hospitais Salvador e Recife",
        "citation_id": "15"
    },
    "Perdas por alteração temperatura": {
        "percentual": "41,4% das doses alteradas foram perdidas",
        "estudo": "São José do Rio Preto 2010-2017",
        "fonte": "SciELO - 341 notificações",
        "citation_id": "13, 16"
    },
    "UBS São Carlos": {
        "numero_correto": "11 Unidades Básicas de Saúde",
        "fonte": "Prefeitura São Carlos",
        "citation_id": "41"
    },
    "Sistema UFSCar": {
        "descricao": "Sistema 24h monitoramento vacinas COVID-19",
        "funcionamento": "Coleta dados a cada 5 segundos",
        "alerta": "Temperatura > 8°C por mais de 1 minuto",
        "status": "Descontinuado após pandemia",
        "fonte": "G1 São Carlos",
        "citation_id": "47"
    },
    "Custos componentes 2024-2025": {
        "ESP32": "R$ 49,90 a R$ 59,90",
        "DHT22": "R$ 32,50 a R$ 35,99",
        "fonte": "Mercado Livre/Lojas eletrônicos",
        "citation_ids": "34, 35, 36, 43, 44, 45"
    }
}

# Dados SEM fundamentação identificados
dados_sem_fonte = [
    "45% das perdas por temperatura inadequada",
    "25% das perdas por falta de monitoramento", 
    "15% das perdas por controle manual falho",
    "R$ 471.000 investimento inicial",
    "45.000 doses mensais São Carlos",
    "R$ 312.000 gasto energético mensal UBS",
    "ROI 157% em 5 anos",
    "R$ 540.000 economia anual"
]

print("=== DADOS CONFIRMADOS PARA USAR NO RELATÓRIO ===")
for categoria, info in dados_confirmados.items():
    print(f"\n{categoria}:")
    if isinstance(info, dict):
        for key, value in info.items():
            print(f"  {key}: {value}")
    else:
        print(f"  {info}")

print(f"\n=== DADOS SEM FONTE (REMOVER) ===")
for i, dado in enumerate(dados_sem_fonte, 1):
    print(f"{i}. {dado}")

# Vou calcular custos realistas baseados nos preços encontrados
print(f"\n=== CÁLCULO DE CUSTOS REALISTAS ===")

# Para 11 UBS de São Carlos
n_ubs = 11

# Custos por unidade baseados em preços reais encontrados
esp32_preco = 55.00  # Média dos preços encontrados
dht22_preco = 34.00  # Média dos preços encontrados  
componentes_extras = 50.00  # Estimativa para cabos, caixas, etc.

custo_hardware_por_ubs = esp32_preco + dht22_preco + componentes_extras
custo_hardware_total = custo_hardware_por_ubs * n_ubs

# Custos de desenvolvimento e implementação (estimativas conservadoras)
desenvolvimento_software = 25000  # Desenvolvimento inicial
implementacao_treinamento = 15000  # Instalação e treinamento
contingencia = 5000  # Margem de segurança

custo_total_estimado = custo_hardware_total + desenvolvimento_software + implementacao_treinamento + contingencia

print(f"Hardware por UBS: R$ {custo_hardware_por_ubs:.2f}")
print(f"Hardware total (11 UBS): R$ {custo_hardware_total:.2f}")
print(f"Desenvolvimento software: R$ {desenvolvimento_software:.2f}")
print(f"Implementação/treinamento: R$ {implementacao_treinamento:.2f}")
print(f"Contingência: R$ {contingencia:.2f}")
print(f"CUSTO TOTAL ESTIMADO: R$ {custo_total_estimado:.2f}")

print(f"\nDiferença do valor original (R$ 471.000): R$ {471000 - custo_total_estimado:.2f}")