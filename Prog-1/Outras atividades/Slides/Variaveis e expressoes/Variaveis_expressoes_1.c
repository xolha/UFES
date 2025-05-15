#include <stdio.h>

int main () {
    int a = 14, b = 13, x = a / b, y = a % b;
    float z = y / x;

    //saida
    printf("%d %d %f", x, y, z);

    return 0;
}