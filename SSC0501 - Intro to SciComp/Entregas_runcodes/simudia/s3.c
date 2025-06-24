#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[105];   /* string original  (até 100 letras + espaços + \r\n + \0) */
    char limpa[105]; /* string sem espaços                                  */

    /* Lê a linha inteira (pode conter espaços) */
    if (!fgets(s, sizeof(s), stdin))
        return 0;

    /* Remove '\n' e '\r' que possam ter vindo do fim da linha */
    size_t n = strlen(s);
    while (n && (s[n-1] == '\n' || s[n-1] == '\r'))
        s[--n] = '\0';

    /* Copia apenas os caracteres diferentes de espaço */
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ')
            limpa[j++] = s[i];
    }
    limpa[j] = '\0';

    /* Teste de palíndromo */
    int i = 0, k = j - 1, pal = 1;
    while (i < k) {
        if (limpa[i] != limpa[k]) {
            pal = 0;
            break;
        }
        i++;
        k--;
    }

    printf(pal ? "SIM\n" : "NAO\n");
    return 0;
}