# Criar uma tabela detalhada com informações de custos encontrados para sistemas IoT
custos_iot_encontrados = {
    'Componente': [
        'ESP32 (microcontrolador)',
        'Sensor DHT22 (temperatura/umidade)',
        'Sensor DS18B20 (temperatura)',
        'Kit completo ESP32 + sensores',
        'Sistema completo monitoramento (estimativa pesquisa)',
        'Raspberry Pi',
        'NodeMCU ESP8266'
    ],
    'Preço Encontrado (R$)': [
        '180,00',
        '32,50',
        '13,45', 
        '405,99',
        '180,00 - 400,00',
        '208,00',
        '22,00'
    ],
    'Fonte': [
        'Pesquisa acadêmica UnB 2023',
        'Mercado Livre - pesquisa 2024',
        'Shopee - pesquisa 2025',
        'Pesquisa MacKenzie 2024',
        'Múltiplas pesquisas acadêmicas',
        'Amazon - pesquisa MacKenzie',
        'Mercado Livre - pesquisa 2024'
    ],
    'Aplicação': [
        'Microcontrolador principal',
        'Sensor temperatura/umidade ambiente',
        'Sensor temperatura à prova d\'água',
        'Kit completo para ar-condicionado',
        'Sistema monitoramento básico',
        'Processamento central dados',
        'Microcontrolador básico WiFi'
    ]
}

df_custos = pd.DataFrame(custos_iot_encontrados)

print("=== CUSTOS DE COMPONENTES IOT ENCONTRADOS ===")
print(df_custos.to_string(index=False))

# Salvar dados de custos
df_custos.to_csv('custos_componentes_iot.csv', index=False, encoding='utf-8')

# Cálculo de estimativa real baseada em fontes
print("\n=== ESTIMATIVA DE CUSTO BASEADA EM FONTES REAIS ===")
print("Para 1 UBS:")
print("- ESP32: R$ 180,00")
print("- Sensor DHT22: R$ 32,50") 
print("- Componentes adicionais: R$ 50,00")
print("- Total por UBS: R$ 262,50")
print("\nPara 11 UBS de São Carlos:")
print(f"- Custo total hardware: R$ {11 * 262.50:,.2f}")
print("- Software/desenvolvimento: R$ 20.000,00 (estimativa)")
print("- Implementação/treinamento: R$ 15.000,00 (estimativa)")
print(f"- TOTAL ESTIMADO: R$ {(11 * 262.50) + 20000 + 15000:,.2f}")

print("\n=== COMPARAÇÃO COM DADOS SEM FONTE ===")
print("Dado original (sem fonte): R$ 471.000")
print(f"Estimativa baseada em fontes: R$ {(11 * 262.50) + 20000 + 15000:,.2f}")
print(f"Diferença: R$ {471000 - ((11 * 262.50) + 20000 + 15000):,.2f}")

# Análise de economia energética com dados reais
print("\n=== ECONOMIA ENERGÉTICA - DADOS CONFIRMADOS ===")
print("Fonte ANEEL - Hospitais Salvador/Recife:")
print("- Economia: 1.478,28 MWh/ano") 
print("- Percentual: 30% economia energia")
print("- Investimento: R$ 2.848.887,64")
print("- Número de hospitais: 5 unidades")
print(f"- Custo por unidade: R$ {2848887.64/5:,.2f}")
print(f"- Economia por unidade: {1478.28/5:.2f} MWh/ano")