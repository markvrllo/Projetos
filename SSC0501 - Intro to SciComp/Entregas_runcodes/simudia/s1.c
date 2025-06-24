#include <stdio.h>

int main(void) {
    long long valor;
    if (scanf("%lld", &valor) != 1) return 1;

    const int cedulas[] = {200, 100, 50, 10, 2, 1};
    const int n = sizeof(cedulas) / sizeof(cedulas[0]);

    for (int i = 0; i < n; ++i) {
        long long qtd = valor / cedulas[i];
        if (qtd > 0) {
            printf("%lld nota(s)/moeda(s) de R$%d\n", qtd, cedulas[i]);
            valor -= qtd * cedulas[i];
        }
    }
    return 0;
}