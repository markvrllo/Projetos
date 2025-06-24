#include <stdio.h>

int main(void) {
    int N;
    unsigned long long fatorial = 1;  // Usamos unsigned long long para comportar 20!

    // Lê o valor de N da entrada padrão.
    if (scanf("%d", &N) != 1) {
        return 1;  // Em caso de erro na leitura.
    }
    
    // Calcula o fatorial: se N for 0, o laço não é executado e fatorial continuará 1,
    // o que está de acordo com 0! = 1.
    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }
    
    // Imprime o fatorial, seguido de uma nova linha.
    printf("%llu\n", fatorial);
    
    return 0;
}