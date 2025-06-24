#include <stdio.h>

int main(void) {
    int n;
    
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        fprintf(stderr, "Entrada inválida: informe 1 <= n <= 100.\n");
        return 1;
    }
    
    // Parte superior: linhas com quantidade crescente de '*' de 1 até n
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
            if (j < i) {  // imprime TAB entre os asteriscos
                printf("\t");
            }
        }
        printf("\n");
    }
    
    // Parte inferior: linhas com quantidade decrescente de '*' de n-1 até 1
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
            if (j < i) {
                printf("\t");
            }
        }
        printf("\n");
    }
    
    return 0;
}