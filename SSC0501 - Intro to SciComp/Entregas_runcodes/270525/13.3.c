//Problema: O Carro Mais Barato
//Você foi contratado por uma revendedora de veículos para desenvolver um programa que ajude a identificar o carro mais barato dentre uma lista de carros disponíveis para venda. Cada carro é descrito por cinco informações: fabricante, modelo, ano, cor e preço.

//Seu programa deverá ler os dados de N carros e informar, ao final, o modelo do carro mais barato.

//Entrada
//A entrada consiste de:
//Um número inteiro N (1 ≤ N ≤ 100), representando a quantidade de carros.

//Em seguida, N linhas contendo as informações de cada carro, uma por linha, no seguinte formato:
//fabricante modelo ano cor preco
//Onde:
//fabricante: uma string sem espaços (máximo 20 caracteres).
//modelo: uma string sem espaços (máximo 20 caracteres).
//ano: um número inteiro entre 1900 e 2100.
//cor: uma string sem espaços (máximo 20 caracteres).
//preco: um número real positivo com no máximo duas casas decimais.

//Saída
//Seu programa deve imprimir uma única linha contendo o modelo do carro mais barato. Se houver mais de um carro com o menor preço, imprima o modelo do primeiro deles que apareceu na entrada.

//Exemplo
//Entrada
//3
//Fiat Uno 2010 branco 15000.00
//Chevrolet Onix 2020 prata 50000.00
//Ford Ka 2015 preto 13000.00

// Saída
//Ford Ka

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

int main() {
    int n;
    scanf("%d", &n);
    
    struct Carro carros[n];
    double menorPreco = __DBL_MAX__;
    int indiceMenorPreco = -1;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %s %lf", carros[i].fabricante, carros[i].modelo, &carros[i].ano, carros[i].cor, &carros[i].preco);
        
        if (carros[i].preco < menorPreco) {
            menorPreco = carros[i].preco;
            indiceMenorPreco = i;
        }
    }

    printf("%s\n", carros[indiceMenorPreco].modelo);
    
    return 0;
}




