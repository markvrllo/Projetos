https://youtu.be/-JcQJFNVjaA?si=19zMGne3dJlhJPeo link de aulas de Augelin com professor do ime usp

Boldrini Algebra Linear

## Informações

sites.icmc.usp.br/andreduarte

### Avaliações:

P1 - 06/05
P2 - 27/06

NF = (P1+P2)/2

Listas/Monitor

Sub: A confirmar

## Aula "1"

### Vetores

É oriundo da palavra vetere, que significa andar. A partir de William Hamilton, a partir do seu trabalho principal, que são os números quaternios.

> Pesquisar sobre números quatérnios e william Hamilton e vetores

>Exemplo construtivo de vetor, definição de direção, comprimento e sentido

AB e CD são **equipolentes** se tem mesmo comprimento, direção e sentido.

Vamos tentar entender o que significaria sentido vetorialmente, visto que para ter mesma direção, basta que os vetores sejam paralelos, ou tem o mesmo coeficiente angular.

Se ligarmos os pontos iniciais e finais de cada vetor, e não houver intersecção entre os segmentos(), eles terão o mesmo sentido, enquanto caso eles se intersectem, os vetores terão sentidos opostos.

>Inserir aqui exemplo em imagem de ambos os casos com a ligação dos segmentos

Assim, podemos definir que dado AB, o vetor $\overrightarrow{AB}$ é o conjunto de todos os segmentos orientados equipolente a $\overline{AB}$.

### Vetores em Coordenadas

> Agora temos um exemplo com as coordenadas do gráfico, analiticamente.

$\overrightarrow{AB} = [x_1-x_0, y_1-y_0]$ em coordenadas.

> Enquadrar a definição vetorial acima.

#### Exemplo

$A = (7,10)$ e $B = (1,3)$, teremos que:

$\overrightarrow{AB} = [1-7, 3-10] = [-6, -7]$

> Desenhar o vetor resultante aqui
>

Obs 1: Às vezes, denotamos $[x_0, y_0]$ por $\begin{bmatrix}
x_0 \\
y_0 \\
\end{bmatrix}
$

Obs 2: $\overrightarrow{AB} = \overrightarrow{CD} \leftrightarrow $ $\overline{AB}$ e $\overline{CD}$ são equipolentes.

Obs 3: $\vec{0} = [0,0]$ é o vetor nulo

$P_0 = (x_0, y_0)$, logo \[\overrightarrow{OP} = [x_0 -0, y_0-0]=[x_0, y_0]\]

Assim, dados:

\[
\vec{u} = \overrightarrow{AB} \\
\vec{v} = \overrightarrow{CD}
\]

eles tem mesmo comprimento se $\overline{AB}$ e $\overline{CD}$ tem o mesmo comprimento.

Eles terão a mesma direção/sentido se $\overline{AB}$ e $\overline{CD}$ tem a mesma direção/sentido.

obs: $[x_0, y_0],[x_1, y_1]$ tem mesma direção se $x_0=tx_1$ e $y_0=ty_1$, para algum $t$.

### Soma de Ponto e Vetor

> Imagem de soma de ponto e vetor
>

$P=(x_0, y_0), \vec{u} = [a,b]$, com $Q = P + \vec{u} = (x_0+a,y_0+b)$

#### Exemplo

\[A=(6,12)\\
B=(7,10)\\
P=(5,2)\]

Solução: Calcularemos o vetor $\vec{u}$ e depois somaremos com o valor do ponto $P$.

\[\vec{u} = [7-6,10-12]=[1,-2]\\
P+\vec{u}=(5+1, 2-2)=(6,0)\]

Perceba que a soma de ponto com vetor *sempre resultará em um ponto.*

>Inserir aqui uma imagem com a representação de dita soma.

### Operações com Vetores

#### Soma

\[
\vec{u}=[u_1,u_2]\\
\vec{v}=[v_1,v_2]\\
\\
\vec{v}+\vec{u}=[v_1+u_1,v_2+u_2]
\]

