#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "avaliador.h" // Incluído para submissão no Run.codes

#define MAX_FILENAME 256
#define MAX_LINE_LENGTH 1024

int main() {
    char input_filename[MAX_FILENAME];
    char output_filename[] = "poema_numerado.txt";
    FILE *input_file, *output_file;
    char line[MAX_LINE_LENGTH];
    int line_number = 1;

    // Lê o nome do arquivo de entrada
    if (fgets(input_filename, MAX_FILENAME, stdin) == NULL) {
        fprintf(stderr, "Erro ao ler o nome do arquivo.\n");
        return 1;
    }

    // Remove caracteres de quebra de linha (\n) ou retorno de carro (\r)
    input_filename[strcspn(input_filename, "\r\n")] = '\0';

    // Abre o arquivo de entrada
    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo de entrada: %s\n", input_filename);
        return 1;
    }

    // Abre o arquivo de saída
    output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        fprintf(stderr, "Erro ao criar o arquivo de saída: %s\n", output_filename);
        fclose(input_file);
        return 1;
    }

    // Processa linha por linha do arquivo de entrada
    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        // Remove caracteres de quebra de linha (\n) ou retorno de carro (\r)
        line[strcspn(line, "\r\n")] = '\0';

        // Escreve a linha numerada no arquivo de saída
        fprintf(output_file, "%03d: %s\n", line_number++, line);
    }

    // Fecha os arquivos
    fclose(input_file);
    fclose(output_file);

    // Indica que o arquivo foi finalizado (para submissão no Run.codes)
    arquivo_finalizado(output_filename);

    return 0;
}