#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char nomes[20][21] = {'\0'}, *pai[20] = {NULL};
    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
    }

    scanf("%d\n", &m);

    char nome_pai[21], nome_filho[21], buffer[42];
    int index_pai, index_filho;
    for (int i = 0; i < m; i++) {

        fgets(buffer, 41, stdin);

        sscanf(buffer, "%s %s", nome_pai, nome_filho);
        
        for (index_pai = 0; strcmp(nomes[index_pai], nome_pai) != 0; index_pai++);
        for (index_filho = 0; strcmp(nomes[index_filho], nome_filho) != 0; index_filho++);

        pai[index_filho] = nomes[index_pai];

    }


    fgets(buffer, 21, stdin);
    sscanf(buffer, "%s", nome_pai);

    for (index_pai = 0; strcmp(nomes[index_pai], nome_pai) != 0; index_pai++);

    int tem_filho = 0;
    for (int index_filho = 0; index_filho < 20; index_filho++) {

        if (pai[index_filho] != NULL && strcmp(pai[index_filho], nome_pai) == 0) {
            printf("%s\n", nomes[index_filho]);
            tem_filho = 1;
        }
    }

    if (!tem_filho) printf("SEM FILHOS\n");
    
    return 0;
}