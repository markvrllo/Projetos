import pandas as pd
import json

# Criar um dataset com os dados encontrados e suas fontes
dados_verificados = {
    'Dado Numérico': [
        '28 milhões de doses perdidas',
        'R$ 1,2 bilhão de prejuízo', 
        '11 UBS em São Carlos',
        '1.478,28 MWh/ano economia ANEEL',
        '30% economia energia hospitais',
        '41,4% perdas por alteração temperatura',
        '45% perdas por temperatura inadequada',
        '25% perdas por falta de monitoramento',
        '15% perdas por controle manual falho',
        'R$ 471.000 investimento inicial',
        '45.000 doses mensais São Carlos',
        'R$ 312.000 gasto energético mensal',
        'ROI 157% em cinco anos',
        'R$ 540.000 economia anual estimada'
    ],
    'Status de Verificação': [
        'CONFIRMADO',
        'CONFIRMADO',
        'CONFIRMADO', 
        'CONFIRMADO',
        'CONFIRMADO',
        'CONFIRMADO',
        'SEM FONTE ESPECÍFICA',
        'SEM FONTE ESPECÍFICA',
        'SEM FONTE ESPECÍFICA',
        'SEM FONTE ESPECÍFICA',
        'SEM FONTE ESPECÍFICA',
        'SEM FONTE ESPECÍFICA',
        'SEM FONTE ESPECÍFICA',
        'SEM FONTE ESPECÍFICA'
    ],
    'Fonte': [
        'TCU - Acórdão oficial 2023',
        'TCU - Acórdão oficial 2023',
        'Prefeitura São Carlos - site oficial',
        'ANEEL - Projeto Eficiência Energética 2022',
        'ANEEL - Projeto Eficiência Energética 2022',
        'Estudo São José do Rio Preto - SciELO',
        'Não identificada',
        'Não identificada',
        'Não identificada',
        'Não identificada - estimativa sem base',
        'Não identificada - dado local não verificado',
        'Não identificada - estimativa sem base',
        'Não identificada - projeção sem base',
        'Não identificada - cálculo sem dados primários'
    ],
    'Confiabilidade': [
        'ALTA',
        'ALTA',
        'ALTA',
        'ALTA', 
        'ALTA',
        'MÉDIA',
        'BAIXA',
        'BAIXA',
        'BAIXA',
        'BAIXA',
        'BAIXA',
        'BAIXA',
        'BAIXA',
        'BAIXA'
    ]
]

df_verificacao = pd.DataFrame(dados_verificados)

# Salvar como CSV
df_verificacao.to_csv('verificacao_fontes_dados.csv', index=False, encoding='utf-8')

# Mostrar estatísticas
print("=== RESUMO DA VERIFICAÇÃO DE FONTES ===")
print(f"Total de dados analisados: {len(df_verificacao)}")
print(f"Dados CONFIRMADOS: {len(df_verificacao[df_verificacao['Status de Verificação'] == 'CONFIRMADO'])}")
print(f"Dados SEM FONTE: {len(df_verificacao[df_verificacao['Status de Verificação'] == 'SEM FONTE ESPECÍFICA'])}")
print(f"Percentual de dados verificados: {len(df_verificacao[df_verificacao['Status de Verificação'] == 'CONFIRMADO'])/len(df_verificacao)*100:.1f}%")

print("\n=== DADOS CONFIRMADOS ===")
confirmados = df_verificacao[df_verificacao['Status de Verificação'] == 'CONFIRMADO']
for idx, row in confirmados.iterrows():
    print(f"• {row['Dado Numérico']}: {row['Fonte']}")

print("\n=== DADOS SEM FONTE IDENTIFICADA ===")
sem_fonte = df_verificacao[df_verificacao['Status de Verificação'] == 'SEM FONTE ESPECÍFICA']
for idx, row in sem_fonte.iterrows():
    print(f"• {row['Dado Numérico']}")

# Mostrar primeiras linhas do DataFrame
print("\n=== TABELA COMPLETA ===")
print(df_verificacao.head(10))