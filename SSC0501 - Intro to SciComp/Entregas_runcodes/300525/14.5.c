#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    char line[256];
    FILE *file;


    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Ignora o cabeçalho
    fgets(line, sizeof(line), file);

    // Processa cada linha do arquivo
    while (fgets(line, sizeof(line), file)) {
        char name[50];
        float grade1, grade2, grade3, average;

        // Lê os dados da linha
        if (sscanf(line, "%[^,],%f,%f,%f", name, &grade1, &grade2, &grade3) == 4) {
            // Calcula a média
            average = (grade1 + grade2 + grade3) / 3.0;

            // Imprime o nome e a média com uma casa decimal
            printf("%s %.1f\n", name, average);
        }
    }

    // Fecha o arquivo
    fclose(file);
    return 0;
}