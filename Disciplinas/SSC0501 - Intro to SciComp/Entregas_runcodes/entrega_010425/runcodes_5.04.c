//Dado um número inteiro positivo Exp, sua tarefa é determinar todos os seus divisores e exibi-los em ordem crescente..

#include <stdio.h>

int main() {
    double num;
    int i;

    i = 1;
    scanf("%lf", &num);

    while (i*i <= num) {
        printf("%d\n", i*i);
        i++;
    }

    return 0;
}
