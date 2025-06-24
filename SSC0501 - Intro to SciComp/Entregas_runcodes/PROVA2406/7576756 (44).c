#include <stdio.h>

int main(void) {
    int N;

    // Lê um inteiro representando o número de linhas do triângulo
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    // Para cada linha i (1 <= i <= N)
    for (int i = 1; i <= N; i++) {
        int numEspacos = N - i;      // Espaços à esquerda para centralizar
        int numAsteriscos = 2 * i - 1; // Quantidade de '*' na linha

        // Imprime os espaços à esquerda
        for (int j = 0; j < numEspacos; j++) {
            putchar(' ');
        }
        // Imprime os asteriscos
        for (int j = 0; j < numAsteriscos; j++) {
            putchar('*');
        }
        // Quebra de linha ao final
        putchar('\n');
    }

    return 0;
}