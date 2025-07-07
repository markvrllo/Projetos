<style>
pre {
    white-space: pre-wrap;       /* CSS3 */
    white-space: -moz-pre-wrap;  /* Firefox */
    white-space: -pre-wrap;      /* Opera <7 */
    white-space: -o-pre-wrap;    /* Opera 7 */
    word-wrap: break-word;       /* IE */
}
</style>

# SCC0501-Introdução à Ciência da Computação

## Aula 1

### Problemas a serem resolvidos

1.1) Elaborar um algoritmo que calcula a área de um triângulo.

```
INICIA
DECLARA area, base, altura
LEIA base, altura
area <- base*altura*0.5
ESCREVE "A área do triângulo é " + "area"
FIM
```

1.2) Ler uma temperatura em graus Celsius e convertê-la em Fahrenheit. 
	F = (C*9)/5+32

```
INICIA
DECLARA celsius, fahrenheit
LEIA celsius
fahrenheit <- (celsius*9)/5 + 32
ESCREVE "A temperatura dada, em F, será de " + "fahrenheit " + "Fahrenheit"
FIM
```

1.3) Uma empresa contrata um encanador a R$ 200,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador e imprima o valor líquido a ser pago, sabendo que são descontados 25% de imposto de renda e 11% de contribuição previdenciária.

```
INICIA
DECLARA dias, totalLiquido, total
LEIA dias
totalLiquido <- 200*dias*0.64
ESCREVE "O total a pagar para o encanador, descontados impostos e INSS, será de " + "totalLiquido" 
FIM
```

1.4- Um pintor precisa calcular um orçamento que inclui o custo do material e da mão de obra. Ele irá pintar várias paredes idênticas, sendo que:

- Uma lata de tinta custa R$ 20,00 e cobre um área de 5 m².
- O pintor cobra R$ 30,00 por hora de trabalho, sendo que ele pinta 10m² em uma hora.
- Baseado na altura, largura e no número de paredes, calcule o orçamento.

O código abaixo está assumindo que as paredes sejam idênticas entre si, visto que esta-se definindo o número de paredes. Estamos assumindo que o pintor também goste de receber valores redondos, sem centavos, como todo prestador de serviço costuma cobrar.

```
INICIO
DECLARA n_paredes, altura, largura, custo, mao_de_obra
LEIA n_paredes, altura, largura
custo <- TETO[altura*largura*n_paredes/5]*20
mao_de_obra <- TETO[altura*largura*n_paredes/10]*30
ESCREVA "Você deverá cobrar o total de " + "custo + mao_de_obra"
ESCREVA "Lembre-se de separar " + "custo " + "reais do valor, pois serão gastos em latas de tinta"
FIM
```

2.1) Elaborar o algoritmo para resolver uma equação do segundo grau
Ax2 + Bx + C = 0

Os valores de A, B e C devem ser fornecidos pelo usuário

```
INICIO
DECLARE A, B, C, D, X1, X2
ESCREVA "Digite os coeficientes da equação:"

LEIA A, B, C

SE A == 0:
    ESCREVA "A não pode ser zero, senão não é mais uma equação de 2º grau"
SENAO
    CONTINUE

D <- B*B - 4*A*C

SE D >= 0:
ENTAO
    X1 <- [-B + raiz(D)]/[2*A]
    X2 <- [-B - raiz(D)]/[2*A]
    ESCREVA "As raízes são X1: " X1 " e " X2 ""
SENAO
    ESCREVA "Não há raízes reais"
FIM
```

2.2) Crie um algoritmo que lê a nota de 3 provas e verifica se o aluno foi aprovado (média >= 5,0).

```
INICIO
DECLARA p1,p2,p3
LEIA p1,p2,p3
media <- (p1+p2+p3)/3
SE media >= 5.0:
ESCREVA "Aluno aprovado!"
SENAO
ESCREVA "Aluno Reprovado!"
FIM
```

2.3) Crie um algoritmo que lê 2 números e mostra o maior deles.

```
INICIO
DECLARA n1, n2
LEIA n1, n2

SE n1>n2:
ESCREVA "n1 " + "é maior que " + "n2"
Se n2>n1:
ESCREVA "n2 " + "é maior que " + "n1"
SENAO:
ESCREVA "Os números informados são idênticos!"
FIM
```


2.4) Faça um algoritmo para calcular o novo salário de uma pessoa. Sabe-se que para os funcionários que ganham até R$ 500,00 o aumento será de 20% e para os demais o aumento será de 10%.

```
INICIO
DECLARA salario0, novo_salario
LEIA salario0
SE salario0 <= 500.00
    novo_salario <-500*1.2
SENAO
    novo_salario <-salario0*1.1
ESCREVA "Seu novo salário será de " + "novo_salario"
FIM
```

2.5) Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu peso ideal, utilizando as seguintes fórmulas:
para homens:	(72.7 * Altura) – 58
para mulheres:	(62.1 * Altura) – 44.7

```
INICIO
DECLARA altura,sexo,peso_ideal
LEIA altura, sexo
SE sexo == "homem"
    peso_ideal = (72.7 * Altura) – 58
SE sexo == "mulher"
    peso_ideal = (62.1 * Altura) – 44.7
ESCREVA "Seu peso ideal é de " + "peso_ideal"
FIM
```

## Aulas Anteriores

As aulas anteriores explicavam sobre a aplicação de pseudocódigo. A Aula 2 em si, teremos a apresentação da linguagem C em questão, e resolução de exemplos de algoritmos em pseudocódigo.

## Aula 2

1.4- Um pintor precisa calcular um orçamento que inclui o custo do material e da mão de obra. Ele irá pintar várias paredes idênticas, sendo que:

- Uma lata de tinta custa R$ 20,00 e cobre um área de 5 m².
- O pintor cobra R$ 30,00 por hora de trabalho, sendo que ele pinta 10m² em uma hora.
- Baseado na altura, largura e no número de paredes, calcule o orçamento.

### Resolução Pintor

Em pseudocódigo, teremos que:

```
INICIO
DECLARA largura, altura, n_paredes, area_total, n_latas

area_total <- largura*altura*n_paredes
n_latas <- teto(area_total/5) //a função teto garante que o número de latas será acima do que iremos utilizar, caso a lata dê um número quebrado

custo_latas <- n_latas*20

custo_pintor <- (area_total / 10) * 30
```

> Tentar arrumar pro markdown não cortar o bloco de código com barra de rolagem
>

### Resolução Equação que resolve equação de segundo grau

Em pseudocódigo, teremos que:

```
INICIO
DECLARE A, B, C, D, X1, X2
ESCREVA "Digite os coeficientes da equação:"

LEIA A, B, C

D <- B*B - 4*A*C

Se D >= 0
Então
    X1 <- [-B + raiz(D)]/[2*A]
    X2 <- [-B - raiz(D)]/[2*A]
    ESCREVA "As raízes são X1: " X1 " e " X2 ""
SENAO
    ESCREVA "Não há raízes reais"
```

## Aula 3

Sintaxe de C

## Aula 4 - Estruturas Condicionais



## Aula 5

PS: Para maior precisão no cálculo de variáveis em C, utilize a variável double, pois tem maior precisão em casas decimais.

### Sugestões de temas para video de curricularização

Segue uma lista refinada de temas para vídeos curtos no estilo TikTok que integrem os conceitos de lógica digital e introdução à ciência da computação. Cada tema foi pensado para evidenciar como os fundamentos dos circuitos digitais se conectam com os princípios que regem os algoritmos, a programação e a arquitetura dos sistemas computacionais. Essas ideias podem funcionar como um trabalho de extensão conjunto para as duas disciplinas:

1. **Do 0 e 1 ao Algoritmo: A Base de Toda Computação**  
   *Mostre como o sistema binário (composto por 0 e 1) é a pedra angular tanto dos circuitos digitais quanto do desenvolvimento de algoritmos—demonstrando a transição entre o hardware que executa operações lógicas e o software que as utiliza.*

2. **Portas Lógicas e Controle de Fluxo: Ligando Hardware e Software**  
   *Apresente as portas lógicas (AND, OR, NOT) e faça um paralelo com estruturas de decisão em programação (if/else). Esse vídeo pode mostrar, de maneira dinâmica, como decisões baseadas em condições são fundamentais tanto no nível físico (circuitos) quanto no nível lógico (código).*

3. **Circuitos Digitais e o Funcionamento de um Processador**  
   *Explore como os componentes de um circuito digital se organizam para formar um processador. Esse tema pode incluir uma rápida visão sobre a arquitetura interna de um CPU e como as instruções são processadas utilizando lógica digital, conectando o conceito à execução de algoritmos.*

4. **Lógica Booleana: A Ponte Entre Hardware e Software**  
   *Demonstre como a lógica booleana é aplicada na criação de circuitos e também na formulação de algoritmos e regras de negócio em programação. Esse vídeo pode incluir exemplos simples de expressões booleanas aplicadas em ambos os contextos.*

5. **De Circuitos a Códigos: Mapeando Lógica Digital para Programação**  
   *Mostre um exemplo prático onde um circuito digital, com suas portas e sinais, é representado em código. Por exemplo, explique um circuito simples e, em seguida, apresente um pseudocódigo ou código em alguma linguagem que simule essa lógica.*

6. **Hardware vs Software: A Sinergia da Computação Moderna**  
   *Aborde a inter-relação entre o mundo físico (hardware) e o mundo dos algoritmos (software), ressaltando como a lógica digital implementada nos componentes de hardware possibilita o surgimento e a execução dos programas.*

Cada um desses temas é ideal para vídeos dinâmicos e curtos, permitindo uma abordagem visual e prática. Se precisar de mais detalhes sobre algum tema específico ou de sugestões para roteiros detalhados, posso ajudar a elaborar o conteúdo!

### Segunda iteração

Aqui está uma lista refinada de temas para vídeos curtos no estilo TikTok que integram conceitos de lógica digital e introdução à ciência da computação, mas explicados de forma simples e acessível até para quem não tem nenhum conhecimento técnico. Cada ideia utiliza analogias do cotidiano e exemplos visuais que fazem sentido para quem usa o celular para consumir conteúdo:

1. **De Zero a Um: A Magia dos Números no Seu Celular**  
   - **Descrição:** Explique como o sistema binário (apenas 0s e 1s) é a base de tudo em tecnologia, usando analogias simples – por exemplo, comparar 0 e 1 com os estados "desligado" e "ligado" de aparelhos.  
   - **Exemplo Visual:** Animações rápidas mostrando como, assim como uma lâmpada pode estar acesa ou apagada, os 0s e 1s se combinam para criar funções complexas.

2. **Decisões Digitais: O Sim e o Não do Mundo dos Computadores**  
   - **Descrição:** Aborde o funcionamento das portas lógicas (AND, OR, NOT) de forma bem simples, associando-as às escolhas do dia a dia, como decidir entre duas opções com base em respostas “sim” ou “não”.  
   - **Exemplo Visual:** Utilize situações cotidianas (um “sim” para ligar o alarme ou um “não” para ignorar a notificação) para mostrar como decisões simples formam a base das decisões em circuitos digitais.

3. **Por Dentro do Processador: O Coração do Seu Smartphone**  
   - **Descrição:** Mostre que, por detrás da tela do celular, existe um processador que funciona como um cérebro, coordenando tudo. Explique que esse "cérebro" é formado por circuitos que operam com base em lógica digital.  
   - **Exemplo Visual:** Um gráfico simples ou animação que demostre como vários "pequenos decisores" (portas lógicas) se unem para fazer seu celular funcionar.

4. **Lógica no Dia a Dia: Programação para Quem Não É Programador**  
   - **Descrição:** Demonstre como a lógica usada para tomar decisões no cotidiano (como “se chover, pegue o guarda-chuva”) é similar à lógica aplicada nos algoritmos e programas de computadores.  
   - **Exemplo Visual:** Um pequeno roteiro ilustrado onde uma decisão simples (if/else) é mostrada em duas situações: no mundo real e em um código simplificado, conectando o conhecido com o digital.

5. **Hardware e Software: A Dupla Invisível que Faz Tudo Acontecer**  
   - **Descrição:** Explique de forma descomplicada como o hardware (a parte física, como o processador e a memória do celular) trabalha em conjunto com o software (os aplicativos e sistemas operacionais) para proporcionar a experiência digital.  
   - **Exemplo Visual:** Compare o hardware a um corpo físico (como os músculos e ossos) e o software a uma mente ou cérebro, mostrando como ambos se complementam para o funcionamento harmônico do dispositivo.

6. **Pequenos Blocos, Grandes Funcionalidades: Entendendo os Bits e Bytes**  
   - **Descrição:** Mostre que cada pequeno bit (0 ou 1) se comporta como uma peça de LEGO que, quando combinada com várias outras, forma tudo o que vemos no mundo digital – das fotos aos aplicativos.  
   - **Exemplo Visual:** Um clipe rápido de peças de LEGO se juntando para formar um objeto complexo, fazendo a analogia com a construção de informações no computador.