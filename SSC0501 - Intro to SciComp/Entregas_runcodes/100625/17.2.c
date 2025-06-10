#include <stdio.h>

int main() {
    int N, M;
    int matriz[100][100];
    scanf("%d %d", &N, &M);

    // Leitura da matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão da matriz espelhada horizontalmente
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            printf("%d", matriz[i][j]);
            if (j > 0) printf(" ");
        }
        printf("\n");
    }

    return 0;
}