# Criar o arquivo main.c com o algoritmo de conversão decimal para binário
main_decimal_binario_content = """#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main() {
    int numero;
    
    // Ler o número decimal
    int ret = scanf("%d", &numero);
    (void)ret; // Suprime warning unused variable
    
    // Criar a pilha
    Stack *pilha = create_stack();
    if (pilha == NULL) {
        return 1;
    }
    
    // Caso especial: número 0
    if (numero == 0) {
        printf("0\\n");
        free_stack(&pilha);
        return 0;
    }
    
    // Algoritmo de conversão decimal para binário
    while (numero > 0) {
        int resto = numero % 2;  // Calcula o resto da divisão por 2
        push(pilha, resto);      // Empilha o resto
        numero = numero / 2;     // Divide o número por 2
    }
    
    // Desempilhar e imprimir o resultado
    int digito;
    while (!is_empty(pilha)) {
        if (pop(pilha, &digito)) {
            printf("%d", digito);
        }
    }
    printf("\\n");
    
    // Liberar a memória da pilha
    free_stack(&pilha);
    
    return 0;
}
"""

# Criar o arquivo main.c
with open("main.c", "w") as f:
    f.write(main_decimal_binario_content)

print("Arquivo main.c para conversão decimal-binário criado com sucesso!")