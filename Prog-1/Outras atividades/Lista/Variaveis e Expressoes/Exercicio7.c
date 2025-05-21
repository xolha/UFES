#include <stdio.h>

int main () {
    float temperatura;

    //entrada
    scanf("%f)", &temperatura);

    //saida
    printf("%f (F)", temperatura * ( 9.0 / 5.0) + 32 );

    return 0;
}