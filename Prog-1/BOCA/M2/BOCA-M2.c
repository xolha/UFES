#include <stdio.h>
#include <stdlib.h>

int main () {
    //variaveis
    float n1, real;
    int inteiro;

    //entrada
    //"Um numero real
    scanf("%f", &n1);

    //operacao
    inteiro = (int) n1;
    real = n1 - inteiro;

    //saida
    printf("INTEIRO:%d,REAL:%.2f\n", inteiro, real);

return 0;
}
