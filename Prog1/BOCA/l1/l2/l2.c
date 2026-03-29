#include <stdio.h>

int main() {
    float l1, l2;

    scanf("%f %f", &l1, &l2);

    float perimetro = l1 * 2 + l2 * 2;
    
    printf("%.2f", perimetro);

    return 0;
}