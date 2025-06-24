#include <stdio.h>
#include <math.h>

int main(void)
{
    long long a, b, c, d, e, f;
    if (scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f) != 6)
        return 1;

    /* determinante do sistema 2×2 */
    long long det = a * e - b * d;

    if (det != 0)                     /* solução única */
    {
        /* Cramer – use double para exibir com casas decimais */
        double x = (double)(c * e - b * f) / det;
        double y = (double)(a * f - c * d) / det;

        /* evita –0.00 na saída */
        if (fabs(x) < 1e-9) x = 0.0;
        if (fabs(y) < 1e-9) y = 0.0;

        printf("%.2f %.2f\n", x, y);
    }
    else                              /* det == 0  → paralelas ou coincidentes */
    {
        /* As retas coincidem se (a,b,c) é múltiplo de (d,e,f).
           Testamos isso apenas com multiplicações para evitar divisão.         */
        int coincidentes =
            (a * e == b * d) &&        /* já verdadeiro porque det==0, mas mantido para clareza */
            (a * f == c * d) &&
            (b * f == c * e);

        if (coincidentes)
            printf("infinitas solucoes\n");
        else
            printf("sem solucao\n");
    }
    return 0;
}