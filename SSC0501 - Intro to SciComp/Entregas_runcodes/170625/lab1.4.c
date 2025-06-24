#include "avaliador.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char nomeEntrada[256];
    FILE *entrada, *saida;
    int c;
    
    // Lê o nome do arquivo de entrada da entrada padrão
    if (scanf("%255s", nomeEntrada) != 1) {
        fprintf(stderr, "Erro na leitura do nome do arquivo.\n");
        return 1;
    }
    
    // Abre o arquivo de entrada para leitura
    entrada = fopen(nomeEntrada, "r");
    if (entrada == NULL) {
        fprintf(stderr, "Não foi possível abrir o arquivo %s para leitura.\n", nomeEntrada);
        return 1;
    }
    
    // Abre o arquivo de saída para escrita
    saida = fopen("notas_convertido.csv", "w");
    if (saida == NULL) {
        fclose(entrada);
        fprintf(stderr, "Não foi possível abrir o arquivo notas_convertido.csv para escrita.\n");
        return 1;
    }
    
    /*
      Para cada caractere lido:
        - Se for um ponto ('.'), escreve uma vírgula (',') na saída.
        - Se for uma vírgula (','), escreve um ponto e vírgula (';') na saída.
        - Caso contrário, escreve o próprio caractere.
    */
    while ((c = fgetc(entrada)) != EOF) {
        if (c == '.') {
            fputc(',', saida);
        } else if (c == ',') {
            fputc(';', saida);
        } else {
            fputc(c, saida);
        }
    }
    
    fclose(entrada);
    fclose(saida);
    
    // Notifica que o arquivo final foi gerado, conforme instruções do Run.codes
    arquivo_finalizado("notas_convertido.csv");
    return 0;
}