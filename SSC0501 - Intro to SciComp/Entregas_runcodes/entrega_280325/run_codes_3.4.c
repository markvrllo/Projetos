//O programa deve ler os três lados de um triângulo e verificar se os lados informados podem formar um triângulo válido. Para isso, a soma de dois lados deve ser maior que o terceiro. O programa deve exibir "Triangulo Valido" ou "Triangulo Invalido", dependendo do resultado

#include <stdio.h>

int vec_order_cresc(int vec[], int n) {
// Definiremos a função que irá iterar os itens do vetor, de forma a ordená-los em ordem crescente
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // O loop interno irá comparar os elementos adjacentes e trocá-los se necessário
        // O loop externo irá iterar o vetor, de forma a garantir que todos os elementos sejam verificados
        for (j = 0; j < n - i - 1; j++) {
            // Se o elemento atual for maior que o próximo, trocamos os dois
            if (vec[j] > vec[j+1]) {
                // Trocando os elementos
                temp = vec[j];

                vec[j] = vec[j+1];
                
                vec[j+1] = temp;
            }
        }
    }
}

int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    if (((num1 + num2) > num3) && ((num1 + num3) > num2) && ((num2 + num3) > num1)) {
        printf("Triangulo Valido");
    }
    else {
        printf("Triangulo Invalido");
    }
    return 0;
}