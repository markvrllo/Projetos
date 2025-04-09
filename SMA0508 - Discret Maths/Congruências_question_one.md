# Questões Matemática Discreta

Nome: Marcos Vinicius Reballo
N° USP: 7576746

## Questão 1: Congruências

Calcule os inversos de 2, 3 e 6 módulo 6 · k + 1.

Vamos resolver o problema passo a passo, explicando cada conceito de forma simples.

### O que é "inverso" módulo \(M\)?

Quando falamos do inverso multiplicativo de um número \(a\) em módulo \(M\) (nesse caso, \(M = 6k+1\)), queremos encontrar um número \(b\) tal que, ao multiplicarmos \(a\) por \(b\), o resultado dê resto 1 quando dividido por \(M\). Em outras palavras, isso significa que:

\[
a \times b \equiv 1 \quad (\text{módulo } 6k+1)
\]

Ou seja, \(a \times b - 1\) deve ser um múltiplo de \(6k+1\).

### Inverso de 2 módulo \(\mathbf{6k+1}\)

Queremos achar um número \(b\) que satisfaça:

\[
2 \times b = 1 + n\,(6k+1)
\]

para algum número inteiro \(n\). O truque é escolher um valor adequado para \(n\) que torne o lado direito divisível por 2.

- **Passo 1:** Escolhemos \(n = 1\). Então:
  \[
  2 \times b = 1 + (6k+1) = 6k+2
  \]
- **Passo 2:** Dividimos ambos os lados por 2:
  \[
  b = \frac{6k+2}{2} = 3k+1
  \]

**Verificação:**  
Multiplicando, temos:
\[
2 \times (3k+1) = 6k+2
\]
E note que \(6k+2\) pode ser escrito como:
\[
6k+2 = (6k+1) + 1,
\]
o que significa que o resto da divisão por \(6k+1\) é 1.

Portanto, o inverso de 2 módulo \(6k+1\) é **\(3k+1\)**.

---

### Inverso de 3 módulo \(\mathbf{6k+1}\)

Agora, procuramos um número \(b\) que satisfaça:

\[
3 \times b = 1 + n\,(6k+1)
\]

- **Passo 1:** Se tentarmos \(n = 1\), teríamos:
  \[
  3b = 6k+2,
  \]
  mas \(6k+2\) nem sempre é divisível por 3.
- **Passo 2:** Vamos tentar \(n = 2\). Então:
  \[
  3b = 1 + 2(6k+1) = 1 + 12k + 2 = 12k + 3
  \]
- **Passo 3:** Dividindo ambos os lados por 3:
  \[
  b = \frac{12k+3}{3} = 4k+1
  \]

**Verificação:**  
Multiplicamos:
\[
3 \times (4k+1) = 12k+3.
\]
Note que se subtrairmos \(2\) vezes o módulo \(6k+1\) (ou seja, \(2 \times (6k+1) = 12k+2\)) do resultado, obtemos:
\[
12k+3 - (12k+2) = 1.
\]

Portanto, o inverso de 3 módulo \(6k+1\) é **\(4k+1\)**.

---

### Inverso de 6 módulo \(\mathbf{6k+1}\)

Por fim, queremos um número \(b\) tal que:

\[
6 \times b = 1 + n\,(6k+1)
\]

Vamos testar valores inteiros para \(n\):

- Se \(n = 1\):
  \[
  6b = 6k+2,
  \]
  que não é divisível por 6.
- Se \(n = 2\):
  \[
  6b = 12k+3,
  \]
  mas \(12k+3\) não é divisível por 6 (pois \(3\) não é múltiplo de 6).
- Continuando, teste com \(n = 5\):
  \[
  6b = 1 + 5(6k+1) = 1 + 30k + 5 = 30k + 6
  \]
- Agora, dividindo por 6:
  \[
  b = \frac{30k+6}{6} = 5k+1
  \]

**Verificação:**  
Multiplicando:
\[
6 \times (5k+1) = 30k+6.
\]
Se subtrairmos \(5\) vezes o módulo \(6k+1\) (ou seja, \(5 \times (6k+1) = 30k+5\)), resta:
\[
30k+6 - (30k+5) = 1.
\]

Portanto, o inverso de 6 módulo \(6k+1\) é **\(5k+1\)**.

---

### Observação sobre o \(k\)

