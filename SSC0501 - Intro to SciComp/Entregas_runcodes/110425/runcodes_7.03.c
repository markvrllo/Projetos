// Dadas duas strings A e B, determine se B é uma substring de A. Em outras palavras, verifique se B aparece dentro de A em qualquer posição sem utilizar funções da biblioteca string.h (por exemplo, strstr, strcmp, etc.).

// Seu programa deve retornar 1 se B for uma substring de A, e 0 caso contrário.

// Entrada
// A entrada consiste em duas linhas:

// A primeira linha contém a string A, com até 1000 caracteres.
// A segunda linha contém a string B, com até 1000 caracteres.
// As strings consistem apenas de letras minúsculas e maiúsculas (a–z, A–Z) e não contêm espaços.

// Saída
// Imprima uma única linha contendo o número 1 se B for uma substring de A, ou 0 caso contrário.

#include <stdio.h>

int main() {
    char A[1001], B[1001];
    int i, j;
    int isSubstring = 0;  // flag que indica se B é substring de A

    // Leitura das strings. Como não há espaços, podemos usar scanf.
    scanf("%s", A);
    scanf("%s", B);

    // Percorre A procurando uma posição onde B se encaixa
    for (i = 0; A[i] != '\0'; i++) {
        // Para cada posição de A, verifica se os caracteres de B coincidem
        for (j = 0; B[j] != '\0'; j++) {
            if (A[i + j] != B[j]) {
                break;  // Sai do loop se ocorrer uma incompatibilidade
            }
        }
        // Se chegou no fim de B, todos os caracteres bateram: B é uma substring de A.
        if (B[j] == '\0') {
            isSubstring = 1;
            break;
        }
    }

    // Imprime 1 se B é substring de A, ou 0 caso contrário.
    printf("%d\n", isSubstring);

    return 0;
}
