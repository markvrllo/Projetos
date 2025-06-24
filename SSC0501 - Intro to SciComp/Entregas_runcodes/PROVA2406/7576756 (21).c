#include <stdio.h>
#include <string.h>

int main(void) {
    int tabuleiro[8][8];
    char capturas[1000] = ""; // Armazena as posições que podem capturar.
    char movimentos[1000] = ""; // Armazena as posições que podem se mover simples.
    char bloqueadas[1000] = ""; // Armazena as posições das peças bloqueadas.
    char temp[20];
    
    // Leitura do tabuleiro (8 linhas × 8 colunas)
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            scanf("%d", &tabuleiro[i][j]);
        }
    }
    
    // Percorre o tabuleiro procurando peças pretas (valor -1)
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (tabuleiro[i][j] == -1) {
                int podeCapturar = 0;
                int podeMover = 0;
                // Verificação de captura:
                // Diagonal superior esquerda: (i-1, j-1) → peça branca e (i-2, j-2) vazio
                if(i - 1 >= 0 && j - 1 >= 0) {
                    if(tabuleiro[i - 1][j - 1] == 1) {
                        if(i - 2 >= 0 && j - 2 >= 0) {
                            if(tabuleiro[i - 2][j - 2] == 0)
                                podeCapturar = 1;
                        }
                    }
                }
                // Diagonal superior direita: (i-1, j+1) → peça branca e (i-2, j+2) vazio
                if(i - 1 >= 0 && j + 1 < 8) {
                    if(tabuleiro[i - 1][j + 1] == 1) {
                        if(i - 2 >= 0 && j + 2 < 8) {
                            if(tabuleiro[i - 2][j + 2] == 0)
                                podeCapturar = 1;
                        }
                    }
                }
                
                // Se não pode capturar, verifica se pode realizar movimento simples:
                if (!podeCapturar) {
                    // Movimento simples para a diagonal superior esquerda
                    if(i - 1 >= 0 && j - 1 >= 0 && tabuleiro[i - 1][j - 1] == 0)
                        podeMover = 1;
                    // Movimento simples para a diagonal superior direita
                    if(i - 1 >= 0 && j + 1 < 8 && tabuleiro[i - 1][j + 1] == 0)
                        podeMover = 1;
                }
                
                // Classificação da peça
                sprintf(temp, "(%d,%d)", i, j);
                if(podeCapturar) {
                    if(strlen(capturas) > 0)
                        strcat(capturas, " ");
                    strcat(capturas, temp);
                } else if(podeMover) {
                    if(strlen(movimentos) > 0)
                        strcat(movimentos, " ");
                    strcat(movimentos, temp);
                } else {
                    if(strlen(bloqueadas) > 0)
                        strcat(bloqueadas, " ");
                    strcat(bloqueadas, temp);
                }
            }
        }
    }
    
    // Impressão dos resultados conforme o formato solicitado.
    // Linha 1: Peças que podem capturar.
    printf("%s\n", (strlen(capturas) > 0) ? capturas : "None");
    // Linha 2: Peças que podem mover simples (mas não capturar).
    printf("%s\n", (strlen(movimentos) > 0) ? movimentos : "None");
    // Linha 3: Peças bloqueadas.
    printf("%s", (strlen(bloqueadas) > 0) ? bloqueadas : "None");
    
    return 0;
}