#include <stdio.h>
#include <math.h>

int main() {
    //variaveis
    float x1, y1, x2, y2, p;


    //entrada
    printf("Insira as coordenadas (x,y) dos cantos inferior esquerdo e superior direito do retangulo para calcular seu perimetro: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    //operacao
    p = x1 + y1 + x2 + y2;

    //saida
    printf ("O perimetro foi de %.2f", p);

return 0;
}