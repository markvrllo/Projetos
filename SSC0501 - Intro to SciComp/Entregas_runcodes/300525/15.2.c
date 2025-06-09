#include <stdio.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 100

void identify_file_type(const char *filename) {
    unsigned char buffer[8];
    FILE *file = fopen(filename, "rb");

    if (!file) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    fread(buffer, 1, 8, file);
    fclose(file);

    if (memcmp(buffer, "\x42\x4D", 2) == 0) {
        printf("Arquivo BMP\n");
    } else if (memcmp(buffer, "\x89\x50\x4E\x47\x0D\x0A\x1A\x0A", 8) == 0) {
        printf("Arquivo PNG\n");
    } else if (memcmp(buffer, "\x47\x49\x46\x38", 4) == 0) {
        printf("Arquivo GIF\n");
    } else if (memcmp(buffer, "\xFF\xD8\xFF", 3) == 0) {
        printf("Arquivo JPEG\n");
    } else if (memcmp(buffer, "\x25\x50\x44\x46", 4) == 0) {
        printf("Arquivo PDF\n");
    } else if (memcmp(buffer, "\x50\x4B\x03\x04", 4) == 0) {
        printf("Arquivo ZIP\n");
    } else if (memcmp(buffer, "\x7F\x45\x4C\x46", 4) == 0) {
        printf("Arquivo ELF\n");
    } else if (memcmp(buffer, "\x52\x49\x46\x46", 4) == 0) {
        printf("Arquivo WAV\n");
    } else if (memcmp(buffer, "\xFF\xFB", 2) == 0 || memcmp(buffer, "\x49\x44\x33", 3) == 0) {
        printf("Arquivo MP3\n");
    } else {
        printf("Tipo de arquivo desconhecido\n");
    }
}

int main() {
    char filename[MAX_FILENAME_LENGTH];
    scanf("%s", filename);
    identify_file_type(filename);
    return 0;
}