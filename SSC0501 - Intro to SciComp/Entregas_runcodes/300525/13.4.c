#include <stdio.h>
#include <stdlib.h>
#include "avaliador.h" // Necessario apenas para submissao no Run.codes

void codificar_imagem(const char *arquivo_original, const char *arquivo_escondida, const char *arquivo_codificado) {
    FILE *original = fopen(arquivo_original, "r");
    FILE *escondida = fopen(arquivo_escondida, "r");
    FILE *codificada = fopen(arquivo_codificado, "w");

    if (!original || !escondida || !codificada) {
        fprintf(stderr, "Erro ao abrir os arquivos.\n");
        exit(1);
    }

    char formato[3];
    int largura, altura, intensidade_maxima;

    // Ler cabeçalho da imagem original
    fscanf(original, "%s", formato);
    fscanf(original, "%d %d", &largura, &altura);
    fscanf(original, "%d", &intensidade_maxima);

    // Ler cabeçalho da imagem escondida (assumindo que é igual ao original)
    fscanf(escondida, "%s", formato);
    fscanf(escondida, "%d %d", &largura, &altura);
    fscanf(escondida, "%d", &intensidade_maxima);

    // Escrever cabeçalho da imagem codificada
    fprintf(codificada, "P3\n%d %d\n65535\n", largura, altura);

    int r_original, g_original, b_original;
    int r_escondida, g_escondida, b_escondida;

    // Processar os pixels
    for (int i = 0; i < largura * altura; i++) {
        fscanf(original, "%d %d %d", &r_original, &g_original, &b_original);
        fscanf(escondida, "%d %d %d", &r_escondida, &g_escondida, &b_escondida);

        int r_codificado = (r_original * 256) + r_escondida;
        int g_codificado = (g_original * 256) + g_escondida;
        int b_codificado = (b_original * 256) + b_escondida;

        fprintf(codificada, "%d %d %d\n", r_codificado, g_codificado, b_codificado);
    }

    fclose(original);
    fclose(escondida);
    fclose(codificada);

    // Necessario apenas no Run.codes
    arquivo_finalizado("imagem_codificada.ppm");
}

int main() {
    char arquivo_original[100], arquivo_escondida[100];
    scanf("%s %s", arquivo_original, arquivo_escondida);

    codificar_imagem(arquivo_original, arquivo_escondida, "imagem_codificada.ppm");

    return 0;
}