O enunciado não especifica se \(k\) pertence aos inteiros (\(\mathbb{Z}\)) ou aos naturais (\(\mathbb{N}\)). Geralmente, em problemas de aritmética modular, consideramos \(k\) como um número inteiro não negativo (por exemplo, \(k = 0, 1, 2, \dots\)). Contudo, para que a operação de inverso faça sentido, o módulo \(6k+1\) precisa ser maior que 1, o que normalmente implica que \(k\) seja pelo menos 1 (pois se \(k=0\), \(6k+1=1\) e módulo 1 não gera informações interessantes).

---

### Resumo dos Resultados

- **Inverso de 2 módulo \(6k+1\):** \(3k+1\)
- **Inverso de 3 módulo \(6k+1\):** \(4k+1\)
- **Inverso de 6 módulo \(6k+1\):** \(5k+1\)

Cada um desses resultados mostra que, ao multiplicar o número original pelo respectivo inverso, obtemos um resultado que, ao ser dividido por \(6k+1\), deixa resto 1.

---

Espero que essa explicação detalhada tenha tornado clara a ideia de inverso módulo e como encontrar os inversos de 2, 3 e 6 para um módulo da forma \(6k+1\). Se quiser explorar outros exemplos ou tiver mais dúvidas sobre essa área, podemos conversar sobre diversas aplicações da aritmética modular!

## Questão 2: Congruência Produto

Sejam X,Y, Z, W e n  números inteiros. Mostre que se X é congruente Y módulo n e Z é congruente a W módulo n, então X.Z é congruente a Y.W módulo n.

### Resolução

A demonstração que se pede é uma aplicação direta da definição de congruência módulo \(n\) e das propriedades da aritmética dos inteiros. Segue a resolução passo a passo:

---

**Dado:**  
Sejam \(X\), \(Y\), \(Z\), \(W\) e \(n\) números inteiros tais que

\[
X \equiv Y \pmod{n} \quad \text{e} \quad Z \equiv W \pmod{n}.
\]

Pela definição de congruência, temos que:

1. \(X \equiv Y \pmod{n}\) significa que \(n\) divide \(X-Y\). Ou seja, existe um inteiro \(c\) tal que
   \[
   X - Y = cn.
   \]
2. Analogamente, \(Z \equiv W \pmod{n}\) significa que existe um inteiro \(d\) tal que
   \[
   Z - W = dn.
   \]

---

**Objetivo:**  
Mostrar que \(XZ \equiv YW \pmod{n}\), isto é, demonstrar que \(n\) divide \(XZ - YW\).

---

**Demonstração:**  
Considere a diferença \(XZ - YW\). Podemos reescrevê-la de forma a evidenciar os termos \(X-Y\) e \(Z-W\):

\[
XZ - YW = XZ - YZ + YZ - YW.
\]

Agora, agrupe os termos de maneira conveniente:
\[
XZ - YW = Z(X - Y) + Y(Z - W).
\]

Utilizando as igualdades obtidas da hipótese:
- Sabemos que \(X - Y = cn\).
- Sabemos que \(Z - W = dn\).

Substitua essas expressões na igualdade acima:
\[
XZ - YW = Z(cn) + Y(dn) = n(cZ + dY).
\]

Note que \(cZ + dY\) é um número inteiro, pois é a soma e o produto de inteiros. Assim, temos:

\[
XZ - YW = n \cdot m, \quad \text{onde} \quad m = cZ + dY \in \mathbb{Z}.
\]

Isto mostra que \(n\) divide \(XZ - YW\). De acordo com a definição de congruência, isso implica que

\[
XZ \equiv YW \pmod{n}.
\]

---

**Conclusão:**  
Dado que \(X \equiv Y \pmod{n}\) e \(Z \equiv W \pmod{n}\), provamos que \(XZ \equiv YW \pmod{n}\).

Esta demonstração utiliza exclusivamente a propriedade de que se \(n\) divide \(a\) e \(n\) divide \(b\), então \(n\) divide qualquer combinação linear \( \alpha a + \beta b \) (com \(\alpha, \beta \in \mathbb{Z}\)), o que é uma característica fundamental da divisibilidade nos inteiros.

---

## Sobre Preservação da Congruência na Soma e Multiplicação

A seguir, apresento uma discussão acadêmica detalhada sobre como a congruência é preservada tanto na soma quanto na multiplicação. Essa propriedade é fundamental para que o conjunto das classes de equivalência módulo \(n\) tenha uma estrutura algébrica bem definida (de fato, forma o anel quociente \(\mathbb{Z}/n\mathbb{Z}\)).

