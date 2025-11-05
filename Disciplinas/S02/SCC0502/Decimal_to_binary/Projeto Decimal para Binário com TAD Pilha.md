<img src="https://r2cdn.perplexity.ai/pplx-full-logo-primary-dark%402x.png" style="height:64px;margin-right:32px"/>

# Projeto Decimal para Binário com TAD Pilha - Implementação Completa

Implementei com sucesso o algoritmo de **conversão decimal para binário** utilizando o TAD Pilha conforme especificado no documento PDF:[^1]

## 📁 Estrutura do Projeto

### Arquivos Incluídos:

1. **main.c** - Algoritmo principal de conversão
2. **Stack.h** - Interface do TAD Pilha (fornecida)
3. **Stack.c** - Implementação do TAD Pilha (fornecida)
4. **Makefile** - Sistema de compilação

## 🔄 Algoritmo Implementado

### **Estratégia de Resolução:**

O algoritmo segue exatamente a estratégia descrita no PDF:

```
1. A cada divisão por 2, empilha o resto
2. Quando acabar a sequência de divisões (quociente=0)
3. Desempilha e escreve todos os elementos
```


### **Exemplo Prático (132 → 10000100):**

```
132 ÷ 2 = 66, resto = 0  [empilha 0]
 66 ÷ 2 = 33, resto = 0  [empilha 0]  
 33 ÷ 2 = 16, resto = 1  [empilha 1]
 16 ÷ 2 =  8, resto = 0  [empilha 0]
  8 ÷ 2 =  4, resto = 0  [empilha 0]
  4 ÷ 2 =  2, resto = 0  [empilha 0]
  2 ÷ 2 =  1, resto = 0  [empilha 0]
  1 ÷ 2 =  0, resto = 1  [empilha 1]

Pilha: [0,0,1,0,0,0,0,1]
Desempilhando: 1,0,0,0,0,1,0,0 = 10000100
```


## 💻 Implementação do main.c

```c
// Algoritmo principal
while (numero > 0) {
    int resto = numero % 2;  // Calcula resto da divisão por 2
    push(pilha, resto);      // Empilha o resto
    numero = numero / 2;     // Divide o número por 2
}

// Desempilhar e imprimir resultado
while (!is_empty(pilha)) {
    if (pop(pilha, &digito)) {
        printf("%d", digito);
    }
}
```


## ✅ Características da Implementação

### **Tratamento de Casos Especiais:**

- **Número 0**: Tratado separadamente (saída "0")
- **Números positivos**: Algoritmo padrão de divisão sucessiva


### **Correções Aplicadas:**

- **Sem warnings**: `int ret = scanf(...)` + `(void)ret`
- **Gerenciamento de memória**: Criação e liberação adequada da pilha
- **Validação de erros**: Verificação de alocação e operações da pilha


### **Estrutura de Compilação:**

```makefile
# Comandos disponíveis:
make all    # Compila o projeto
make run    # Executa o programa
make clean  # Remove arquivos temporários
```


## 🧪 Validação Completa

Testei o algoritmo com múltiplos casos:

- **0** → **0** ✅
- **1** → **1** ✅
- **7** → **111** ✅
- **15** → **1111** ✅
- **32** → **100000** ✅
- **132** → **10000100** ✅ (exemplo do PDF)
- **255** → **11111111** ✅


## 🚀 Status: Pronto para Submissão

O projeto está **completamente implementado** seguindo:

- ✅ **Estrutura exata** especificada no PDF
- ✅ **Algoritmo correto** de divisão sucessiva por 2
- ✅ **TAD Pilha** utilizado adequadamente
- ✅ **Zero warnings** de compilação
- ✅ **Gerenciamento adequado** de memória
- ✅ **Arquivo ZIP** com todos os componentes necessários

O algoritmo está pronto para submissão no **Run.Codes** conforme todas as instruções fornecidas no documento!
<span style="display:none">[^2][^3][^4][^5][^6]</span>

<div align="center">⁂</div>

[^1]: Decimal_para_Binario.pdf

[^2]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/a546f87a5cf4f445cfd7bc8d30ecae83/4bb37b39-18a2-4a51-9801-fda74b140119/3f181a86.h

[^3]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/a546f87a5cf4f445cfd7bc8d30ecae83/4f996edc-802c-4ada-a02f-74c6e242c312/52ed1330.c

[^4]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/a546f87a5cf4f445cfd7bc8d30ecae83/57fa5e5c-e27a-4cca-b565-160dbed9ecf9/a0cb4656.c

[^5]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/a546f87a5cf4f445cfd7bc8d30ecae83/31cfadd6-e35b-4b11-8dd3-62de7ae963d5/76ed074a

[^6]: https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/a546f87a5cf4f445cfd7bc8d30ecae83/5d1abdf8-a51e-4161-bbdc-7e1ccad48ea1/c68dcf02.zip

