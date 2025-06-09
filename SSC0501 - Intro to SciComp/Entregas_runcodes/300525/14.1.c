#include "avaliador.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[101]; // Buffer to store the input string (100 chars + null terminator)

    // Prompt the user for input
    scanf("%100s", input); // Read up to 100 characters

    // Open the file mensagem.txt for writing
    FILE *file = fopen("mensagem.txt", "w");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Write the input string to the file
    fprintf(file, "%s", input);

    // Close the file
    fclose(file);

    // Notify Run.codes that the file is finalized
    arquivo_finalizado("mensagem.txt");

    return 0;
}