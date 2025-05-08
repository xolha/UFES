#include <stdio.h>
#include <math.h>

int main() {
    //variaveis
    float r, a, r2, pi = 3.14159;;

    //entrada
    printf("Insira o valor do raio de um circulo: ");
    scanf("%f", &r);

    //operacoes

    a = pi * r * r;
    r2 = r / sqrt(2);

    //saida
    printf("O valor da area eh: %.2f, e o raio do circulo com metade desta area eh: %.2f", a, r2);

return 0;
}