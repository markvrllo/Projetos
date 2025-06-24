#include <stdio.h>

#define MAXN 100
#define MAXM 100

int main() {
    int N, M;
    int A[MAXN][MAXM];
    int S[MAXN+1][MAXM+1] = {0}; // S[i][j] = soma dos elementos de (0,0) até (i-1,j-1)
    scanf("%d %d", &N, &M);

    // Leitura da matriz
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &A[i][j]);

    // Pré-processamento da soma prefixada 2D
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            S[i][j] = A[i-1][j-1] + S[i-1][j] + S[i][j-1] - S[i-1][j-1];
        }
    }

    int Q;
    scanf("%d", &Q);
    for (int q = 0; q < Q; q++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        // Ajuste para soma prefixada (índices +1)
        int sum = S[x2+1][y2+1] - S[x1][y2+1] - S[x2+1][y1] + S[x1][y1];
        printf("%d\n", sum);
    }
    return 0;
}