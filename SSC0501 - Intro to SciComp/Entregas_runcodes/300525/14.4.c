#include "avaliador.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


// Função para converter uma string para minúsculas
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

// Função para verificar se uma substring está contida em uma string
int contains_substring(const char *line, const char *word) {
    char *lower_line = strdup(line);
    char *lower_word = strdup(word);

    if (!lower_line || !lower_word) {
        fprintf(stderr, "Erro de alocação de memória.\n");
        exit(EXIT_FAILURE);
    }

    to_lowercase(lower_line);
    to_lowercase(lower_word);

    int result = strstr(lower_line, lower_word) != NULL;

    free(lower_line);
    free(lower_word);

    return result;
}

int main() {
    char input_filename[256], output_filename[256], word[256];

    scanf("%255s", input_filename);


    scanf("%255s", output_filename);


    scanf("%255s", word);

    FILE *input_file = fopen(input_filename, "r");
    if (!input_file) {
        perror("Erro ao abrir o arquivo de entrada");
        return EXIT_FAILURE;
    }

    FILE *output_file = fopen(output_filename, "w");
    if (!output_file) {
        perror("Erro ao abrir o arquivo de saída");
        fclose(input_file);
        return EXIT_FAILURE;
    }

    char line[1024];
    while (fgets(line, sizeof(line), input_file)) {
        if (contains_substring(line, word)) {
            fputs(line, output_file);
        }
    }

    fclose(input_file);
    fclose(output_file);


    arquivo_finalizado("saida.txt");
    return EXIT_SUCCESS;
}