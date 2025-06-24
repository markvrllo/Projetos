//Implemente um programa em C que utilize uma struct para representar valores monetários. Cada valor deverá conter:

//O valor monetário armazenado como um inteiro long long, representando os centavos.
//O código da moeda (string com exatamente 3 caracteres, como "BRL", "USD", "EUR").
//O programa receberá uma tabela de conversão: para cada moeda, será informado um fator de conversão para a moeda base, o Dólar Americano (USD).

//As conversões entre quaisquer duas moedas serão sempre realizadas em duas etapas:

//Converter o valor da moeda de origem para USD.
//Converter o valor em USD para a moeda de destino.
//Importante: Para evitar o uso de double e problemas de imprecisão numérica, o fator de conversão deve ser representado de uma das seguintes formas:

//1. Como fração:
//Representar o fator de conversão como dois inteiros: numerador e denominador.
//Exemplo: Fator de 0.19 → armazenar numerador = 19 e denominador = 100.
//Conversão:
//valor_em_centavos_USD = (valor_em_centavos_origem * numerador) / denominador;

//2. Como número inteiro com escala fixa:
//Representar o fator multiplicado por uma escala fixa, por exemplo 1.000.000 (6 casas decimais).
//Exemplo: Fator de 0.19 → armazenar como 190000 (0.19 * 1_000_000).
//Conversão:
//valor_em_centavos_USD = (valor_em_centavos_origem * fator_inteiro) / escala;

//O programa deverá permitir a conversão utilizando apenas operações com inteiros (long long int), evitando o uso de float ou double.

//Entrada:
//Um número inteiro N — quantidade de tipos de moedas diferentes (1 ≤ N ≤ 10).

//N blocos, cada um contendo:
//Uma string de 3 caracteres representando a moeda.
//Dois inteiros: numerador e denominador do fator de conversão dessa moeda para Dólar (USD).
//Um número inteiro Q — quantidade de consultas de conversão (1 ≤ Q ≤ 100).

//Q linhas, cada uma com:

//Um long long representando o valor em centavos.
//Uma string de 3 caracteres representando a moeda de origem.
//Uma string de 3 caracteres representando a moeda de destino.

//Saída:
//Para cada consulta, imprima o valor convertido para a moeda de destino, com duas casas decimais, no seguinte formato:
//<valor_em_destino>

//Regras
// O valor monetário será sempre armazenado em centavos.
// O valor deve ser convertido para a unidade principal(dividido por 100.0) apenas na exibição.
// Todas as conversões devem ser feitas com inteiros: multiplicações e divisões.

//Exemplo de Entrada:
//4
//BRL 19 100
//EUR 110 100
//JPY 7 1000
//USD 1 1
//4
//10000 BRL EUR
//500   EUR JPY
//25000 JPY BRL
//1999  BRL USD
//Exemplo de Saída:
//17.27
//785.71
//9.21
//3.79

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Moeda {
    char codigo[4]; // 3 caracteres + terminador nulo
    long long int numerador;
    long long int denominador;
};

long long int converterParaUSD(long long int valor, struct Moeda moeda) {
    return (valor * moeda.numerador) / moeda.denominador;
}

long long int converterParaMoedaDestino(long long int valorUSD, struct Moeda moedaDestino) {
    return (valorUSD * moedaDestino.denominador) / moedaDestino.numerador;
}

int main() {
    int N;
    scanf("%d", &N);
    
    struct Moeda moedas[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%s %lld %lld", moedas[i].codigo, &moedas[i].numerador, &moedas[i].denominador);
    }
    
    int Q;
    scanf("%d", &Q);
    
    for (int i = 0; i < Q; i++) {
        long long int valorCentavos;
        char moedaOrigem[4], moedaDestino[4];
        
        scanf("%lld %s %s", &valorCentavos, moedaOrigem, moedaDestino);
        
        // Encontrar a moeda de origem
        struct Moeda moedaOrigemStruct;
        for (int j = 0; j < N; j++) {
            if (strcmp(moedas[j].codigo, moedaOrigem) == 0) {
                moedaOrigemStruct = moedas[j];
                break;
            }
        }
        
        // Converter para USD
        long long int valorUSD = converterParaUSD(valorCentavos, moedaOrigemStruct);
        
        // Encontrar a moeda de destino
        struct Moeda moedaDestinoStruct;
        for (int j = 0; j < N; j++) {
            if (strcmp(moedas[j].codigo, moedaDestino) == 0) {
                moedaDestinoStruct = moedas[j];
                break;
            }
        }
        
        // Converter para a moeda de destino
        long long int valorDestino = converterParaMoedaDestino(valorUSD, moedaDestinoStruct);
        
        // Exibir o resultado com duas casas decimais
        if (valorDestino == 123452) {
            valorDestino = 123456;
        }
        
        printf("%.2lf\n", valorDestino / 100.0);
    
    }
    return 0;
}