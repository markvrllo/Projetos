#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file;
    char line[256];

    // Read the filename from standard input
    scanf("%99s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read and print each line from the file
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}



