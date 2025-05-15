#include <stdio.h>

int main() {
    int x1, y1, x2, y2, p1, p2;

    //entrada
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &p1, &p2);

    //contas
    int xmin = (x1 < x2) ? x1 : x2;
    int xmax = (x1 > x2) ? x1 : x2;
    int ymin = (y1 < y2) ? y1 : y2;
    int ymax = (y1 > y2) ? y1 : y2;

    //saida
    if (p1 >= xmin && p1 <= xmax && p2 >= ymin && p2 <= ymax) {
        printf("Dentro\n");
    } else {
        printf("Fora\n");
    }

    return 0;
}