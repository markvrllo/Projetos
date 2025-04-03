//Dada uma sequência de notas de uma prova, escreva um programa que processe os dados conforme as seguintes regras:
// A entrada consiste em uma sequência de números reais representando as notas dos alunos.
// A leitura das notas deve continuar até que um valor negativo seja digitado (esse valor não deve ser considerado).
// O programa deve calcular e exibir:
// O número de alunos com nota baixa (nota < 5.0).
// O número de alunos com nota alta (nota >= 5.0).
// A média geral das notas.
// A porcentagem dos alunos que obtiveram nota maior ou igual a 5.



#include <stdio.h>

int main() {
    float num, score, mean, n_class, good_class_percentage;
    int bad_pupil, good_pupil;
    
    bad_pupil = 0;
    good_pupil = 0;
    
    while (scanf("%f", &num) && num >= 0) {
        n_class++;
            
        if (num < 5) {
            bad_pupil++;
        }
        if (num >= 5) {
            good_pupil++;
        }
        mean +=num;
    }

    good_class_percentage = good_pupil/n_class;
    
    printf("%d\n%d\n%.2f\n%.1f%%", bad_pupil, 
                            good_pupil,
                            mean/n_class,
                            good_class_percentage*100);
    return 0;
    }