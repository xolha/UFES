#include <stdio.h>
#include <math.h>

int main() {
    //variaveis
    float x1, y1, x2, y2, altura, largura, p;

    //entrada
    //"Insira as coordenadas (x,y) dos cantos inferior esquerdo e superior direito do retangulo para calcular seu perimetro: "
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    //operacao
    altura = x2-x1;
    largura = y2 - y1;
    p = 2* (altura + largura);

    //saida
    //"O perimetro foi de "
    printf ("%.2f",p);
return 0;
}