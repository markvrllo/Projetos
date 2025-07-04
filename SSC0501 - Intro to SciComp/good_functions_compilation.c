// Ordena um vetor de inteiros em ordem crescente
int vec_order_cresc(int vec[], int n) {
    // Definiremos a função que irá iterar os itens do vetor, de forma a ordená-los em ordem crescente
        int i, j, temp;
        for (i = 0; i < n - 1; i++) {
            // O loop interno irá comparar os elementos adjacentes e trocá-los se necessário
            // O loop externo irá iterar o vetor, de forma a garantir que todos os elementos sejam verificados
            for (j = 0; j < n - i - 1; j++) {
                // Se o elemento atual for maior que o próximo, trocamos os dois
                if (vec[j] > vec[j+1]) {
                    // Trocando os elementos
                    temp = vec[j];
    
                    vec[j] = vec[j+1];
                    
                    vec[j+1] = temp;    
                }
            }
        }
    }

// Contador de palavras em uma string
int word_count() {
    char str[100000];
    
    // Leitura da linha incluindo espaços. fgets lê até \n ou até o tamanho máximo.
    fgets(str, sizeof(str), stdin);

    int i = 0, count = 0;
    int inWord = 0; // flag para indicar se estamos dentro de uma palavra

    // Percorre todos os caracteres da string
    while (str[i] != '\0') {
        // Se o caractere não é espaço e não é caractere de nova linha
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\r') {
            // Se não estávamos dentro de uma palavra, encontramos o início de uma
            if (!inWord) {
                count++;   // Incrementa o contador de palavras
                inWord = 1; // Marca que agora está dentro de uma palavra
            }
        } else {
            // Se o caractere é espaço (ou nova linha), sinalizamos que não estamos dentro de uma palavra
            inWord = 0;
        }
        i++;
    }
    printf("%d", count);
    
    return 0;
}