---

### 1. Definição de Congruência

Sejam \(a, b \in \mathbb{Z}\) e \(n \in \mathbb{N}\) (com \(n > 0\)). Dizemos que  
\[
a \equiv b \pmod{n}
\]  
se e somente se \(n\) divide a diferença \(a-b\); isto é, existe um inteiro \(k\) tal que  
\[
a-b = kn.
\]  
Essa definição implica que os números \(a\) e \(b\) pertencem à mesma classe de equivalência em relação ao módulo \(n\).

---

### 2. Preservação da Congruência na Soma

**Enunciado:**  
Se \(a \equiv b \pmod{n}\) e \(c \equiv d \pmod{n}\), então  
\[
a+c \equiv b+d \pmod{n}.
\]

**Demonstração:**  

Pela hipótese, existem inteiros \(k\) e \(m\) tais que:
- \(a - b = kn\),
- \(c - d = mn\).

Somando as duas igualdades, temos:
\[
(a - b) + (c - d) = kn + mn = n(k+m).
\]

Reescrevendo a soma pela associação dos termos:
\[
(a+c) - (b+d) = n(k+m).
\]

Como \(k+m\) é um inteiro, concluímos que \(n\) divide \((a+c) - (b+d)\), ou seja,  
\[
a+c \equiv b+d \pmod{n}.
\]

Esta demonstração evidencia que a operação de soma é compatível com a relação de congruência, o que significa que a passagem para as classes de equivalência preserva a adição.

---

### 3. Preservação da Congruência na Multiplicação

**Enunciado:**  
Se \(a \equiv b \pmod{n}\) e \(c \equiv d \pmod{n}\), então  
\[
ac \equiv bd \pmod{n}.
\]

**Demonstração:**  

Novamente, partindo das hipóteses, temos:
- \(a - b = kn\),
- \(c - d = mn\) para alguns inteiros \(k\) e \(m\).

Para demonstrar a propriedade na multiplicação, partimos da expressão:
\[
ac - bd.
\]

Podemos reorganizar essa diferença somando e subtraindo o termo \(ad\):
\[
ac - bd = ac - ad + ad - bd = a(c-d) + d(a-b).
\]

Substituindo as condições de congruência:
- Como \(c-d = mn\),
- E \(a-b = kn\),

temos:
\[
ac - bd = a(mn) + d(kn) = n(am + dk).
\]

Como \(am + dk\) é um inteiro, segue que \(ac - bd\) é múltiplo de \(n\), ou seja,  
\[
ac \equiv bd \pmod{n}.
\]

Esta demonstração mostra que a operação de multiplicação também é compatível com a relação de congruência.

---

### Considerações Adicionais

Essas propriedades – que são, respectivamente, a preservação da congruência na soma e na multiplicação – são cruciais para a construção e entendimento do anel quociente \(\mathbb{Z}/n\mathbb{Z}\). Elas garantem que as operações definidas sobre as classes de equivalência sejam **bem definidas**, ou seja, independentemente dos representantes escolhidos para cada classe, as somas e os produtos não dependem da escolha do representante. Em outras palavras, se substituirmos cada inteiro por sua classe de equivalência módulo \(n\), as operações de soma e multiplicação permanecem consistentes.

Além disso, essas propriedades refletem a natureza dos ideais em anéis. De fato, o conjunto \(n\mathbb{Z}\) (todos os múltiplos de \(n\)) é um ideal de \(\mathbb{Z}\) e a congruência módulo \(n\) pode ser vista como a relação que define o anel quociente \(\mathbb{Z}/n\mathbb{Z}\). O fato de a soma e a multiplicação serem compatíveis com essa relação é, na linguagem algébrica, a afirmação de que \(n\mathbb{Z}\) é um ideal e que as operações no anel quociente são bem definidas.

---

Esta abordagem acadêmica demonstra com rigor que, dados \(a \equiv b \pmod{n}\) e \(c \equiv d \pmod{n}\), as operações de soma e multiplicação preservam a congruência, o que é uma das pedras angulares da aritmética modular e de suas aplicações em diversos ramos da matemática.

A seguir, apresento uma continuação detalhada, no mesmo nível acadêmico, sobre a preservação da congruência na subtração e a existência de inversos multiplicativos.

---

## 4. Preservação da Congruência na Subtração

