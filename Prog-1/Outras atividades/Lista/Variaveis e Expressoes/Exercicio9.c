#include <stdio.h>

int main () {
    float temp;

    //entrada
    scanf("%f",  &temp);

    //saida
    printf(".2f (C)", temp - 273.15);

    return 0;
}