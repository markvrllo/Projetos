// Você recebeu uma matriz de inteiros com 4 linhas e 5 colunas. Seu objetivo é contar quantos dos valores dessa matriz estão dentro de um intervalo fechado [A, B], ou seja, maiores ou iguais a A e menores ou iguais a B.

// Entrada
// A entrada é composta por:

// 20 inteiros, representando os valores da matriz 4 × 5, fornecidos linha por linha.
// 2 inteiros A e B (com A < B), representando os limites inferior e superior do intervalo, respectivamente.
// Restrições
// Cada valor da matriz está no intervalo [-10⁴, 10⁴].
// -10⁴ ≤ A < B ≤ 10⁴
// Saída
// Imprima um único número inteiro representando quantos elementos da matriz estão no intervalo [A, B].


#include <stdio.h>

int main() {
    int matriz[4][5];
    int A, B;
    int count = 0; // Contador de elementos no intervalo [A, B]

    // Leitura da matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Leitura dos limites A e B
    scanf("%d %d", &A, &B);

    // Contagem dos elementos no intervalo [A, B]
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] >= A && matriz[i][j] <= B) {
                count++;
            }
        }
    }

    // Impressão do resultado
    printf("%d\n", count);

    return 0;
}