Assim como a soma, a subtração também preserva a relação de congruência. Sejam \(a\), \(b\), \(c\) e \(d\) números inteiros e \(n\) um inteiro positivo. Suponhamos que  
\[
a \equiv b \pmod{n} \quad \text{e} \quad c \equiv d \pmod{n}.
\]
Pela definição de congruência, existem inteiros \(k\) e \(m\) tais que  
\[
a - b = kn \quad \text{e} \quad c - d = mn.
\]

Agora, considere a diferença:
\[
(a - c) - (b - d).
\]
Podemos reescrever essa expressão agrupando os termos:
\[
(a-c) - (b-d) = (a - b) - (c - d).
\]
Substituindo as igualdades acima:
\[
(a-c) - (b-d) = kn - mn = n(k-m).
\]
Como \(k-m\) é um número inteiro, concluímos que \(n\) divide \((a-c) - (b-d)\). Portanto, pela definição de congruência, temos:
\[
a-c \equiv b-d \pmod{n}.
\]

Esta demonstração mostra que a subtração dos representantes de classes de equivalência é bem definida – o que é fundamental na construção e manipulação do anel quociente \(\mathbb{Z}/n\mathbb{Z}\).

---

## 5. Existência de Inversos Multiplicativos

A existência de inversos multiplicativos em aritmética modular é de extrema importância e tem implicações profundas na teoria dos anéis e dos campos. Em particular, ela permite definir a operação de “divisão” dentro de determinados conjuntos, transformando-os, por exemplo, em corpos quando o módulo é um número primo.

### Teorema Fundamental

Um inteiro \(a\) possui um inverso multiplicativo módulo \(n\) se, e somente se,  
\[
\gcd(a, n) = 1.
\]
Isso significa que \(a\) e \(n\) devem ser coprimos para que exista um inteiro \(x\) tal que:
\[
a \times x \equiv 1 \pmod{n}.
\]

### Demonstração pela Identidade de Bézout

1. **Se \(\gcd(a, n) = 1\):**  
   Pela Identidade de Bézout, existem inteiros \(x\) e \(y\) tais que:
   \[
   ax + ny = 1.
   \]
   Observando a igualdade módulo \(n\), o termo \(ny\) é claramente um múltiplo de \(n\) (portanto, \(ny \equiv 0 \pmod{n}\)); logo, resta:
   \[
   ax \equiv 1 \pmod{n}.
   \]
   Assim, o inteiro \(x\) é o inverso multiplicativo de \(a\) módulo \(n\).

2. **Reciprocamente, se existe \(x\) tal que \(ax \equiv 1 \pmod{n}\):**  
   Então, por definição de congruência, existe um inteiro \(k\) com:
   \[
   ax - 1 = kn,
   \]
   ou equivalentemente:
   \[
   ax + (-k)n = 1.
   \]
   Esta equação é uma forma da Identidade de Bézout e apenas tem solução quando o máximo divisor comum entre \(a\) e \(n\) é 1, isto é, \(\gcd(a, n) = 1\).

### Implicações

- Quando \(n\) é primo, para qualquer inteiro \(a\) com \(1 \leq a < n\), temos \(\gcd(a,n)=1\). Assim, cada elemento diferente de zero em \(\mathbb{Z}/n\mathbb{Z}\) possui um inverso multiplicativo, fazendo com que o conjunto forme um corpo.
  
- A existência de inversos multiplicativos é a espinha dorsal de diversos algoritmos em teoria dos números, criptografia (como no sistema RSA) e outros ramos da matemática aplicada e da ciência da computação.

---

## Conclusão

Resumindo, mostramos que:

- **Preservação na Subtração:**  
  Se \(a \equiv b \pmod{n}\) e \(c \equiv d \pmod{n}\), então  
  \[
  (a-c) \equiv (b-d) \pmod{n},
  \]
  por meio da linearidade das operações e da definição de congruência.

- **Existência de Inversos Multiplicativos:**  
  Um inteiro \(a\) possui inverso multiplicativo módulo \(n\) se, e somente se, \(\gcd(a, n) = 1\). A existência desse inverso é garantida pela Identidade de Bézout, que fornece uma combinação linear de \(a\) e \(n\) igual a 1, demonstrando que há um inteiro \(x\) tal que \(ax \equiv 1 \pmod{n}\).

Estas propriedades não apenas fundamentam o cálculo em aritmética modular, mas também sustentam toda a estrutura algébrica do anel \(\mathbb{Z}/n\mathbb{Z}\) e, em certos casos, do corpo finito \(\mathbb{F}_p\).