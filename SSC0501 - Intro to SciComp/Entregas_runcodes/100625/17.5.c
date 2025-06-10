#include <stdio.h>

#define MAX 1001

int main() {
    int n_lucas, n_sofia;
    int lucas[MAX] = {0}, sofia[MAX] = {0};
    int i, num, count = 0;

    scanf("%d %d", &n_lucas, &n_sofia);

    // Figurinhas de Lucas
    for (i = 0; i < n_lucas; i++) {
        scanf("%d", &num);
        lucas[num] = 1;
    }

    // Figurinhas de Sofia
    for (i = 0; i < n_sofia; i++) {
        scanf("%d", &num);
        sofia[num] = 1;
    }

    // Conta quantas Lucas pode fornecer (tem e Sofia não tem)
    for (i = 1; i <= 1000; i++) {
        if (lucas[i] && !sofia[i]) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}