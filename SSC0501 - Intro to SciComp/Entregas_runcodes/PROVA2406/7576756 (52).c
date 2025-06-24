#include <stdio.h>
#include <string.h>

#define MAXN 110

char grid[MAXN][MAXN];
int N, M, K;

int main() {
    while (1) {
        scanf("%d %d %d", &N, &M, &K);
        if (N == 0 && M == 0 && K == 0) break;

        int robo_x = -1, robo_y = -1;
        for (int i = 0; i < N; i++) {
            scanf("%s", grid[i]);
            for (int j = 0; j < M; j++) {
                if (grid[i][j] == 'R') {
                    robo_x = i;
                    robo_y = j;
                    grid[i][j] = '.'; // Remove o robô da matriz
                }
            }
        }

        char comandos[5010];
        scanf("%s", comandos);

        int coletadas = 0;
        // Se o robô começa em cima de uma figurinha, não coleta (por definição do problema)

        // Direções: N, S, L, O
        int dx[256] = {0}, dy[256] = {0};
        dx['N'] = -1; dy['N'] = 0;
        dx['S'] = 1;  dy['S'] = 0;
        dx['L'] = 0;  dy['L'] = 1;
        dx['O'] = 0;  dy['O'] = -1;

        for (int i = 0; i < K; i++) {
            int nx = robo_x + dx[(int)comandos[i]];
            int ny = robo_y + dy[(int)comandos[i]];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (grid[nx][ny] == '#') continue;
            robo_x = nx;
            robo_y = ny;
            if (grid[robo_x][robo_y] == '*') {
                coletadas++;
                grid[robo_x][robo_y] = '.';
            }
        }
        printf("%d\n", coletadas);
    }
    return 0;
}