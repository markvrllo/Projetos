#include <stdio.h>

int main(void) {
    char cpf[16];
    // Lê o CPF (a string terá exatamente 14 caracteres + o terminador nulo)
    if (scanf("%15s", cpf) != 1) {
        return 1;
    }
    
    // Extração dos dígitos do CPF conforme posições fixas:
    // Posições: 0,1,2  ; 4,5,6  ; 8,9,10  ; 12,13 (os demais são pontos e traço)
    int d1 = cpf[0] - '0';
    int d2 = cpf[1] - '0';
    int d3 = cpf[2] - '0';
    int d4 = cpf[4] - '0';
    int d5 = cpf[5] - '0';
    int d6 = cpf[6] - '0';
    int d7 = cpf[8] - '0';
    int d8 = cpf[9] - '0';
    int d9 = cpf[10] - '0';
    int d10_input = cpf[12] - '0';
    int d11_input = cpf[13] - '0';
    
    // Cálculo do primeiro dígito verificador (D10)
    int s1 = 10 * d1 + 9 * d2 + 8 * d3 + 7 * d4 + 6 * d5 +
             5 * d6 + 4 * d7 + 3 * d8 + 2 * d9;
    int resto1 = s1 % 11;
    int d10_calc = (resto1 < 2) ? 0 : 11 - resto1;
    
    // Cálculo do segundo dígito verificador (D11)
    int s2 = 11 * d1 + 10 * d2 + 9 * d3 + 8 * d4 + 7 * d5 +
             6 * d6 + 5 * d7 + 4 * d8 + 3 * d9 + 2 * d10_calc;
    int resto2 = s2 % 11;
    int d11_calc = (resto2 < 2) ? 0 : 11 - resto2;
    
    // Verifica se os dígitos calculados correspondem aos dígitos fornecidos
    if (d10_input == d10_calc && d11_input == d11_calc) {
        printf("CPF valido\n");
    } else {
        printf("CPF invalido\n");
    }
    
    return 0;
}