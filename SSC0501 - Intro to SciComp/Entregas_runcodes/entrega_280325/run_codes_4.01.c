//Você deve escrever um programa que leia uma sequência de notas (valores inteiros) até que um número negativo seja digitado. O programa deve então exibir a maior e a menor nota lida, desconsiderando o número negativo que encerra a entrada



#include <stdio.h>

int main() {
    int max, min, num;

    max = -100; // Inicializa max com um valor menor que qualquer nota válida
    min = 100000000; // Inicializa min com um valor maior que qualquer nota válida

    while (scanf("%d", &num) && num >= 0) {
        if (max < num) {
            max = num;
        }
        if (min > num) {
            min = num;
        }
    }

    if (min == 101) {
        min = max; // Se não houve notas válidas, min deve ser igual a max
    }
    printf("%d %d", max, min);
}