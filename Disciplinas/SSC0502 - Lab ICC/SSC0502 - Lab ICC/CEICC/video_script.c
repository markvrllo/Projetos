#include <stdio.h>
#include <locale.h>

// Função que calcula e exibe os ingredientes proporcionais
void calcular_receita(float ovos_usuario) {
    // Receita base para 4 ovos
    float ovos_base = 4;

    // Ingredientes da receita original (base)
    float oleo_base = 0.5;        // xícara
    float cenoura_base = 3;       // unidades médias
    float acucar_base = 2;        // xícaras
    float farinha_base = 2.5;     // xícaras
    float fermento_base = 1;      // colher de sopa

    // Calcula a proporção
    float proporcao = ovos_usuario / ovos_base;

    // Exibe os ingredientes proporcionais
    printf("\nReceita proporcional para %.1f ovo(s):\n", ovos_usuario);
    printf("- Óleo: %.2f xícara(s)\n", oleo_base * proporcao);
    printf("- Cenoura média: %.2f unidade(s)\n", cenoura_base * proporcao);
    printf("- Açúcar: %.2f xícara(s)\n", acucar_base * proporcao);
    printf("- Farinha de trigo: %.2f xícara(s)\n", farinha_base * proporcao);
    printf("- Fermento em pó: %.2f colher(es) de sopa\n", fermento_base * proporcao);
}

int main() {
    float ovos;

    setlocale(LC_ALL, "pt_BR.UTF-8");
    // Configuração do ambiente para aceitar caracteres especiais
    // e acentuação em português

    // Entrada do usuário
    printf("Digite a quantidade de ovos que você tem: ");
    scanf("%f", &ovos);

    // Chamada da função que calcula a receita proporcional
    calcular_receita(ovos);

    return 0;
}

