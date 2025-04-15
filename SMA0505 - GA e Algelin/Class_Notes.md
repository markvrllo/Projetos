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
\|v\|_2 = \sqrt{\vec{v}\cdot\vec{v}}  = \sqrt{v_1^2 +v_2^2 + ... + v_n^2}
\]


#### Propriedades

\[
\|\vec{u}\|_2 = \vec{0} \iff \vec{u} = \vec{0}\\
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


## Aula 4

Prosseguindo, vamos definir, em geral uma norma em $\mathbb{R^n}$ é uma função $\|\cdot\| = \mathbb{R^n} \rightarrow \mathbb{R^n}$ satisfazendo:

\[
(i): \|u\| \geq 0 \text{ e } \|u\| = 0 \iff u = 0\\
(ii):\|\lambda u\| = |\lambda|\cdot \|u\|\\
(iii): \|u+v\| \geq \|u\| + \|v\|
\]

$\|\cdot\|_2 \text{ é somente UMA norma}.$

Exemplo: 

\[u = [u_1, u_2, ..., u_n]\\
    \|u\|_\infty = max\{|u_1|, |u_2|, ...,|u_n|\}\\
    \text{norma } l_\infty\]

\[u = [u_1, u_2, ..., u_n]\\
    \|u\|_1 = |u_1| + |u_2| + ... + |u_n|\\
    =\sum_{i=1}^{n}|u_i|\\
    \text{norma } l_1\]


Com a desigualdade abaixo como verdadeira:

\[
\|u\|_1 \geq \|u\|_2 \geq \|u\|_\infty
\]

Exemplo:

$$p>1, \text{sendo p um número real. }\\
u=[u_1, u_2,...,u_n]\\
 \\
  \\
   \\
    \\
\|u\|_p = (|u_1|^p+|u_2|^p+...+|u_n|^p)^{\frac{1}{p}}\\\text{norma } l_p$$

### Desigualdade de Holder

$u=[u_1, u_2, ..., u_n],\\ v=[v_1, v_2, ..., v_n], \\ p>1,$

\[
|u\cdot v| \leq \|u\|_p\|v\|_q\\
\text{ }\\
\text{com } \dfrac{1}{p} + \dfrac{1}{q} = 1\\
\]

Explicitamente, teremos:

\[|\sum_{i=1}^{n}{u_i \cdot v_i}| \leq (\sum_{i=1}^{n}{|u_i|^p})^\dfrac{1}{p}(\sum_{i=1}^{n}{|v_i|^p})^\dfrac{1}{q} \]

### Desigualdade de Minkowski

\[\|u+v\| \leq \|u\|_p + \|v\|_q\]

#### Prova

$u=[u_1, u_2, ..., u_n],\\ v=[v_1, v_2, ..., v_n]$

Teremos que:

\[
\|u+v\|_p = (|u_1+v_1|^p + |u_2+v_2|^p + ... + |u_n+v_n|^p)^\dfrac{1}{p}\\
\]

Elevando ambos os lados por p, teremos:

\[
\begin{aligned}
    (\|u+v\|_p)^p &= \sum_{i=1}^{n}{|u_i+v_i|^p}\\
    &= \sum_{i=1}^{n}{|u_i+v_i|^{p-1}}\cdot |u_i+v_i|\\
    &\leq \sum_{i=1}^{n}{|u_i+v_i|^{p-1}}\cdot (|u_i|+|v_i|)\\
    &=\sum_{i=1}^{n}{|u_i+v_i|^{p-1}}\cdot (|u_i|) + \sum_{i=1}^{n}{|u_i+v_i|^{p-1}}\cdot (|v_i|)
\end{aligned}
\]

Agora, sejam $w_i = |u_i+v_i|^{p-1}$ e $z_i = |u_i|$

Reescrevendo, teremos que:

\[
|\sum_{i=1}^{n}{w_iz_i}| = |\sum_{i=1}^{n}{z_iw_i}| \\
\leq (\sum_{i=1}^{n}{|z_i|^p})^\frac{1}{p}(\sum_{i=1}^{n}{|w_i|^q})^\frac{1}{q}\\
= \|u\|_p(\sum_{i=1}^{n}{|u_i+v_i|^{q(p-1)}})^\frac{1}{q}\\
= \|u\|_p[(\sum_{i=1}^{n}{|u_i+v_i|^p})^\frac{1}{p}]^\frac{p}{q}\\
= \|u\|_p(\|u+v\|_p)^\frac{p}{q}
\]

Logo:

\[
\begin{aligned}
    &=\sum_{i=1}^{n}{|u_i+v_i|^{p-1}}\cdot (|u_i|) + \sum_{i=1}^{n}{|u_i+v_i|^{p-1}}\cdot (|v_i|)\\
    &\leq \|u\|_p \cdot \|u+v\|_p^\frac{p}{q} + \|v\|_p \cdot \|u+v\|_p^\frac{p}{q}\\
    (\|u+v\|_p)^p &\leq  (\|u\|_p+\|v\|_p)\|u+v\|^\frac{p}{q}\\
    \|u+v\|_p&\leq
\end{aligned}
\]

> finalizar
>
### Distância

em $\mathbb{R^2}$:

>imagem whats pedro

$d=d(P,Q)=\sqrt{(u_1-v_1)^2 +(u_2-v_2)^2}$
**Distância Euclidiana**

Em geral,

>imagem pedro cel:

em geral, $u, v \text{ vetores em } \mathbb{R^n}$:

\[
d(u,v) = \|u-v\|_2
\]

\[
(i): u, v \text{ em } \mathbb{R^n}\\
d_\infty(u,v) = \|u-v\|_\infty
\]
**Distância de Chebyshev**

\[
(i): u, v \text{ em } \mathbb{R^n}\\
d_1(u,v) = \|u-v\|_1
\]
**Distância de Manhattan**

## Aula 4

### Ângulos entre Vetores

$\theta \text{ é o ângulo entre os vetores } \vec{u} \text{ e } \vec{v}, 0 \leq \theta \leq 180°$. Pela geometria plana, teremos:

$\|v\|,\|u-v\|,\|u\|$ são uma trinca triangular. Logo, podemos escrever, pela **lei dos cossenos:**

\[
\|u-v\|^2 = \|u\|^2 + \|v\|^2 - 2\cdot\|u\|\cdot\|v\|\cos\theta\\
\]

Mas, pela definição da norma euclideana, teremos:

\[
\begin{aligned}
\|u-v\|^2 &= (u-v)\cdot(u-v)\\
&=u\cdot u -u\cdot v-v\cdot u+v\cdot v\\
&=u\cdot u +v\cdot v - 2u\cdot v\\
&= \|u\|^2+\|v\|^2-2uv
\end{aligned}
\]

Isolando o cosseno na expressão original e igualando a norma da diferença, teremos que:

\[
\begin{aligned}
\|u\|^2 + \|v\|^2 - 2\cdot\|u\|\cdot\|v\|\cos\theta &= \|u\|^2+\|v\|^2-2uv\\
\cos\theta &= \dfrac{u\cdot v}{\|u\|\cdot\|v\|}
\end{aligned}
\]

LEMBRANDO QUE u E v SÃO NÃO NULOS.

Exemplo:

$$u = [2,1,2]\\ v = [1,1,1]\\
uv = 1, \|u\| = 3, \|v\|=\sqrt{3}$$

Logo, teremos que o cosseno será:

$$\cos\theta = \dfrac{1}{3\sqrt{3}}$$, assim $\theta$ será igual aproximadamente 78,9°.

### Vetores Ortogonais

Sendo ortogonais, o ângulo entre dois vetores será 90°, logo seu cosseno será nulo. Assim, teremos que uma consequência poderá ser observada somente visualizando o produto escalar:

$$u \cdot v = \|u\| \cdot \|v\|\cos\theta = 0\\
u \cdot v = 0$$

#### Definição

$u \text{ e } v \text{ no } \mathbb{R^n} \text{ são ortogonais se } u \cdot v = 0$

Obs: $\vec{0}\cdot\vec{v} = 0 \text{ para todo }\vec{v} \text{ pois } \vec{0} \text{ é ortogonal a qualquer vetor.}$

#### Teorema de Pitágoras no $\mathbb{R^n}$

$$u, v \text{ são ortogonais } \iff \|u+v\|^2 = \|u\|^2+\|v\|^2 $$

> Tente realizar a prova, provando a ida e a volta
>

Uma  das aplicações possíveis seria a área de sinais ortogonais.

> Procurar definição de produto escalar utilizando integração


#### Projeções

Podemos escrever que:

$$proj_u(v) = \dfrac{u\cdot v}{\|u\|^2}\cdot u$$

é a **projeção ortogonal de v em u**

Exemplo: $u=[2,7,10], v=[-1,5,4]$. Determine p, q vetores tais que v = p+q e p//u, e q é ortogonal a u.

gabarito: 

> Encontre
>

## Aula 5 - Geometria e Vetores

Exemplo: 

$\text{Vamos encontrar o ponto médio } M \text{ de dois pontos } A, B.$

\[\vec{AM} = \vec{m} - \vec{a}\\
\vec{MB} = \vec{b} - \vec{m}\\
\quad \\
\vec{m} - \vec{a} = \vec{b} - \vec{m}
\vec{m} = \dfrac{1}{2}(\vec{a}+ \vec{b})
\]

Resolvendo algebricamente, teremos que:

$A=(x_1, y_1), B =(x_2, y_2), \vec{a} = [x_1, y_1], \vec{b} = [x_2, y_2]$

Logo, \(\vec{m} = \left[\dfrac{x_1+x_2}{2}, \dfrac{y_1+y_2}{2}\right]\)

Exemplo 2: Relações Geométricas no paralelogramo ABCD

Seja \(M\) o ponto de intersecção das diagonais de um paralelogramo não retângulo. Vamos verificar que os pontos médios delas coincidem em \(M\).

Vamos supor que \(M\) é ponto médio de \(\overline{AC}\). Logo

\[\overrightarrow{BM} = \overrightarrow{BC} + \overrightarrow{CM} \]

Mas \(\overrightarrow{BC} = \overrightarrow{AD}\) e \(\overrightarrow{CM} = \overrightarrow{MA}\), (são lados paralelos do paralelogramo ), assim:

\[\overrightarrow{BM} = \overrightarrow{BC} + \overrightarrow{CM} = \overrightarrow{AD} + \overrightarrow{MA} = \overrightarrow{MD}\]

### Retas

### Equação Geral da Reta

\[Ax+By+C=0\quad A,B,C \in \mathbb{R}, B \neq 0\]

Vamos adaptá-la para o formato da equação reduzida da reta:

\[By = -Ax-C\\
\quad\\
y = -\dfrac{A}{B}x-\dfrac{C}{B}\]

### Equação reduzida ou NORMAL da reta:

\[y=mx+k\]

Exemplo: \(r: 2x + y = 0, \quad \vec{n} = \begin{bmatrix} 2 \\ 1 \end{bmatrix} , \quad \vec{X} = \begin{bmatrix} x \\ y \end{bmatrix} 
\)

Teremos:

\[\vec{n}\cdot\vec{X} = 2x + y\\
\quad\\
r: \vec{n}\cdot\vec{X} = 0\]

Veja que **\(\vec{n}\) é vetor normal a \(r\)**

A norma euclidiana está principalmente ligada ao esquadro.

### Equação Vetorial

Dado um ponto \(X\), podemos escrever:

\[X = O + \overrightarrow{OX}\\ \quad\\ \overrightarrow{OX} = t\vec{v} \quad\\\iff \\
X = O +t\vec{v}\]

Temos que \(X\) é a equação vetorial de \(r\), \(0 \neq \vec{v}\) é um vetor diretor de \(r\) e \(t\) é o parâmetro.

### Equação Paramétrica

Se desenvolvemos a equação vetorial, chegamos na versão paramétrica.

Seja \(\vec{v} = \begin{bmatrix} -1 \\ 2 \end{bmatrix}\). Podemos escrever que:

\[\begin{aligned}
(x, y) &= (0,0) + t \cdot \begin{bmatrix} -1 \\ 2 \end{bmatrix}\\
&= (0-t, 0+2t)\\
&= (-t,2t), \quad t \in \mathbb{R}
\end{aligned}
\]

**Exemplo:** Seja \(r: 2x+ y = 5, \quad P = (0,5) \implies y = 2x+5, \quad \left(\dfrac{5}{2}, 0\right)\)

\(\vec{n}\cdot\overrightarrow{PX} = 0 \text{ equação normal}\\ \quad\\ \overrightarrow{PX}= X - P = [x, y-5]\)

Vamos verificar!

\[\begin{bmatrix} 2 \\ 1 \end{bmatrix}\cdot \begin{bmatrix} x \\ y-5 \end{bmatrix} = 2x+y-5=0 \implies 2x+y = 5\]

### Definição

A equação da reta \(r\) na forma normal passando pelo ponto \(P\) e com vetor normal \(\vec{n}\) é

\[\vec{n}\cdot\overrightarrow{PX} = 0\]

sendo \(X=(x,y)\) um ponto genérico de \(r\), válido para \(\mathbb{R^2}\)

### Equação Geral da Reta de \(r\)

\[ax+by = c\]

com \(\vec{n} = \begin{bmatrix} a \\ b \end{bmatrix}\) o vetor normal.

### A equação geral vetorial de \(r\)

\[X = P + t\vec{v}, \quad t \in \mathbb{R}\\
X = (x,y,z), \quad P = (x_0, y_0, z_0) \quad \vec{v} = \begin{bmatrix} a \\ b \\ c \end{bmatrix}\]

Teremos que a equação paramétrica será

\[\begin{aligned}
(x,y,z) &= (x_0, y_0, x_0) + t \cdot \begin{bmatrix} a \\ b \\ c \end{bmatrix}\\
&= (x_0 + ta, y_0 + tb, z_0 + tc)\\
\end{aligned}
\]

**Exemplo:** Determine a equação vetorial da reta passando por \(A = (-1, 2, 3)\) e \(B = (0,1,4)\)

Vamos utilizar a *notação de Grassmann*:

\[\begin{aligned}
\vec{v} &= \overrightarrow{AB} = B - A\\
&= [0,1,4] - [-1,2,3]\\
&= [1,-1,1]\\
\end{aligned}
\]

\[r: X = (x,y,z) = (-1,2,3) + t\begin{bmatrix} 1 \\ -1 \\ 1 \end{bmatrix}, \quad t \in \mathbb{R}\]

\[
\left\{
\begin{array}{l}
x = -1 + t \\
y = 2 - t, \quad t \in \mathbb{R}, \quad \text{eq. paramétrica} \\
z = 3 + t\\
\end{array}
\right.
\]

Vamos verificar se \(Q = (7,10,5)\) está em \(r\)?

\[
\left\{
\begin{array}{l}
7 = -1 + t \\
10 = 2 - t  \implies t = 8 = -8, \text{ absurdo!!}\\
5 = 3 + t\\
\end{array}
\right.
\]

Logo \(Q\) não está em \(r\)

### Equação Simétrica

Seja uma reta com vetor diretor \(\vec{v} = \begin{bmatrix} a \\ b \\ c \end{bmatrix}\) e \(a,v,c \neq 0\). Seja \( P=(x,y,z) \) em \(r\).

Vamos isolar o parâmetro \(t\) nas equações paramétricas. Iremos obter:

\[r: \dfrac{x-x_0}{a} = \dfrac{y-y_0}{b} = \dfrac{z-z_0}{c}\]

Teste para ponto \(Q = (7,10,5), (-3,6,9)\)