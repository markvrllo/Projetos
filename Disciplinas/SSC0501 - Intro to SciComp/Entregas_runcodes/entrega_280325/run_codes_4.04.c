//Você deve escrever um programa que, dado um ano inicial e um ano final, imprima todos os anos bissextos (calendário gregoriano) no intervalo, incluindo o ano inicial e o ano final, se for o caso.

#include <stdio.h>

int leap_year(int year) {
    // Verifica se o ano é bissexto
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Ano bissexto
    } else {
        return 0; // Não é bissexto
    }
}

int main() {
    int init_year, fin_year, year;

    scanf("%d", &init_year);
    scanf("%d", &fin_year);

    year = init_year;
    
    while (year <= fin_year) {
        if (leap_year(year) == 1) {
            printf("%d\n", year);
        }
        year++;
    }
    
    return 0;
}