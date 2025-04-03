//O programa deve dois números inteiros e uma operação matemática (+, -, *, /). Em seguida, deve exibir o resultado da operação escolhida. Caso o usuário escolha uma operação inválida, deve exibir a mensagem de erro. As mensagens de erro são: "Erro: divisao por zero" - Quando ocorre uma divisão por zero "Erro: operacao invalida" - Quando um operador inválido é escolhido (que não seja +, -, * ou / ). Utilize printf("%.2f) para limitar apenas 2 casas decimais quando for uma operação de / . As demais operações são inteiras e não precisam exibir casas decimais.

#include <stdio.h>

int main() {
    // Definindo termos de entrada da calculadora
    int num1, num2;
    char operation;

    scanf("%d %d %c", &num1, &num2, &operation);

    switch (operation) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisao por zero");
            } else {
                printf("%.2f", (float)num1 / num2);
            }
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        default:
            printf("Erro: operacao invalida");
            
    }

    return 0;
}