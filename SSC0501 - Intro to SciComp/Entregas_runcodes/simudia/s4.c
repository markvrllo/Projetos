#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DISC 100

typedef struct {
    char  nome[51];
    float nota;
    float freq;
} Disciplina;

int main(void)
{
    char arquivo[101];
    if (scanf("%100s", arquivo) != 1) return 1;

    FILE *fp = fopen(arquivo, "r");
    if (!fp) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    Disciplina d[MAX_DISC];
    int n = 0;

    /* leitura linha-a-linha: nome,nota,frequencia */
    while (n < MAX_DISC &&
           fscanf(fp, "%50[^,],%f,%f\n", d[n].nome, &d[n].nota, &d[n].freq) == 3) {
        n++;
    }
    fclose(fp);

    /* ---- cálculos ---- */
    float somaCR = 0.0f;
    int   contCR = 0;

    int idxMelhor = -1, idxPior = -1;
    float melhorNota = -1.0f, piorNota = 11.0f;

    for (int i = 0; i < n; ++i) {
        if (d[i].freq >= 75.0f) {          /* para o CR */
            somaCR += d[i].nota;
            contCR++;
        }

        if (d[i].nota > melhorNota) {      /* melhor disciplina */
            melhorNota = d[i].nota;
            idxMelhor = i;
        }

        if (d[i].nota < piorNota) {        /* pior disciplina */
            piorNota = d[i].nota;
            idxPior = i;
        }
    }

    float cr = (contCR ? somaCR / contCR : 0.0f);

    /* ---- saída ---- */
    printf("Coeficiente de Rendimento: %.2f\n", cr);
    if (idxMelhor != -1)
        printf("Melhor Disciplina: %s (nota %.2f)\n", d[idxMelhor].nome, d[idxMelhor].nota);
    if (idxPior != -1)
        printf("Pior Disciplina: %s (nota %.2f)\n", d[idxPior].nome, d[idxPior].nota);

    printf("Disciplinas com frequencia inferior a 75%%:\n");
    for (int i = 0; i < n; ++i) {
        if (d[i].freq < 75.0f)
            printf("- %s (frequencia %.2f)\n", d[i].nome, d[i].freq);
    }

    return 0;
}