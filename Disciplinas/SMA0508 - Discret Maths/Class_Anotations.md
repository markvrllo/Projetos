## Professor Gabriel

e-mail: fernandes@icmc.usp.br
sala 4-238

### Referências do Curso
Apostilas da Obmep
4) Indução Matemática
7) Criptografia


## Aula 1 - 12/03/2025

### Números Naturais

Podemos descrever os números naturais de acordo com a seguinte lista de axiomas:

**Axioma 1:** O $0$ é um número natural

**Axioma 2:** Se $n$ é um número natural, então existe um sucessor $n$, que denotamos por $n + 1$ , e $n+1$ é um número natural.

**Axioma 3:** Se $X_0$ é um conjunto de números naturais tal que $0 \in X_0$ e se $n \in X_0$, então $n+1 \in X_0$, então $X_0$ é o conjunto de todos os números naturais.

### Provas por Indução

#### Prova 1
A soma dos n primeiros números naturais:

\[S_n = 0 + 1 + 2+ 3+...+(n-1)\]

Vamos inverter a ordem de escrita dos termos de $S_n$, e realizarmos sua soma:

\[S_n = (n-1) + (n-2)+(n-3)+...+0\]

Realizando a soma de cada termo, percebemos que ele sempre dá $n-1$, logo, podemos escrever:

\[2S_n= (n-1)n\]
\[S_n=\frac{(n-1)n}{2}\]

Vamos agora provar a mesma formula utilizando indução:

Mostre que: 

\[X_0=\{0\} \cup \{n \in N | S_n=\frac{(n-1)n}{2}\}\] é tal que $X_0 = N $

Para mostrarmos que $X_0 = N$, temos que verificar que:

- $0 \in X_0$;
- Se $n \in X_0$, então $n +1 \in X_0$;

#### Nota do Professor
{$S_n$ não é mais a soma dos n-primeiros naturais, ou seja, $0+...+(n-1)$, de agora em diante $S_n$ é a soma dos $(n+1)$ primeiros naturais, ou seja, $0+...+(n-1)+n = S_n$}

Com essa mudança, teremos que a definição modificará a fórmula ligeiramente para a versão positiva.

#### Nota do Aluno

Meu deus do céu, é definição. Carrega ela até o fim, senhor! É pedir demais??? AHHHHHHHHHHH. Retornando à programação normal.

Vamos testar a fórmula positiva para 0:

\[S_0=0\]... OK!

\[S_1= 0+1 =1= \frac{(1+1)1}{2}\] ... OK!

\[S_2= 0+1+2 =3= \frac{(2+1)2}{2}\] ... OK!

Supondo que $n \in X_0$, ou seja, $S_n = \dfrac{(n+1)n}{2}$, queremos mostrar que $S_{n+1}=\dfrac{(n+1)(n+2)}{2}$.

Para isso, observe que $S_{n+1}=S_n+ (n+1)$, pois $0+1+...+n+(n+1)=S_{n+1}$. Logo:

\[\frac{(n+1)n}{2}+(n+1) = S_{n+1}\]

\[(n+1)(\frac{n}{2}+1) = S_{n+1}\]

\[\dfrac{(n+1)(n+2)}{2}=S_{n+1}\]

Assim, teremos que $(n+1) \in X_0 $ e $X_0 = \mathbb{N}$

#### Prova 2

Seja $A_n = 0^2+1^2+2^2+...+n^2$

\[A_0=0^2=0\] ... ok
\[A_1=0^2+1^2=1\] ...ok
\[A_2=0^2+1^2+2^2=5\] ...ok

Vamos mostrar que $X_0=\{n \in \mathbb{N}|A_n=\frac{n(n+1)(2n+1)}{6}\}$ é tal que $X_0 = \mathbb{N}$

Vamos mostrar que:

- $0 \in X_0$;
- Se $n \in X_0$, então $(n+1) \in X_0$. 

Para $n=0$, $A_0=0= \dfrac{0(0+1)(2 \cdot 0+1)}{6}$. Logo $0 \in X_0$.

Suponha que $n \in X_0$, ou seja, $A_n=\dfrac{n(n+1)(2n+1)}{6}$.

