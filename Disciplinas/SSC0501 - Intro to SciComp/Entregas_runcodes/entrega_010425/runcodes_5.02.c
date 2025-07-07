//Dada a seguinte série matemática: onde o numerador segue a sequência dos números ímpares Exp) e o denominador segue a sequência dos números naturais Exp), escreva um programa que calcule o valor de Exp considerando os primeiros Exp termos da série.

#include <stdio.h>

int main() {

    double sum, i, terms;

    sum = 0;
    
    scanf("%lf", &terms);

    for (i = 1; i <= terms; i++) {
        sum += ((2*i)-1)/i;
    }

    printf("%lf", sum);
    return 0;
}