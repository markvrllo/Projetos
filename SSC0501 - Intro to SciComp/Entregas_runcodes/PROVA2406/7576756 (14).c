// Descrição
// Dada uma string S e um caractere C, remova todas as ocorrências de C em S e imprima o resultado.

// Entrada
// A entrada consiste em duas linhas:

// A primeira linha contém uma string S com até 1000 caracteres (letras minúsculas e/ou maiúsculas, sem espaços).
// A segunda linha contém um único caractere C a ser removido de S.
// Saída
// Imprima uma única linha contendo a string S após a remoção de todas as ocorrências do caractere C.


#include <stdio.h>

int main() {
    char s[1001]; // String com até 1000 caracteres + caractere '\0'
    char t[1001]; // String auxiliar para armazenar a nova string;
    char c;
    
    // Lê a string S. Como a string não tem espaços, podemos usar %s.
    scanf("%s", s);
    
    // Lê o caractere a ser removido.
    scanf(" %c", &c);
    //printf("%c\n", c);
    
    int i, j = 0;
    // Percorre a string e copia para a própria string apenas os caracteres diferentes de c
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] != c) {
            //printf("%c\n", s[i]);
            t[j] = s[i];
            j++; // Incrementa o índice da nova string
        }
    }

    t[j] = '\0'; // Finaliza a nova string
    
    printf("%s\n", t);
    
    return 0;
}