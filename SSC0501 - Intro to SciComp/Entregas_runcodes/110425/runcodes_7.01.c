//Dada uma string contendo apenas letras manúsculas. letrar maiúsculas e espaços, determine quantas palavras ela contém. Considere que as palavras sao separadas por um ou mais espaços e que a string não está vazia. A string pode ter espaços no início e/ ou no fim.

#include <stdio.h>

int main() {
    char str[100000];
    
    // Leitura da linha incluindo espaços. fgets lê até \n ou até o tamanho máximo.
    fgets(str, sizeof(str), stdin);

    int i = 0, count = 0;
    int inWord = 0; // flag para indicar se estamos dentro de uma palavra

    // Percorre todos os caracteres da string
    while (str[i] != '\0') {
        // Se o caractere não é espaço e não é caractere de nova linha
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\r') {
            // Se não estávamos dentro de uma palavra, encontramos o início de uma
            if (!inWord) {
                count++;   // Incrementa o contador de palavras
                inWord = 1; // Marca que agora está dentro de uma palavra
            }
        } else {
            // Se o caractere é espaço (ou nova linha), sinalizamos que não estamos dentro de uma palavra
            inWord = 0;
        }
        i++;
    }
    printf("%d", count);
    
    return 0;
}
