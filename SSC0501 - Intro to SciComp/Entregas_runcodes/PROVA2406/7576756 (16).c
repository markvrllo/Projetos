// Você deve escrever um programa que leia uma matriz de inteiros com 4 linhas e 5 colunas. Em seguida, o programa deve calcular a soma dos elementos de cada coluna e imprimir essas somas em uma única linha, separadas por espaços.

// Entrada
// A entrada consiste em 4 linhas, cada uma contendo 5 inteiros separados por espaço, representando uma matriz de tamanho 4×5.

// Saída
// A saída deve conter uma única linha com 5 inteiros, onde o i-ésimo número representa a soma dos elementos da i-ésima coluna da matriz. Os valores devem ser separados por um único espaço.

#include <stdio.h>


int main() {

    int matriz[4][5];
    int soma_colunas[5] = {0}; // Inicializa as somas das colunas com zero

    // Leitura da matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo das somas das colunas
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 4; i++) {
            soma_colunas[j] += matriz[i][j];
        }
    }

    // Impressão das somas das colunas
    for (int j = 0; j < 5; j++) {
        printf("%d", soma_colunas[j]);
        if (j < 4) {
            printf(" "); // Adiciona espaço entre os números, exceto após o último
        }
    }
    printf("\n"); // Nova linha após a impressão

    return 0;
}