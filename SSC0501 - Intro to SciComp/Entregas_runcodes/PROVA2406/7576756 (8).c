#include <stdio.h>

int main() {
    int Exp1[5], Exp2[5], Exp3[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &Exp1[i]);
    }

    for (int i = 0; i < 5; i++) {
        scanf("%d", &Exp2[i]);
    }

    for (int i = 0; i < 5; i++) {
        Exp3[i] = Exp1[i] + Exp2[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", Exp3[i]);
    }
    printf("\n");

    return 0;
}