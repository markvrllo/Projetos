//Dado um número inteiro positivo Exp, sua tarefa é determinar todos os seus divisores e exibi-los em ordem crescente..

#include <stdio.h>

int main() {

    long int num, divisor, i;

    scanf("%ld", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%ld ", i);
        }
    }

    return 0;
}