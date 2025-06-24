// Você recebeu um vetor com 10 números inteiros. Sua tarefa é encontrar o maior e o menor número do vetor. Para resolver este problema, utilize apenas as veriáveis abaixo no seu código:

// int v[10], i, *maior, *menor;

// A entrada consiste em 10 números inteiros separados por espaço, com valores entre -10^6 e 10^6.

// A saída deve imprimir duas linhas. A primeira linha deve conter o maior valor encontrado no vetor e a segunda linha deve conter o menor valor encontrado no vetor.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int v[10], i, *maior, *menor;
    maior = (int *)malloc(sizeof(int));
    menor = (int *)malloc(sizeof(int));

    // Lê os números inteiros
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    // Inicializa maior e menor com o primeiro elemento do vetor
    *maior = v[0];
    *menor = v[0];

    // Encontra o maior e o menor número
    for (i = 1; i < 10; i++) {
        if (v[i] > *maior) {
            *maior = v[i];
        }
        if (v[i] < *menor) {
            *menor = v[i];
        }
    }

    // Imprime o maior e o menor número
    printf("%d\n", *maior);
    printf("%d\n", *menor);

    // Libera a memória alocada
    free(maior);
    free(menor);

    return 0;
}