**Exemplo:**
Dados:
\[
\vec{u} = [-1,2]\\
\vec{v} = [4,5] \\
\]
Calculemos:
\[
\begin{align*}
\vec{u}+\vec{v} &= [-1,2]+[4,5] \\
&=[-1+4,2+5]\\
&=[3,7]
\end{align*}
\]

>Inserir regra do paralelogramo aqui

#### Multiplicação por escalar

Seja $\lambda$ um número real e $\vec{v} = [v_1, v_2]$. Logo, $\lambda\vec{v} = [\lambda v_1,\lambda v_2]$.

**Exemplo:**

Dados \[
\vec{v} = [2,3]    
\]

Teremos:

\[
2\vec{v} = [4,6]\\
\frac{1}{2}\vec{v} = [1,\frac{3}{2}]
\]

> Listar aqui as propriedades de lambda
>
## Aula "2"

#### Subtração de Vetores

$\vec{u}$ e $\vec{v}$ vetores, sabemos que:

\[
\vec{u} - \vec{v} = \vec{u} + \vec{-v}
\]

Algebricamente, $\vec{u} - \vec{v} = [u_1-v_1,u_2-v_2]$

### Vetores no Espaço

\[
\vec{v}-\overrightarrow{OP} = [x_0,y_0,z_0]
\]

#### Soma

\[
\vec{u} = [u_1,u_2,u_3]\\
\vec{v} = [v_1,v_2,v_3]\\
\vec{u}+\vec{v} = [u_1+v_1, u_2+v_2, u_3+v_3]
\]

#### Multiplicação por Escalar

Seja $\lambda$ um número e $\vec{v} = [v_1,v_2,v_3]$.

\[
\lambda \vec{v} = [\lambda v_1, \lambda v_2, \lambda v_3]
\]


### Vetores em $\mathbb{R^n}$

$\mathbb{R^n}$ denota a sequência ordenada de n números (vetores em n coordenadas):

\[
\vec{u} = [u_1, u_2, u_3, ... , u_n]
\]

#### Soma

\[
[u_1, u_2, u_3,..., u_n] + [v_1,v_2,v_3,..., v_n] = [u_1+v_1, u_2+v_2, ...., u_n + v_n]
\]

#### Multiplicação por Escalar

\[
\lambda[u_1, u_2, ..., u_n] = [\lambda u_1, \lambda u_2,..., \lambda u_n]
\]

#### Operações Algébricas

1 - $\vec{u}+\vec{v}=\vec{v}+\vec{u}$ (Comutativa);

2 - $(\vec{u}+\vec{v}) + \vec{w} = \vec{u}+(\vec{v} + \vec{w})$ (Associativa);

3 - $\vec{u} + \vec{0} = \vec{u}$

4 - $\vec{u} + (-\vec{u}) = \vec{0} = (-\vec{u}) + \vec{u}$

5 - $(c+d)\vec{u} = c\vec{u} + d\vec{u}$ (Distributiva)

6 - $c(\vec{u}+\vec{v} = c\vec{u}+c\vec{v})$

7 - $(cd)\vec{u} = c(d\vec{u})$

8 - $1\cdot\vec{u}=\vec{u}$

## Aula 3

### Vetores Binários

/+ | 0 1   .| 0 1
0 | 0 1   0| 0 0
1 | 1 0   1| 0 1

Exemplo: 1 + 0 + 1 + 1 = 1 + 0 + 0 = 1 + 0 = 1

1 + 1 + 1 + 1 = 0

$\mathbb{Z_+^*} = {0,1}$

Vetores com coordenadas {0,1} e temos a coordenada $\mathbb{Z_+^*}$ vetores binários.

Exemplo: \[
    \vec{v} = [0,1,1,0,1]\\
    \vec{u} = [1,1,0,1,1]\\
    \vec{v}+\vec{u} = [1+0, 1+1, 0+1, 1+0, 1+1]\\
    =[1,0,1,1,0]
    \]

Quantos vetores binários existem então?

\[
[0,0],[0,1],[1,0],[1,1]
\]

Em $\mathbb{Z_2^n}$ temos $2^n$ vetores binários.

