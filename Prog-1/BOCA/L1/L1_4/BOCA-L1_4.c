#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

int main() {
    //variaveis
    float r, a, r2;

    //entrada
    //"Insira o valor do raio de um circulo: "
    scanf("%f",&r);

    //operacoesm
    a = pi * r * r;
    r2 = sqrt((a / 2)/ pi);

    //saida
    //"O valor da area e do novo raio eh; "
    printf("%.2f %.2f\n", a, r2);

return 0;
}
