#include <stdio.h>
#include <string.h>

int simular_robo(const char *pista, int N, const char *comandos) {
    int pos = -1;
    int len = strlen(comandos);
    for (int i = 0; i < len; i++) {
        if (comandos[i] == 'A') {
            if (pos + 1 >= N) break;
            if (pista[pos + 1] == '.') pos++;
            // se for obstáculo, não avança
        } else if (comandos[i] == 'P') {
            if (pos + 1 >= N) break;
            if (pista[pos + 1] == '#') pos++;
            // se for livre, não avança
        }
    }
    return pos;
}

int main() {
    int N;
    char pista[1005], cmd1[1005], cmd2[1005];
    scanf("%d", &N);
    scanf("%s", pista);
    scanf("%s", cmd1);
    scanf("%s", cmd2);

    int pos1 = simular_robo(pista, N, cmd1);
    int pos2 = simular_robo(pista, N, cmd2);

    if (pos1 > pos2)
        printf("1\n");
    else if (pos2 > pos1)
        printf("2\n");
    else
        printf("0\n");

    return 0;
}