Queremos verificar que $A_{n+1}=0^2+1^2+2^2+...+n^2+(n+1)^2=\dfrac{(n+1)((n+1)+1)(2(n+1)+1)}{6}$

*Obs:* $A_n + (n+1)^2=A_{n+1}$

Assim:

\[A_{n+1}=\frac{n(n+1)(2n+1)}{6} + (n+1)^2\]

\[A_{n+1}=\frac{n(n+1)(2n+1)}{6} + \frac{6(n+1)^2}{6}\]

\[A_{n+1}=\frac{n(n+1)(2n+1)}{6} + \frac{6(n+1)^2}{6}\]

\[\frac{(n+1)(n(2n+1)+6(n+1))}{6}\]

\[\frac{(n+1)(2n^2+7n+6)}{6}\]

Temos $\dfrac{(n+1)((n+1)+1)(2(n+1)+1)}{6}$, desenvolvendo, obtemos o mesmo resultado. Logo ambos são a mesma fórmula, como queríamos demonstrar!

## Aula "2" - 26/03/2025

### Exemplos de Recursão

**Exemplo 1:**
\[
(n+1)! = (n+1)n!
\]

**Exemplo 2: Sequência de Fibonacci**

Sua recursão é bem simples, que consiste em, após definirmos $n_0=0$ e $n_1=1$, realizamos sua soma recursivamente. Curioso que a base da programação dinâmica são recursões desse estilo.

**Exemplo 3:** Sejam n, m $\in \mathbb{N}$ temos n + (m+1)= (n+m)+1

Assim, podemos encontrar o termo geral da sequência de fibonacci utilizando a recursão diretamente:

Suponha que $q \in mathbb{R}$ é tal que se $x_{n+1} = x_n + x_{n-1}$ 
> arrumar
>

Assim, $q^{n+1} = q^n + q^{n-1}$

> Resolva para n = 1

Observe que se $\alpha,\beta \in \mathbb{R}$ e $v_n=\alpha q^{n}_{1}$ e $w_n=\beta q^{n}_{2}$, então:

página 42 da apostila mais fotos Mateus. Basicamente é aula do poli sobre o trecho de recursões.

### Congruência Modular

Def: Dados dois inteiros m e n, dizemos que *m divide n* se existe $q \in \mathbb{Z}$ tal que $n=mq$.

Def: Dado $m,n \in \mathbb{Z}$ o resíduo de n módulo m é o inteiro positivo $r$ tal que $0 \leq r < m$ e $n = mq +r$ para algum $q \in \mathbb{Z}$.

Def: Dado $a,b, m \in \mathbb{Z}$ dizemos que $a$ é congruente a $b$ módulo $m$ se e somente se $m$ divide $b-a$. Ou seja:

\[
a \equiv b \pmod{m}    
\]

Um exemplo:

\[
4 \equiv 1 \pmod{3}
\]
pois 3 divide 4-1.

\[7 \equiv 1 \pmod{3}\] pois 7-1 é divisível por 3.

\[1 \equiv 10 \pmod{3}\] pois 1-10 é divisível por 3.

Todos os números da forma $3k+1,3k+2, 3k$, para algum $k \in \mathbb{Z}$

#### Um Teorema
Afirmação: Se $a \equiv b \pmod{n}$ então existem $q,q', r \in \mathbb{Z}$ tais que 

\[
a=nq+r\\
b=nq'+r\\
e\\
0 \leq r < n
\]

Prova: escreva $a = nq + r_0, b = nq'+r_1$. Por hipótese $b-a$ é divisivel por n. Logo existe um $q'' \in \mathbb{Z}$ tal que $b-a=q''n$.

\[
b-a=nq'+r_1 - nq - r_0\\
q''n=n(q'-q)+ r_1-r_0\\
-n(q'-q)+q''n = r_1-r_0
\]

Note que 

\[
0 \leq r_0<n \\
0 \leq r_1 <n
\]

Vamos supor que $r_1 \geq r_0$.

Então $0 \leq r_0 \leq r_1 < n$. Logo $0 \leq r_1 -r_0 < n$.

Por outro lado, $r_1-r_0=nk$ para algum $k \in \mathbb{Z}$. Porém se $k \neq 0$, então $nk \geq n$ ou $nk < 0$.

Portanto, $r_1-r_0=n \cdot 0=0$

