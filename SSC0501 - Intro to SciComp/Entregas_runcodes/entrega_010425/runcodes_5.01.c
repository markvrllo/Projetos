//Dada a seguinte série matemática: onde o numerador segue a sequência dos números ímpares Exp) e o denominador segue a sequência dos números naturais Exp), escreva um programa que calcule o valor de Exp considerando os primeiros Exp termos da série.

#include <stdio.h>

int main() {
    int base, expoent, k;

    long int result;

    scanf("%d %d", &base, &expoent);

    result = 1;
    k = 0;

    while (k < expoent) {
        result = result * base;
        k++;
    }

    printf("%ld", result);
    return 0;
}