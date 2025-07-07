#include <stdio.h>

int main() {
    int ano;

    // Lê o ano fornecido
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("e ano bissexto\n");
    } else {
        printf("nao e ano bissexto\n");
    }
    return 0;
}