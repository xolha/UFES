#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    double raiz1 = sqrt(a);
    double raiz2 = sqrt(b);

    double soma_Raizes = raiz1 + raiz2;
    printf("%.2f", soma_Raizes);

    return 0;
}