#include <stdio.h>

    //contexto: perimetro através de coordenadas

int main() {
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    float perimetro = 2* (- x1 + x2) + 2 * ( - y1 + y2);

    printf("%.2f", perimetro);

    return 0;
}