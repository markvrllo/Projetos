#include <stdio.h>
#include <string.h>

typedef struct Agendamento {
    char nome[51], especie[31], servico[31], data[15], hora[10];
    int idade;
} Agendamento;

int search(char arqName[], char petName[]) {

    int out = 0;

    FILE *arq = fopen(arqName, "r");

    if (!arq) return 0;

    Agendamento agendamento;
    while (fscanf(arq, "%50[^;];%30[^;];%d;%30[^;];%14[^;];%9[^\n]\n", agendamento.nome, agendamento.especie, &agendamento.idade, agendamento.servico, agendamento.data, agendamento.hora) == 6) {
                
        if (strcmp(petName, agendamento.nome) == 0) {
            out++;
            printf("Nome: %s\nEspecie: %s\nIdade: %d anos\nServiço: %s\nData agendada: %s\nHora agendada: %s\n", agendamento.nome, agendamento.especie, agendamento.idade, agendamento.servico, agendamento.data, agendamento.hora);
        }
    }

    fclose(arq);

    return out;
}

int main() {

    char arqName[102] = {'\0'};
    fgets(arqName, sizeof(arqName), stdin);
    arqName[strcspn(arqName, "\r\n")] = '\0';

    char petName[52] = {'\0'};
    fgets(petName, sizeof(petName), stdin);
    petName[strcspn(petName, "\r\n")] = '\0';

    if (!search(arqName, petName)) printf("Nenhum agendamento encontrado para o pet informado.\n");
    
    return 0;
}