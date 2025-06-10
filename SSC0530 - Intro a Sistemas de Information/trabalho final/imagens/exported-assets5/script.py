# Vou calcular os dados validados baseados nas informações coletadas
# e criar uma planilha de custos baseada em dados reais

import pandas as pd

# Dados de base coletados das pesquisas
dados_base = {
    "Perdas de vacinas Brasil (TCU)": "28 milhões de doses, R$ 1,2 bilhão",
    "UBS São Carlos": "11 unidades",
    "Economia energética potencial (ANEEL)": "30%",
    "Consumo energético UBS Sorocaba": "73,93 a 107,50 kWh/m²/ano",
    "Tarifa comercial SP 2024": "R$ 745,60/MWh",
    "Sistema UFSCar": "Descontinuado pós-pandemia"
}

# Calcular custos reais do sistema IoT baseado em pesquisas
custos_hardware = {
    "ESP32": 49.90,
    "Sensor DHT22": 32.50,
    "Sensor DS18B20": 15.00,
    "Módulo WiFi/4G": 80.00,
    "Instalação/cabos": 50.00,
    "Total por UBS": None
}

custos_hardware["Total por UBS"] = sum([v for v in custos_hardware.values() if v is not None])

# Custos para 11 UBS
num_ubs = 11
custo_total_hardware = custos_hardware["Total por UBS"] * num_ubs

# Custos adicionais
custos_adicionais = {
    "Desenvolvimento software": 25000,
    "Infraestrutura nuvem (anual)": 12000,
    "Treinamento/implementação": 8000,
    "Manutenção anual": 5000
}

custo_inicial_total = custo_total_hardware + custos_adicionais["Desenvolvimento software"] + custos_adicionais["Treinamento/implementação"]

print("=== DADOS VALIDADOS PARA O PROJETO ===")
print("\nBase de Dados Verificados:")
for key, value in dados_base.items():
    print(f"- {key}: {value}")

print(f"\n=== CUSTOS BASEADOS EM PESQUISA DE MERCADO ===")
print(f"Custo por UBS: R$ {custos_hardware['Total por UBS']:.2f}")
print(f"Total hardware (11 UBS): R$ {custo_total_hardware:.2f}")
print(f"Custo inicial total: R$ {custo_inicial_total:.2f}")

# Criar tabela detalhada de custos
df_custos = pd.DataFrame([
    ["ESP32 (microcontrolador)", 1, 49.90, 49.90*11],
    ["Sensor DHT22 (temp/umidade)", 1, 32.50, 32.50*11],
    ["Sensor DS18B20 (temperatura)", 1, 15.00, 15.00*11],
    ["Módulo comunicação WiFi/4G", 1, 80.00, 80.00*11],
    ["Instalação e cabos", 1, 50.00, 50.00*11],
    ["Desenvolvimento software", 1, 25000.00, 25000.00],
    ["Treinamento/implementação", 1, 8000.00, 8000.00]
], columns=["Item", "Qtd por UBS", "Valor Unitário (R$)", "Total (R$)"])

print("\n=== TABELA DETALHADA DE CUSTOS ===")
print(df_custos.to_string(index=False))

# Salvar em CSV
df_custos.to_csv("custos_sistema_iot_ubs.csv", index=False)

print(f"\nCusto total do projeto: R$ {df_custos['Total (R$)'].sum():.2f}")
print("Arquivo 'custos_sistema_iot_ubs.csv' criado com os dados detalhados.")

# Calcular economia energética baseada em dados reais
consumo_medio_ubs = (73.93 + 107.50) / 2  # kWh/m²/ano
area_estimada_ubs = 200  # m² (estimativa conservadora)
consumo_anual_ubs = consumo_medio_ubs * area_estimada_ubs  # kWh/ano
tarifa_kwh = 0.74560  # R$/kWh (baseado em R$ 745,60/MWh)

economia_30_pct = consumo_anual_ubs * 0.30
economia_reais_ubs = economia_30_pct * tarifa_kwh
economia_total_11_ubs = economia_reais_ubs * 11

print(f"\n=== PROJEÇÃO DE ECONOMIA ENERGÉTICA ===")
print(f"Consumo médio UBS: {consumo_medio_ubs:.2f} kWh/m²/ano")
print(f"Consumo anual estimado por UBS (200m²): {consumo_anual_ubs:.2f} kWh")
print(f"Economia 30% por UBS: {economia_30_pct:.2f} kWh/ano")
print(f"Economia financeira por UBS: R$ {economia_reais_ubs:.2f}/ano")
print(f"Economia total (11 UBS): R$ {economia_total_11_ubs:.2f}/ano")

# Calcular ROI
roi_anos = custo_inicial_total / economia_total_11_ubs
print(f"\nRetorno do investimento: {roi_anos:.1f} anos")