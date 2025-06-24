//Você deve implementar um programa que leia as informações de um carro, realize uma alteração em um dos campos e imprima as informações atualizadas.

//O carro possui as seguintes informações:

//Fabricante: uma string sem espaços (até 20 caracteres).
//Modelo: uma string sem espaços (até 20 caracteres).
////Ano: um número inteiro.
//Cor: uma string sem espaços (até 20 caracteres).
//Preço: um número real positivo.
//Após a leitura, será informada uma operação de atualização, composta por:

//Um número inteiro ID entre 1 e 5, indicando qual campo será alterado, conforme a tabela abaixo:

//ID	Campo
//1	Fabricante
//2	Modelo
//3	Ano
//4	Cor
//5	Preço
//O novo valor correspondente ao campo escolhido.

//Em seguida, o programa deve exibir as informações atualizadas do carro, uma por linha.

//Entrada
//A entrada consiste de 7 linhas, na seguinte ordem:

//Fabricante (string sem espaços, até 20 caracteres)

//Modelo (string sem espaços, até 20 caracteres)

//Ano (inteiro entre 1900 e 2100)

//Cor (string sem espaços, até 20 caracteres)

//Preço (real positivo, com até duas casas decimais)

//ID do campo a ser alterado (inteiro entre 1 e 5)

//Novo valor do campo (tipo depende do campo):

//String (sem espaços) se ID for 1, 2 ou 4.
//Inteiro se ID for 3.
//Real se ID for 5.
//Saída
//O programa deve imprimir as informações atualizadas do carro, uma por linha, na seguinte ordem:

//Fabricante
//Modelo
//Ano
//Cor
//Preço (com duas casas decimais)

// Realize a estrutura struct para armazenar as informações do carro e utilize ponteiros para acessar os dados.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Carro {
    char fabricante[21];
    char modelo[21];
    int ano;
    char cor[21];
    double preco;
};

void atualizarCarro(struct Carro *carro, int id, void *novoValor) {
    switch (id) {
        case 1:
            strncpy(carro->fabricante, (char *)novoValor, 20);
            carro->fabricante[20] = '\0'; // Garantir que a string esteja terminada
            break;
        case 2:
            strncpy(carro->modelo, (char *)novoValor, 20);
            carro->modelo[20] = '\0'; // Garantir que a string esteja terminada
            break;
        case 3:
            carro->ano = *(int *)novoValor;
            break;
        case 4:
            strncpy(carro->cor, (char *)novoValor, 20);
            carro->cor[20] = '\0'; // Garantir que a string esteja terminada
            break;
        case 5:
            carro->preco = *(double *)novoValor;
            break;
    }
}

int main() {
    struct Carro carro;
    int id;
    char novoValorString[21];
    int novoValorInt;
    double novoValorDouble;

    // Leitura das informações do carro
    scanf("%20s", carro.fabricante);
    scanf("%20s", carro.modelo);
    scanf("%d", &carro.ano);
    scanf("%20s", carro.cor);
    scanf("%lf", &carro.preco);

    // Leitura do ID e do novo valor
    scanf("%d", &id);
    
    if (id == 1 || id == 2 || id == 4) {
        scanf("%20s", novoValorString);
        atualizarCarro(&carro, id, novoValorString);
    } else if (id == 3) {
        scanf("%d", &novoValorInt);
        atualizarCarro(&carro, id, &novoValorInt);
    } else if (id == 5) {
        scanf("%lf", &novoValorDouble);
        atualizarCarro(&carro, id, &novoValorDouble);
    }

    // Impressão das informações atualizadas do carro
    printf("%s\n", carro.fabricante);
    printf("%s\n", carro.modelo);
    printf("%d\n", carro.ano);
    printf("%s\n", carro.cor);
    printf("%.2lf\n", carro.preco);

    return 0;
}