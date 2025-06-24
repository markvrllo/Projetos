#include <stdio.h>

// Ordena um vetor de inteiros em ordem crescente
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
    int Exp1[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &Exp1[i]);
    }

    vec_order_cresc(Exp1, 10);

    printf("%d", Exp1[0]+Exp1[9]);

    return 0;
}