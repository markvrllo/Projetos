#include <stdio.h>

// Função auxiliar para verificar se um número é par
int eh_par(int x) {
    // Retorna 1 se x é par, ou 0 caso contrário.
    return (x % 2 == 0);
}

// Função para contar números pares em um array
int contar_pares(int v[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (eh_par(v[i]))
            count++;
    }
    return count;
}

// Função para contar números ímpares em um array
int contar_impares(int v[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!eh_par(v[i]))
            count++;
    }
    return count;
}

// Função para encontrar o maior valor em um array
int encontrar_maior(int v[], int n) {
    int maior = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maior)
            maior = v[i];
    }
    return maior;
}

// Função para encontrar o menor valor em um array
int encontrar_menor(int v[], int n) {
    int menor = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < menor)
            menor = v[i];
    }
    return menor;
}

// Função para calcular a média dos elementos em um array
float calcular_media(int v[], int n) {
    long long soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    return (float)soma / n;
}

// Função para contar quantos elementos estão acima da média
int contar_acima_media(int v[], int n, float media) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > media)
            count++;
    }
    return count;
}

int main() {
    int n;
    // Leitura do número de elementos (N)
    scanf("%d", &n);
    
    int v[1000]; // Considerando N <= 1000
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    int pares     = contar_pares(v, n);
    int impares   = contar_impares(v, n);
    int maior     = encontrar_maior(v, n);
    int menor     = encontrar_menor(v, n);
    float media   = calcular_media(v, n);
    int acima     = contar_acima_media(v, n, media);
    
    // Impressão dos resultados conforme o formato solicitado
    printf("Pares: %d | Impares: %d\n", pares, impares);
    printf("Maior: %d | Menor: %d\n", maior, menor);
    printf("Media: %.2f\n", media);
    printf("Acima da media: %d\n", acima);
    
    return 0;
}