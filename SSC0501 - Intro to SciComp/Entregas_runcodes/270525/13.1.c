// Você deve implementar um programa que leia as informações de um carro e, em seguida, imprima as informações do carro, conforme o exemplo abaixo:

// A entrada consiste em 5 linhas, cada uma contendo uma informação do carro:

//Uma string fabricante — o nome do fabricante do carro. (1 ≤ |fabricante| ≤ 20, sem espaços)
//Uma string modelo — o nome do modelo do carro. (1 ≤ |modelo| ≤ 20, sem espaços)
//Um inteiro ano — o ano de fabricação do carro. (1950 ≤ ano ≤ 2050)
//Uma string cor — a cor do carro. (1 ≤ |cor| ≤ 20, sem espaços)
//Um número real preco — o preço do carro. (0.00 ≤ preco ≤ 1000000.00), com até duas casas decimais na entrada.

// Imprima exatamente 5 linhas, cada uma contendo uma informação do carro, conforme o exemplo abaixo:

//Fabricante: <fabricante>
//Modelo: <modelo>
//Ano: <ano>
//Cor: <cor>
//Preço: <preco com 2 casas decimais>

// Realize a estrutura struct para armazenar as informações do carro e utilize ponteiros para acessar os dados.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Carro {
    char fabricante[21];
    char modelo[21];
    int ano;
    char cor[21];
    double preco;
};

int main() {
    struct Carro *carro = malloc(sizeof(struct Carro));
    
    // Leitura das informações do carro
    scanf("%20s", carro->fabricante);
    scanf("%20s", carro->modelo);
    scanf("%d", &carro->ano);
    scanf("%20s", carro->cor);
    scanf("%lf", &carro->preco);
    
    // Impressão das informações do carro
    printf("Fabricante: %s\n", carro->fabricante);
    printf("Modelo: %s\n", carro->modelo);
    printf("Ano: %d\n", carro->ano);
    printf("Cor: %s\n", carro->cor);
    printf("Preço: %.2lf\n", carro->preco);
    
    free(carro); // Libera a memória alocada
    return 0;
}