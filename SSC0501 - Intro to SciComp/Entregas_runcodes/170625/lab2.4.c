#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[51];
    char especie[31];
    int idade;
    char servico[31];
    char data[15];
    char hora[10];
} Agendamento;

void imprimir_agendamento(const Agendamento *a) {
    printf("Nome: %s\n", a->nome);
    printf("Especie: %s\n", a->especie);
    printf("Idade: %d anos\n", a->idade);
    printf("Servico: %s\n", a->servico);
    printf("Data agendada: %s\n", a->data);
    printf("Hora agendada: %s\n", a->hora);
}

int main(void) {
    char nomeArquivo[101];
    char nomeProcurado[51];
    FILE *fp;

    // Leitura do nome do arquivo (sem espaços)
    if (scanf("%100s", nomeArquivo) != 1) {
        return 1;
    }
    // Leitura do nome do pet (pode conter espaços)
    scanf(" %[^\n]", nomeProcurado);
    
    // Remoção de '\r' e '\n' no final da string do nome procurado
    int len = strlen(nomeProcurado);
    while (len > 0 && (nomeProcurado[len-1] == '\n' || nomeProcurado[len-1] == '\r')) {
        nomeProcurado[len-1] = '\0';
        len--;
    }

    fp = fopen(nomeArquivo, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    Agendamento ag;
    int found = 0;
    // Processa o arquivo enquanto houver linhas com 6 campos lidos corretamente
    while (fscanf(fp, "%50[^;];%30[^;];%d;%30[^;];%14[^;];%9[^\n]\n", 
                  ag.nome, ag.especie, &ag.idade, ag.servico, ag.data, ag.hora) == 6) {
        // Compara o nome do pet lido com o nome procurado (comparação exata)
        if (strcmp(ag.nome, nomeProcurado) == 0) {
            imprimir_agendamento(&ag);
            found = 1;
        }
    }

    if (!found) {
        printf("Nenhum agendamento encontrado para o pet informado.\n");
    }

    fclose(fp);
    return 0;
}