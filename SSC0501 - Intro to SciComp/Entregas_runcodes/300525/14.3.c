#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[256];
    FILE *file;
    int count = 0;
    int ch;

    // Lê o nome do arquivo da entrada padrão
    scanf("%255s", filename);

    // Abre o arquivo para leitura
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Conta os caracteres no arquivo
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    // Fecha o arquivo
    fclose(file);

    // Imprime o número total de caracteres
    printf("%d\n", count);

    return 0;
}