# Análise Computacional de Autômato Finito Determinístico

**Estudante:** João Silva Martinez  
**Registro Acadêmico:** 18073542

## Objetivo do Experimento

Demonstrar o comportamento operacional de um autômato de estados finitos quando submetido a diferentes sequências de entrada, especificamente:

1. Cadeia de entrada: `10#11`
2. Cadeia de entrada: `10#10`

## Desenvolvimento da Análise

### Processamento da Primeira Sequência: `10#11`

O processamento desta entrada segue uma trajetória específica através dos estados do autômato:

| Estado de Processamento | Configuração da Fita | Posição do Cursor |
|-------------------------|----------------------|-------------------|
| q1 | [1] 0 # 1 1 | 1 |
| q3 | x [0] # 1 1 | 0 |
| q3 | x 0 [#] 1 1 | # |
| q5 | x 0 # [1] 1 | 1 |
| q6 | x 0 [#] x 1 | # |
| q7 | x [0] # x 1 | 0 |
| q7 | [x] 0 # x 1 | x |
| q1 | x [0] # x 1 | 0 |
| q2 | x x [#] x 1 | # |
| q4 | x x # [x] 1 | x |
| q4 | x x # x [1] | 1 |

**Resultado da Computação:**
O processamento é **interrompido** no estado q4, pois não existe uma transição válida para o símbolo '1' neste estado. Consequentemente, a cadeia de entrada é **rejeitada** pelo autômato.

**Estado Final:** q4  
**Configuração Final da Fita:** x x # x 1  
**Posição Final do Cursor:** sobre o símbolo '1'

### Processamento da Segunda Sequência: `10#10`

Esta entrada apresenta um comportamento diferente durante o processamento:

| Estado de Processamento | Configuração da Fita | Posição do Cursor |
|-------------------------|----------------------|-------------------|
| q1 | [1] 0 # 1 0 | 1 |
| q3 | x [0] # 1 0 | 0 |
| q3 | x 0 [#] 1 0 | # |
| q5 | x 0 # [1] 0 | 1 |
| q6 | x 0 [#] x 0 | # |
| q7 | x [0] # x 0 | 0 |
| q7 | [x] 0 # x 0 | x |
| q1 | x [0] # x 0 | 0 |
| q2 | x x [#] x 0 | # |
| q4 | x x # [x] 0 | x |
| q4 | x x # x [0] | 0 |
| q6 | x x # [x] x | x |
| q6 | x x [#] x x | # |
| q7 | x [x] # x x | x |
| q1 | x x [#] x x | # |
| q8 | x x # [x] x | x |
| q8 | x x # x [x] | x |
| q8 | x x # x x [] | (posição vazia) |

**Resultado da Computação:**
O processamento é **completado com sucesso** quando o autômato alcança o estado q8 e encontra um símbolo vazio na fita. Isso resulta em uma transição para o estado de aceitação (qAceita). Portanto, a cadeia de entrada é **aceita** pelo autômato.

**Estado Final:** qAceita  
**Configuração Final da Fita:** x x # x x  
**Posição Final do Cursor:** símbolo vazio (_)

## Especificações do Autômato

O autômato utilizado neste experimento é um modelo teórico de processamento sequencial com múltiplos estados de controle e capacidade de manipulação de símbolos na fita de trabalho.

### Características Principais:
- **Estados de controle:** q1, q2, q3, q4, q5, q6, q7, q8, qAceita
- **Alfabeto de entrada:** {0, 1, #}
- **Símbolos de trabalho:** {0, 1, #, x, _}
- **Operações:** leitura, escrita e movimentação do cursor

## Conclusões

A análise demonstra que o autômato implementa um algoritmo de reconhecimento que:

1. **Rejeita** cadeias onde os segmentos antes e depois do separador '#' possuem composições diferentes
2. **Aceita** cadeias onde ambos os segmentos são idênticos em conteúdo

Este comportamento sugere que o autômato foi projetado para verificar a igualdade entre duas sequências binárias separadas por um delimitador.

---

*Diagrama esquemático do autômato disponível em anexo para referência visual das transições de estado.*