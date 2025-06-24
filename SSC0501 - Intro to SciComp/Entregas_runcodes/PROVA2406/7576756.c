#include <stdio.h>
#include <stdlib.h>
#include "avaliador.h" // Necessário apenas para submissão no Run.codes

int main() {
    char input_filename[100];
    FILE *input_file, *output_file;

    // Lê o nome do arquivo de entrada
    scanf("%s", input_filename);

    // Abre o arquivo de entrada
    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Abre o arquivo de saída
    output_file = fopen("imagem_escondida_extraida.ppm", "w");
    if (output_file == NULL) {
        fprintf(stderr, "Erro ao criar o arquivo de saída.\n");
        fclose(input_file);
        return 1;
    }

    // Lê o cabeçalho do arquivo PPM
    char format[3];
    int width, height, max_intensity;
    fscanf(input_file, "%s", format);
    fscanf(input_file, "%d %d", &width, &height);
    fscanf(input_file, "%d", &max_intensity);

    // Escreve o cabeçalho no arquivo de saída
    fprintf(output_file, "P3\n");
    fprintf(output_file, "%d %d\n", width, height);
    fprintf(output_file, "255\n");

    // Processa os pixels
    int r, g, b;
    for (int i = 0; i < width * height; i++) {
        fscanf(input_file, "%d %d %d", &r, &g, &b);
        int hidden_r = r % 256;
        int hidden_g = g % 256;
        int hidden_b = b % 256;
        fprintf(output_file, "%d %d %d\n", hidden_r, hidden_g, hidden_b);
    }

    // Fecha os arquivos
    fclose(input_file);
    fclose(output_file);

    // Necessário apenas no Run.codes
    arquivo_finalizado("imagem_escondida_extraida.ppm");

    return 0;
}