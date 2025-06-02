#include <stdio.h>

int main() {
    double salario = 2000 + 1.5/100;

    do {
        salario = salario * 2;
        printf("%.2f\n", salario);
    } while (salario <= 100000);

    return 0;
}