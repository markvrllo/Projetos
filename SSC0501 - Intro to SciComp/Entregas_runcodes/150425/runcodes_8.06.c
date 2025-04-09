// Em um jogo de damas, o tabuleiro é representado por uma matriz 8×8, onde as linhas são numeradas de 0 (topo) a 7 (base) e as colunas de 0 a 7. Cada célula da matriz contém um dos seguintes valores:

// 0: casa vazia;
// 1: peça branca;
// -1: peça preta.
// Importante:
// As peças pretas se movem “para frente”, isto é, no sentido de linhas decrescentes (de cima para baixo na matriz). Cada peça preta pode se mover apenas em uma das diagonais “para frente” (à esquerda ou à direita). As regras de movimentação são as seguintes:

// Movimento Simples:

// Uma peça preta pode mover para uma célula diagonal “para frente” se essa célula estiver vazia.
// Exemplo: se a peça está na posição (i, j), ela pode mover para (i-1, j-1) ou (i-1, j+1), desde que a respectiva célula contenha 0.
// Captura:

// Para capturar uma peça branca, a peça preta deve estar posicionada de forma que em uma das diagonais “para frente” (ou seja, em (i-1, j-1) ou (i-1, j+1)) haja uma peça branca (valor 1) e que a célula imediatamente seguinte nessa mesma direção, em (i-2, j-2) ou (i-2, j+2), esteja vazia (valor 0).
// Se a peça preta puder capturar por qualquer uma das duas diagonais, ela deve ser classificada na categoria “pode capturar”.
// Peça Bloqueada:

// Se uma peça preta não puder nem capturar nem realizar um movimento simples (por exemplo, porque está na primeira linha ou as células diagonais “para frente” não estão disponíveis ou estão ocupadas), então ela é considerada bloqueada.
// Formato da Saída
// A saída deve conter três linhas, seguindo a ordem e o formato abaixo, ordenadas de forma lexicográfica crescente (primeiro pelo índice da linha e, em caso de empate, pelo índice da coluna):

// Linha 1: Posições das peças pretas que podem capturar.
// Linha 2: Posições das peças pretas que podem se mover (movimento simples), mas não podem capturar.
// Linha 3: Posições das peças pretas que não podem se mover (peças bloqueadas).
// Cada posição deve ser apresentada no formato (i,j) (sem espaços entre (, i, ,, j e )) e as posições devem ser separadas por um único espaço. Se não houver nenhuma peça em uma categoria, imprima exatamente a palavra None (sem aspas) para aquela linha.

#include <stdio.h>

int main() {
    int tabuleiro[8][8];
    int i, j;
    int podeCapturar[8][8] = {0}; // Matriz para marcar peças que podem capturar
    int podeMover[8][8] = {0}; // Matriz para marcar peças que podem se mover
    int bloqueada[8][8] = {0}; // Matriz para marcar peças bloqueadas

    // Leitura do tabuleiro
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    // Verificação das peças pretas
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (tabuleiro[i][j] == -1) { // Se a peça é preta
                // Verifica se pode capturar
                if (i > 1) { // Para evitar acessar fora dos limites da matriz
                    if (j > 1 && tabuleiro[i-1][j-1] == 1 && tabuleiro[i-2][j-2] == 0) {
                        podeCapturar[i][j] = 1;
                    }
                    if (j < 6 && tabuleiro[i-1][j+1] == 1 && tabuleiro[i-2][j+2] == 0) {
                        podeCapturar[i][j] = 1;
                    }
                }

                // Verifica se pode mover
                if (i > 0) { // Para evitar acessar fora dos limites da matriz
                    if (j > 0 && tabuleiro[i-1][j-1] == 0) {
                        podeMover[i][j] = 1;
                    }
                    if (j < 7 && tabuleiro[i-1][j+1] == 0) {
                        podeMover[i][j] = 1;
                    }
                }

                // Se não puder capturar nem mover, é bloqueada
                if (!podeCapturar[i][j] && !podeMover[i][j]) {
                    bloqueada[i][j] = 1;
                }
            }
        }
    }

    // Impressão das posições
    int encontrouCaptura = 0, encontrouMovimento = 0, encontrouBloqueada = 0;
    // Linha 1: Posições das peças pretas que podem capturar
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (podeCapturar[i][j]) {
                printf("(%d,%d) ", i, j);
                encontrouCaptura = 1;
            }
        }
    }
    if (!encontrouCaptura) {
        printf("None\n");
    } else {
        printf("\n");
    }
}