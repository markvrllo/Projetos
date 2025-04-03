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
    // Vamos definir o vetor e o tamanho de dito vetor, para que possamos estabelecer o limite de vvecedura do FOR que usaremos
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    // Atribuo aqui os números a um vetor, e calculamos seu tamanho
    int vec[] = {num1, num2, num3};
    int n = sizeof(vec)/sizeof(vec[0]);

    if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("Erro: os numeros devem ser distintos.");
    }
    else {
        vec_order_cresc(vec, n);
            
        for (int i=0; i < n; i++) {
            printf("%d ", vec[i]);
        }
    }
    return 0;
}