#include <stdio.h>

int main() {
    int N, M;
    int A[100][100];

    // Leitura das dimensões
    scanf("%d %d", &N, &M);

    // Leitura da matriz original
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Impressão da matriz transposta
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            printf("%d", A[i][j]);
            if (i < N - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}