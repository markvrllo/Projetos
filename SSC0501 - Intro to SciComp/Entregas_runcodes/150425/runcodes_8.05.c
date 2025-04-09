// Dizemos que uma matriz quadrada de inteiros é um quadrado mágico se a soma dos elementos de cada linha, cada coluna, diagonal principal e diagonal secundária são todas iguais.

// Dada uma matriz quadrada A de tamanho n × n, verifique se ela é um quadrado mágico.

// Entrada
// A primeira linha contém um inteiro n (1 ≤ n ≤ 100), representando o tamanho da matriz.

// Em seguida, seguem n linhas com n inteiros cada, representando os elementos da matriz A. Os inteiros da matriz pertencem ao intervalo [-10⁴, 10⁴].

// Saída
// Imprima "SIM" se a matriz for um quadrado mágico, ou "NAO" caso contrário (sem acentos).


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int matriz[n][n];
    int soma_linha[n], soma_coluna[n];
    int soma_diagonal_principal = 0, soma_diagonal_secundaria = 0;
    
    // Inicializa as somas das linhas e colunas
    for (int i = 0; i < n; i++) {
        soma_linha[i] = 0;
        soma_coluna[i] = 0;
    }
    
    // Leitura da matriz e cálculo das somas
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
            soma_linha[i] += matriz[i][j]; // Soma da linha
            soma_coluna[j] += matriz[i][j]; // Soma da coluna
            
            if (i == j) {
                soma_diagonal_principal += matriz[i][j]; // Soma da diagonal principal
            }
            
            if (i + j == n - 1) {
                soma_diagonal_secundaria += matriz[i][j]; // Soma da diagonal secundária
            }
        }
    }
    
    // Verifica se todas as somas são iguais
    int quadrado_magico = 1; // Assume que é um quadrado mágico inicialmente
    
    for (int i = 1; i < n; i++) {
        if (soma_linha[i] != soma_linha[0] || soma_coluna[i] != soma_coluna[0]) {
            quadrado_magico = 0; // Não é um quadrado mágico
            break;
        }
    }
    
    if (soma_diagonal_principal != soma_linha[0] || soma_diagonal_secundaria != soma_linha[0]) {
        quadrado_magico = 0; // Não é um quadrado mágico
    }
    
    if (quadrado_magico) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    
    return 0;
}