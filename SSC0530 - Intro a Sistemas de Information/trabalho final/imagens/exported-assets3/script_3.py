# Criar tabela com sistemas reais implementados encontrados
sistemas_implementados = {
    'Local/Instituição': [
        'São Carlos - UFSCar (2021)',
        'Lages - SC',
        'São José do Rio Preto - SP',
        'Petrolina - PE',
        'Hospital Conceição - Porto Alegre',
        'HCPA - Porto Alegre',
        'Hospitais Salvador/Recife'
    ],
    'Tipo de Sistema': [
        'Monitoramento temperatura vacinas COVID',
        'Sistema IoT câmaras frias UBS',
        'Monitoramento perdas vacinas',
        'Monitoramento vacinas UBS',
        'Monitoramento hospitalar',
        'Monitoramento congeladores pesquisa',
        'Eficiência energética hospitalar'
    ],
    'Tecnologia': [
        'Termômetro eletrônico + internet',
        'Sensores IoT + ThinkSpeak',
        'Sistema vigilância epidemiológica',
        'Controle manual + análise perdas',
        'Sistema gestão energética',
        'Arduino + telemetria',
        'LED + ar-condicionado + painéis solares'
    ],
    'Resultados': [
        'Monitoramento 24h, alertas em 1 minuto',
        'Verificação a cada 5 minutos',
        '41,4% perdas por alteração temperatura',
        '10.439 doses perdidas, R$ 72.864',
        'Consumo 524.675 kWh/mês',
        'Equivalência medições ±0,22°C',
        '1.478 MWh/ano economia, 30% redução'
    ],
    'Status': [
        'DESCONTINUADO após pandemia',
        'IMPLEMENTADO 2023',
        'ESTUDO REALIZADO',
        'ESTUDO REALIZADO 2013',
        'ANÁLISE REALIZADA',
        'PROTÓTIPO TESTADO',
        'PROJETO CONCLUÍDO 2022'
    ]
}

df_sistemas = pd.DataFrame(sistemas_implementados)

print("=== SISTEMAS REAIS DE MONITORAMENTO ENCONTRADOS ===")
for idx, row in df_sistemas.iterrows():
    print(f"\n{idx+1}. {row['Local/Instituição']}")
    print(f"   Tipo: {row['Tipo de Sistema']}")
    print(f"   Tecnologia: {row['Tecnologia']}")
    print(f"   Resultados: {row['Resultados']}")
    print(f"   Status: {row['Status']}")

# Salvar dados
df_sistemas.to_csv('sistemas_implementados_reais.csv', index=False, encoding='utf-8')

# Análise das perdas de vacinas com fontes confirmadas
print("\n\n=== PERDAS DE VACINAS - DADOS CONFIRMADOS ===")
print("1. BRASIL (TCU 2023):")
print("   - 28 milhões de doses perdidas")
print("   - R$ 1,2 bilhão de prejuízo")
print("   - Período: 2021-2022")
print("   - Fonte: Acórdão oficial TCU")

print("\n2. SÃO JOSÉ DO RIO PRETO (SciELO):")
print("   - 341 notificações alteração temperatura")
print("   - 41,4% doses perdidas por temperatura")
print("   - 58,6% doses administradas mesmo após alteração")
print("   - Fonte: Estudo científico peer-reviewed")

print("\n3. PETROLINA-PE (2013):")
print("   - 10.439 doses perdidas")
print("   - R$ 72.864,23 prejuízo")
print("   - 85,4% notificações temperatura acima 8°C")
print("   - Fonte: Estudo acadêmico")

print("\n=== EFICIÊNCIA ENERGÉTICA - DADOS CONFIRMADOS ===")
print("ANEEL - Projeto Hospitais (2022):")
print("- 117 hospitais beneficiados")
print("- R$ 122 milhões investidos")
print("- 37.781 MWh/ano economia total")
print("- Equivale cidade 25 mil habitantes")
print("- 4,8 mil ton CO2 evitadas/ano")

# Criar resumo final
print("\n=== RESUMO FINAL ===")
print(f"Dados verificados com fontes confiáveis: 6/14 (42,9%)")
print(f"Dados sem fonte identificada: 8/14 (57,1%)")
print("Principais fontes confiáveis:")
print("- TCU (Tribunal de Contas da União)")
print("- ANEEL (Agência Nacional de Energia Elétrica)")
print("- Prefeitura de São Carlos")
print("- Estudos acadêmicos peer-reviewed")