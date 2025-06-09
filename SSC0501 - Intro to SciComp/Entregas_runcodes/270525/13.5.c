//Durante uma missão de exploração em Marte, a sonda OrtoBot precisa montar uma estrutura de painéis solares. Para que ela funcione corretamente, os suportes dos painéis devem ser posicionados perpendicularmente entre si. A central de comando na Terra envia dois vetores que representam a direção de duas barras da estrutura. A tarefa do sistema de navegação da OrtoBot é calcular automaticamente um vetor ortogonal a esses dois vetores (ou seja, o produto vetorial).

//Como programador responsável pelo sistema da sonda, sua missão é implementar esse cálculo. Para isso, você deve utilizar structs para representar vetores tridimensionais.

//Entrada
//A entrada consiste em duas linhas, cada uma contendo três números inteiros, representando as coordenadas dos vetores no espaço tridimensional Exp. Cada número representa a coordenada x,y,z do vetor, nesta ordem.

//-1000 <= x,y,z <= 1000
//Os vetores fornecidos não são paralelos.

//Saída
//Imprima uma única linha com três números inteiros separados por espaço, representando as coordenadas x,y,z do vetor ortogonal resultante do produto vetorial entre os dois vetores de entrada.

//Requisitos
//Sua solução deve obrigatoriamente utilizar uma struct chamada Vetor, com três campos inteiros x, y e z, representando um vetor tridimensional. O uso de funções auxiliares para operar sobre vetores também é recomendado.

//Exemplo
//Entrada
//1 2 3
//4 5 6
//Saída
//-3 6 -3

#include <stdio.h>
#include <stdlib.h>
struct Vetor {
    int x;
    int y;
    int z;
};

struct Vetor produtoVetorial(struct Vetor a, struct Vetor b) {
    struct Vetor resultado;
    resultado.x = a.y * b.z - a.z * b.y;
    resultado.y = a.z * b.x - a.x * b.z;
    resultado.z = a.x * b.y - a.y * b.x;
    return resultado;
}

int main() {
    struct Vetor v1, v2, resultado;

    // Leitura dos vetores
    scanf("%d %d %d", &v1.x, &v1.y, &v1.z);
    scanf("%d %d %d", &v2.x, &v2.y, &v2.z);

    // Cálculo do produto vetorial
    resultado = produtoVetorial(v1, v2);

    // Impressão do resultado
    printf("%d %d %d\n", resultado.x, resultado.y, resultado.z);

    return 0;
}

