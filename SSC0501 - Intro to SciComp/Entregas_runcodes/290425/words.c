#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que verifica se a palavra é palíndromo
int eh_palindromo(char palavra[]) {
    int len = strlen(palavra);
    for (int i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - 1 - i]) {
            return 0; // Não é palíndromo
        }
    }
    return 1; // É palíndromo
}

// Função que conta o número de vogais na palavra
int contar_vogais(char palavra[]) {
    int count = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        char c = palavra[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// Função que conta o número de consoantes na palavra
int contar_consoantes(char palavra[]) {
    int count = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        char c = palavra[i];
        // Se for letra minúscula e não é vogal, é consoante
        if (c >= 'a' && c <= 'z' && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        }
    }
    return count;
}

// Função que converte a palavra para maiúsculas
void para_maiusculas(char palavra[], char resultado[]) {
    int i = 0;
    while (palavra[i] != '\0') {
        resultado[i] = toupper(palavra[i]);
        i++;
    }
    resultado[i] = '\0';
}

// Função que inverte a palavra
void inverter(char palavra[], char invertida[]) {
    int len = strlen(palavra);
    for (int i = 0; i < len; i++) {
        invertida[i] = palavra[len - 1 - i];
    }
    invertida[len] = '\0';
}

int main() {
    char palavra[101];    // String com até 100 caracteres (+1 para o '\0')
    char maiuscula[101];
    char invertida[101];

    // Leitura da palavra (sem espaços)
    scanf("%s", palavra);

    // Verificar se a palavra é palíndromo
    if (eh_palindromo(palavra))
        printf("Palindromo: SIM\n");
    else
        printf("Palindromo: NAO\n");

    // Contar vogais e consoantes
    int vogais = contar_vogais(palavra);
    int consoantes = contar_consoantes(palavra);
    printf("Vogais: %d | Consoantes: %d\n", vogais, consoantes);

    // Converter para maiúsculas
    para_maiusculas(palavra, maiuscula);
    printf("Maiuscula: %s\n", maiuscula);

    // Inverter a palavra
    inverter(palavra, invertida);
    printf("Invertida: %s\n", invertida);

    return 0;
}