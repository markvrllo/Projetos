// Você receberá como entrada uma matriz de inteiros com 5 linhas e 5 colunas. Sua tarefa é encontrar o maior e o menor valor da matriz e imprimir esses valores juntamente com os seus respectivos índices (linha e coluna).

// Considere que os índices das linhas e colunas começam em 0.

// Entrada
// A entrada consiste em 5 linhas, cada uma contendo 5 inteiros separados por espaço, representando os elementos da matriz.

// Cada inteiro da matriz está no intervalo [-10⁴, 10⁴].
// Saída
// Imprima duas linhas:

// A primeira linha deve conter o maior valor da matriz seguido de sua posição (linha e coluna).
// A segunda linha deve conter o menor valor da matriz seguido de sua posição (linha e coluna).
// Se houver múltiplas ocorrências do maior ou do menor valor, imprima a primeira ocorrência (em ordem de leitura da matriz, da esquerda para a direita e de cima para baixo).

#include <stdio.h>

int main() {
    int matriz[5][5];
    int maior, menor;
    int pos_maior[2], pos_menor[2]; // Para armazenar as posições (linha e coluna) do maior e menor valor

    // Leitura da matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa maior e menor com o primeiro elemento da matriz
    maior = menor = matriz[0][0];
    pos_maior[0] = pos_menor[0] = 0;
    pos_maior[1] = pos_menor[1] = 0;

    // Percorre a matriz para encontrar o maior e o menor valor e suas posições
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                pos_maior[0] = i;
                pos_maior[1] = j;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                pos_menor[0] = i;
                pos_menor[1] = j;
            }
        }
    }

    // Impressão do maior valor e sua posição
    printf("%d %d %d\n", maior, pos_maior[0], pos_maior[1]);
    
    // Impressão do menor valor e sua posição
    printf("%d %d %d\n", menor, pos_menor[0], pos_menor[1]);

    return 0;
}