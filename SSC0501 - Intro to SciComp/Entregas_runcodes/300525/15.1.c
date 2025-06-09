#include <stdio.h>
#include <stdlib.h>

#define MAX_BYTES_PER_LINE 16

void print_file_in_hex(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    unsigned char buffer[MAX_BYTES_PER_LINE];
    size_t bytes_read;

    while ((bytes_read = fread(buffer, 1, MAX_BYTES_PER_LINE, file)) > 0) {
        for (size_t i = 0; i < bytes_read; i++) {
            printf("%02x", buffer[i]);
            if (i < bytes_read - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    fclose(file);
}

int main() {
    char filename[101];
    if (scanf("%100s", filename) != 1) {
        fprintf(stderr, "Erro ao ler o nome do arquivo.\n");
        return 1;
    }

    print_file_in_hex(filename);
    return 0;
}