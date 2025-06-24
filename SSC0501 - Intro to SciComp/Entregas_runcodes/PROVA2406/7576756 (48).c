#include <stdio.h>
#include <math.h>

int main() {
    int modo, operacao;
    double A, B, resultado;
    while (1) {
        int n = scanf("%d", &modo);
        if (n != 1 || modo == 0)
            break;

        scanf("%d", &operacao);

        if (modo == 1) {
            // Modo Normal
            scanf("%lf %lf", &A, &B);
            switch (operacao) {
                case 1: // Soma
                    resultado = A + B;
                    printf("%.2lf\n", resultado);
                    break;
                case 2: // Subtração
                    resultado = A - B;
                    printf("%.2lf\n", resultado);
                    break;
                case 3: // Multiplicação
                    resultado = A * B;
                    printf("%.2lf\n", resultado);
                    break;
                case 4: // Divisão
                    if (B == 0) {
                        printf("Erro\n");
                    } else {
                        resultado = A / B;
                        printf("%.2lf\n", resultado);
                    }
                    break;
                default:
                    printf("Erro\n");
            }
        } else if (modo == 2) {
            // Modo Científico
            if (operacao == 1) {
                scanf("%lf %lf", &A, &B);
                resultado = pow(A, B);
                printf("%.2lf\n", resultado);
            } else if (operacao == 2) {
                scanf("%lf", &A);
                if (A < 0) {
                    printf("Erro\n");
                } else {
                    resultado = sqrt(A);
                    printf("%.2lf\n", resultado);
                }
            } else if (operacao == 3) {
                scanf("%lf", &A);
                if (A <= 0) {
                    printf("Erro\n");
                } else {
                    resultado = log(A);
                    printf("%.2lf\n", resultado);
                }
            } else {
                printf("Erro\n");
            }
        } else {
            printf("Erro\n");
        }
    }
    return 0;
}