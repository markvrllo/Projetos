#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define EPS 1e-9

// Função para calcular o máximo divisor comum (MDC) de dois inteiros
int gcd(int a, int b) {
    if (b == 0)
        return abs(a);
    return gcd(b, a % b);
}

// Converte um número double em uma fração aproximada. O maxDenom define o maior denominador permitido e epsilon estipula a tolerância.
void doubleToFraction(double value, int maxDenom, int *num, int *den) {
    double epsilon = 1e-9;
    int bestNum = 0, bestDen = 1;
    double bestError = 1e9;
    
    for (int d = 1; d <= maxDenom; d++) {
        int n = (int)round(value * d);
        double error = fabs(value - ((double)n / d));
        if (error < bestError) {
            bestError = error;
            bestNum = n;
            bestDen = d;
            if (error < epsilon)
                break;
        }
    }
    
    // Simplifica a fração utilizando o MDC
    int divisor = gcd(bestNum, bestDen);
    bestNum /= divisor;
    bestDen /= divisor;
    *num = bestNum;
    *den = bestDen;
}

int main() {
    // Configura o locale para que os acentos sejam exibidos corretamente
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    printf("Digite o número de incógnitas: ");
    scanf("%d", &n);
    
    // Alocação dinâmica da matriz aumentada (n x (n+1))
    double **M = (double **)malloc(n * sizeof(double *));
    if (M == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        M[i] = (double *)malloc((n + 1) * sizeof(double));
        if (M[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
    }
    
    // Leitura dos coeficientes e dos termos independentes de cada equação.
    // Cada linha representa uma equação: os n primeiros elementos são os coeficientes e o último é o termo independente.
    printf("\nDigite os coeficientes de cada equação (linha a linha) e, ao final, o termo independente:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEquação %d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            printf("Coeficiente a[%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &M[i][j]);
        }
        printf("Termo independente: ");
        scanf("%lf", &M[i][n]);
    }
    
    // === Eliminação Gaussiana com pivoteamento parcial e determinação do posto ===
    int rank = 0;
    int row = 0, col = 0;
    while (row < n && col < n) {
        // Procura o pivô (elemento de maior valor absoluto) na coluna atual, a partir da linha "row"
        int pivot = row;
        for (int i = row; i < n; i++) {
            if (fabs(M[i][col]) > fabs(M[pivot][col])) {
                pivot = i;
            }
        }
        if (fabs(M[pivot][col]) < EPS) {
            // Se não há pivô nesta coluna, passa para a próxima
            col++;
            continue;
        }
        // Troca a linha atual com a linha do pivô, se necessário
        if (pivot != row) {
            double *temp = M[row];
            M[row] = M[pivot];
            M[pivot] = temp;
        }
        
        // Eliminação dos coeficientes abaixo da linha do pivô
        for (int i = row + 1; i < n; i++) {
            double fator = M[i][col] / M[row][col];
            for (int j = col; j <= n; j++) {
                M[i][j] -= fator * M[row][j];
            }
        }
        row++;
        rank++;
        col++;
    }
    
    // Verifica se o sistema é inconsistente:
    // Se alguma linha possui todos os coeficientes iguais a zero e o termo independente diferente de zero.
    int inconsistente = 0;
    for (int i = rank; i < n; i++) {
        int allZero = 1;
        for (int j = 0; j < n; j++) {
            if (fabs(M[i][j]) > EPS) {
                allZero = 0;
                break;
            }
        }
        if (allZero && fabs(M[i][n]) > EPS) {
            inconsistente = 1;
            break;
        }
    }
    
    // === Classificação do sistema e exibição dos resultados ===
    if (inconsistente) {
        printf("\nSistema impossível (inconsistente).\n");
    } else if (rank < n) {
        printf("\nSistema indeterminado (infinitas soluções).\n");
        int numParametrosLivres = n - rank;
        printf("Número de parâmetros livres: %d\n", numParametrosLivres);
        
        // Interpretação geométrica do conjunto solução:
        // Para um sistema com n incógnitas, o conjunto solução é um subespaço afim de dimensão igual a (n - rank).
        if (numParametrosLivres == 1)
            printf("O conjunto solução é representado por uma reta no espaço.\n");
        else if (numParametrosLivres == 2)
            printf("O conjunto solução é representado por um plano no espaço.\n");
        else
            printf("O conjunto solução é representado por um subespaço de dimensão %d.\n", numParametrosLivres);
    } else {
        // Se o sistema é determinado (rank igual a n), temos solução única.
        // Realiza a substituição retroativa para encontrar as incógnitas.
        double *x = (double *)malloc(n * sizeof(double));
        if (x == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
        for (int i = n - 1; i >= 0; i--) {
            x[i] = M[i][n];
            for (int j = i + 1; j < n; j++) {
                x[i] -= M[i][j] * x[j];
            }
            x[i] /= M[i][i];
        }
        printf("\nSistema determinado (solução única) – o conjunto solução é um ponto.\n");
        printf("Solução do sistema em frações:\n");
        for (int i = 0; i < n; i++) {
            int num, den;
            doubleToFraction(x[i], 1000, &num, &den);
            if (den == 1)
                printf("x%d = %d\n", i + 1, num);
            else
                printf("x%d = %d/%d\n", i + 1, num, den);
        }
        free(x);
    }
    
    // Liberação da memória alocada
    for (int i = 0; i < n; i++) {
        free(M[i]);
    }
    free(M);
    
    // Aguarda o usuário pressionar uma tecla antes de fechar (próprio do Windows)
    system("pause");
    
    return 0;
}