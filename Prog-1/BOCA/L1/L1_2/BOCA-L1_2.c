#include <stdio.h>
#include <math.h>

int main() {
    //variaves
    float altura;
    float largura;

    //entrada
    printf("Insira uma altura de um retangulo para calcular seu perimetro: ");
    scanf("%f", &altura);

    printf("agora insira uma largura: ");
    scanf("%f", &largura);

    //saida
    printf("O perimetro do retangulo eh %.2f", ( 2 * altura + 2 *largura));

    return 0;
}
