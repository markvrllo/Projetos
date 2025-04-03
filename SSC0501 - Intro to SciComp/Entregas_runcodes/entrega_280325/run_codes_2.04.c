#include <stdio.h>

int main() {
    float distance, liters, cost;
    
    scanf("%f %f", &distance, &liters);

    cost = distance / liters;

    if (cost < 8) {
        printf("Venda o carro!");
    } 
    else if (8<=cost && cost<=12) {
        printf("Economico!");
    } 
    else if (cost>12) {
        printf("Super economico!");
    } 
    return 0;
}