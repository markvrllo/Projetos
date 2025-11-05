#include <stdio.h>
#include <stdlib.h>

// Função auxiliar para merge
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

// Função merge sort
void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Função de busca binária
int binary_search(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return 1;  // Encontrado
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return 0;  // Não encontrado
}

int main() {
    int N;
    scanf("%d", &N);

    int *V = (int*)malloc(N * sizeof(int));

    // Lê o vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    // Ordena o vetor usando merge sort
    merge_sort(V, 0, N - 1);

    int K;
    scanf("%d", &K);

    // Para cada consulta, faz busca binária
    for (int i = 0; i < K; i++) {
        int query;
        scanf("%d", &query);

        int result = binary_search(V, N, query);
        printf("%d\n", result);
    }

    free(V);
    return 0;
}