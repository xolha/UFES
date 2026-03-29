#include <stdio.h>

int main() {
    float real;
    scanf("%f", &real);
    int inteiro = real;

    float transform = - inteiro + real;

    printf("INTEIRO:%d,REAL:%.2f", inteiro, transform);

    return 0;
}