#include <stdio.h>
#include <math.h>
#define pi 3.141592

    //contexto: calcular a area de um circulo e um raio de outro circulo com metade da area encontrada

int main() {
    //primeiro é declarar o valor de pi e o raio
    float r1;
    //segundo ler esses dois valores
    scanf("%f", &r1);
    //terceiro calcular a area do circulo1
    float area = pi * r1 * r1;

    //quarto calcular o raio a partir da metade da area do primeiro circulo
    float r2 = sqrt((area/2.0)/pi);

    //printar
    printf("%.2f %.2f", area, r2);


    return 0;
}