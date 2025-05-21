#include <stdio.h>

int main () {
    float temperatura;

    //entrada
    scanf("%f", &temperatura);

    //saida
    printf("%.2f (F)", 5 * ( temperatura - 32.0) / 9.0 );

    return 0;
}