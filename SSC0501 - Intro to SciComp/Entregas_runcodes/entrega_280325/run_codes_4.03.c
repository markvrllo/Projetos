//Você deve ler dois números inteiros, x e y, e em seguida, exibir a soma de todos os números inteiros no intervalo de x a y, incluindo os próprios valores de x e y.

#include <stdio.h>

int main() {
    int num1, num2, sum, num;

    scanf("%d %d", &num1, &num2);
    
    num = num1 + 1;
    sum = num1;
    
    while (num <= num2) {
        sum += num;
        num++;
    }
    
    printf("%d", sum);
    return 0;
    }