#### Inteiros módulo 3

\[
\mathbb{Z_3} = {0,1,2}
\]

$$\begin{array}{|c|c|c|c|}
\hline
/+ & 0 & 1 & 2 \\ \hline
0 & 0 & 1 & 2 \\ \hline
1 & 1 & 2 & 0 \\ \hline
2 & 2 & 0 & 1 \\ \hline
\end{array}
$$

$$\begin{array}{|c|c|c|c|}
\hline
/\cdot & 0 & 1 & 2 \\ \hline
0 & 0 & 0 & 0 \\ \hline
1 & 0 & 1 & 2 \\ \hline
2 & 0 & 2 & 1 \\ \hline
\end{array}
$$

com $[0,1,2]$ é vetor ternário

Exemplo:

\[
\vec{u} = [0,1,2]\\
\vec{v} = [1,1,0]\\
\vec{u}+\vec{v} = [1,2,2]
\]

#### Produto Escalar

Seja \[\vec{u} = \begin{bmatrix}
u_1 \\
u_2 \\
... \\
u_n
\end{bmatrix}, \vec{v} = \begin{bmatrix}
v_1 \\
v_2 \\
... \\
v_n
\end{bmatrix}
\] em $\mathbb{R}$

O produto escalar desses vetores é definido como:

\[\vec{u}\cdot\vec{v} = u_1v_1+u_2v_2+...+u_nv_n\]

Obs: Os vetores tem o mesmo número de coordenadas e **o produto escalar é sempre um número real.**

#### Propriedades de Produto Escalar

Sejam $\vec{u}, \vec{v}$ e $\vec{w}, $vetores e $\lambda$ um escalar

\[
\vec{u}\cdot\vec{v} = \vec{v}\cdot\vec{u}\\
\\
(\vec{u}+\vec{v})\cdot\vec{w} =\vec{u}\cdot\vec{w} +\vec{v}\cdot\vec{w}\\
(\lambda\vec{u})\cdot\vec{v} = \lambda (\vec{u}\cdot\vec{v})\\
\vec{u}\cdot\vec{u} \geq 0 ,
 \vec{u}\cdot\vec{u} = 0 \iff \vec{u} = \vec{0}
\]

> Tente provar a propriedade 2 e 4.
>

### Norma de um Vetor

$$\|v\| = \sqrt{x^2 + y^2} = \sqrt{\vec{v}\cdot\vec{v}}$$, sendo x e y as coordenadas do vetor, considerando a distância do ponto P e a origem.

A **norma euclideana** de um vetor $\vec{v}$ no $\mathbb{R^n}$ é \[
\|v\| = \sqrt{\vec{v}\cdot\vec{v}} 
\]


#### Propriedades

\[
\|\vec{u}\| = \vec{0} \iff \vec{u} = \vec{0}\\
\|\lambda\vec{u}\| = |\lambda|\|\vec{u\|}
\]

> Verifique ambas as propriedades, lembrar da CE de módulo, onde:
>

\[
|\lambda| =
\begin{cases} 
\lambda & \text{se } \lambda \geq 0, \\ 
-\lambda & \text{se } x < 0
\end{cases}    
\]

### Vetores Unitários

$\vec{v}$ é unitário se $\|\vec{v}\| = 1$. Para encontrar o vetor unitário de um vetor qualquer, basta dividi-lo pela norma ${r}$ do vetor $\vec{v}$, ou seja:

\[
\vec{u} = \dfrac{1}{r}\vec{v}
\]

### Desigualdade de Cauchy-Schwarz

Seja $\vec{u}, \vec{v}$ vetores em $\mathbb{R^n}$:

\[
|\vec{u}\cdot\vec{v}| \leq \|\vec{u}\|\cdot\|\vec{v}\|
\]

### Desigualdade Triangular

Seja $\vec{u}, \vec{v}$ vetores em $\mathbb{R^n}$:

\[
\|\vec{u}+\vec{v}\| \leq \|\vec{u}\|+\|\vec{v}\|
\]

> Prove: