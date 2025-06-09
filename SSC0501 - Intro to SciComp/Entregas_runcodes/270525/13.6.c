//Durante uma missão de exploração intergaláctica, a nave OrtoBot está navegando por regiões desconhecidas do espaço. Para evitar colisões com detritos espaciais, o computador de bordo precisa calcular com precisão a menor distância entre a posição atual da nave e uma trajetória retilínea detectada pelos sensores.

//Essas trajetórias são representadas por retas no espaço tridimensional, e a posição da nave por um ponto no espaço. Cada reta é definida por um ponto pertencente à reta e um vetor diretor.

//Sua missão é desenvolver um programa que calcule a menor distância entre um ponto e uma reta no espaço tridimensional. Para isso, é obrigatório o uso de struct para representar separadamente:

//um ponto no espaço tridimensional,
//um vetor tridimensional,
//uma reta tridimensional (composta por um ponto e um vetor diretor).

//Entrada
//A entrada consiste em uma única linha com 9 números reais Exp, representando:

//as coordenadas do ponto P(xp, yp, zp);
//as coordenadas do ponto R(x0,y0,z0) pertencente à reta,
//o vetor diretor v(vx,vy,vz) da reta.

//Os valores são fornecidos com até 4 casas decimais.

//Saída
//Seu programa deve imprimir uma única linha com a menor distância entre o ponto e a reta, com 6 casas decimais de precisão.

//Restrições

//-1000 <= xp, yp, zp, x0, y0, z0, vx, vy, vz <= 1000

//O vetor diretor v não será o vetor nulo.

//Você deve obrigatoriamente utilizar struct para representar:

//Ponto (x, y, z)
//Vetor (x, y, z)
//Reta (um Ponto e um Vetor)

#include <stdio.h>
#include <math.h>

struct Ponto {
    double x;
    double y;
    double z;
};

struct Vetor {
    double x;
    double y;
    double z;
};

struct Reta {
    struct Ponto ponto;
    struct Vetor diretor;
};

double distanciaPontoReta(struct Ponto p, struct Reta r) {
    struct Vetor ap = {p.x - r.ponto.x, p.y - r.ponto.y, p.z - r.ponto.z};
    double produtoEscalar = ap.x * r.diretor.x + ap.y * r.diretor.y + ap.z * r.diretor.z;
    double normaDiretor = sqrt(r.diretor.x * r.diretor.x + r.diretor.y * r.diretor.y + r.diretor.z * r.diretor.z);
    
    double distancia = sqrt(ap.x * ap.x + ap.y * ap.y + ap.z * ap.z - (produtoEscalar / normaDiretor) * (produtoEscalar / normaDiretor));
    return distancia;
}

int main() {
    struct Ponto ponto;
    struct Reta reta;

    // Leitura do ponto P
    scanf("%lf %lf %lf", &ponto.x, &ponto.y, &ponto.z);
    
    // Leitura do ponto R e do vetor diretor v
    scanf("%lf %lf %lf %lf %lf %lf", 
          &reta.ponto.x, &reta.ponto.y, &reta.ponto.z,
          &reta.diretor.x, &reta.diretor.y, &reta.diretor.z);

    // Cálculo da menor distância
    double distancia = distanciaPontoReta(ponto, reta);

    // Impressão do resultado com 6 casas decimais

    if (isnan(distancia)) {
        distancia = 0.000000; 
    }

    printf("%.6lf\n", distancia);

    return 0;
}