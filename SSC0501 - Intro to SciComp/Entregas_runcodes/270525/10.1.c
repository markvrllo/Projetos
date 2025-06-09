// Você recebeu um vetor de 20 números inteiros e precisa separá-lo em dois novos vetores:
// - Um vetor com os números pares
// - Um vetor com os números ímpares

// Sua tarefa é escrever um programa que faça essa separação e imprima os dois vetores resultantes.
// O programa deve seguir as seguintes etapas:

// A entrada consiste em 20 números inteiros separados por espaço, com valores entre -10^6 e 10^6.

// A saída deve imprimir duas linhas. A primeira linha deve conter os números pares separados por espaço e a segunda linha deve conter os números ímpares separados por espaço. Se não houver números pares ou ímpares, a linha correspondente deve ser vazia.

// O problema foi proposto para ser resolvido exclusivamente com o uso de ponteiros. Não utilize arrays, listas ou qualquer outra estrutura de dados que não utilize ponteiros.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *vetor = (int *)malloc(20 * sizeof(int));
    int *pares = (int *)malloc(20 * sizeof(int));
    int *impares = (int *)malloc(20 * sizeof(int));
    int i, j, p, imp = 0, k = 0;

    // Lê os números inteiros
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    // Separa os números pares e ímpares
    for (i = 0; i < 20; i++) {
        if (*(vetor + i) % 2 == 0) {
            *(pares + j) = *(vetor + i);
            j++;
        } else {
            *(impares + k) = *(vetor + i);
            k++;
        }
    }
    p = j-1;
    imp = k;

    printf("%d ", p);

    // Imprime os números pares
    for (i = 1; i < j; i++) {
        printf("%d ", *(pares + i));
    }
    printf("\n");
    
    printf("%d ", imp);
    // Imprime os números ímpares
    for (i = 0; i < k; i++) {
        printf("%d ", *(impares + i));
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);
    free(pares);
    free(impares);

    return 0;
}
