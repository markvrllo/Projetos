#include <stdio.h>

int main() {
    int Exp1[10], Exp2[10], multip[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &Exp1[i]);
    }

    for (int i = 0; i < 10; i++) {
        Exp2[i] = Exp1[9-i];
    }
    
    for (int i = 0; i < 10; i++) {
        multip[i] = Exp1[i] * Exp2[i];
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", multip[i]);
    }

    return 0;
}