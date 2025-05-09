#include <stdio.h>
#include <math.h>

int main() {
    //variaves
    float altura;
    float largura;

    //entrada
    //"Insira uma altura e uma largura de um retangulo para calcular seu perimetro"
    scanf("%f %f", &altura, &largura);

    //saida
    // "O perimetro do retangulo eh"
    printf( "%.2f", ( 2 * altura + 2 *largura));

    return 0;
}
