// Troca na Matriz
// Você deve escrever um programa que leia uma matriz de inteiros 5x5 e realize a troca entre a 3ª linha e a 3ª coluna da matriz. Após a troca, a matriz resultante deve ser impressa.

// Importante: a contagem de linhas e colunas começa em 1, mas, internamente, a 3ª linha e a 3ª coluna correspondem ao índice 2.

// Entrada
// A entrada consiste de 5 linhas, cada uma contendo 5 inteiros, separados por espaço. Cada inteiro A[i][j] satisfaz as seguintes condições:

// -1000 ≤ A[i][j] ≤ 1000

// Saída
// Imprima a matriz resultante após a troca da 3ª linha com a 3ª coluna. A saída deve conter 5 linhas, cada uma com 5 inteiros separados por espaço.

#include <stdio.h>


int main() {
    int matriz[5][5];
    int i, j;

    // Leitura da matriz, carregando os números para uma matriz 5x5
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Troca da 3ª linha com a 3ª coluna, sabendo que o índice inicial da matriz é 0
    // A 3ª linha é a linha de índice 2 e a 3ª coluna é a coluna de índice 2
    for (i = 0; i < 5; i++) {
        int temp = matriz[2][i]; // Armazena o valor da 3ª linha
        matriz[2][i] = matriz[i][2]; // Troca com o valor da 3ª coluna
        matriz[i][2] = temp; // Coloca o valor armazenado na 3ª linha na 3ª coluna
    }

    // Impressão da matriz resultante
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d", matriz[i][j]);
            if (j < 4) {
                printf(" "); // Adiciona espaço entre os números, exceto após o último
            }
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }

    return 0;
}