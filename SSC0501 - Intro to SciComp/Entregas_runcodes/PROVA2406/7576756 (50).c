#include <stdio.h>

char cpf[12], cpf2[15];

//le cpf sem pontos ou traços
int main() {

    // Lê o CPF sem pontos ou traços
    scanf("%s", cpf);
    
    // Formata o CPF com pontos e traço
    snprintf(cpf2, sizeof(cpf2), "%c%c%c.%c%c%c.%c%c%c-%c%c", 
             cpf[0], cpf[1], cpf[2], 
             cpf[3], cpf[4], cpf[5], 
             cpf[6], cpf[7], cpf[8], 
             cpf[9], cpf[10]);
    
    printf("%s\n", cpf2);
    
    return 0;
}