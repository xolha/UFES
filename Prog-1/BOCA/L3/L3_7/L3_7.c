#include <stdio.h>

int area (int x1, int y1, int x2, int y2) { //area do retângulo separado

    return (y2 - y1) * (x2 - x1);
}

int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2) { //area total
    int area1 = area(r1_x1, r1_y1, r1_x2, r1_y2); //para utilizar uma função na outra, é só pegar o nome da função deseja e colocar os novos parâmentros dentro dos parênteses
    int area2 = area(r2_x1, r2_y1, r2_x2, r2_y2);

    int largura = (r1_x2 < r2_x2 ? r1_x2 : r2_x2) - (r1_x1 > r2_x1 ? r1_x1 : r2_x1);
    int altura  = (r1_y2 < r2_y2 ? r1_y2 : r2_y2) - (r1_y1 > r2_y1 ? r1_y1 : r2_y1);

    int interseccao = (largura > 0 && altura > 0) ? largura * altura : 0;

    return area1 + area2 - interseccao;
}


int main() {
    int R1_x1, R1_y1, R1_x2, R1_y2;
    int R2_x1, R2_y1, R2_x2, R2_y2;

    scanf("%d %d %d %d", &R1_x1, &R1_y1, &R1_x2, &R1_y2);
    scanf("%d %d %d %d", &R2_x1, &R2_y1, &R2_x2, &R2_y2);

    printf("RESP:%d\n", area_total(R1_x1, R1_y1, R1_x2, R1_y2, R2_x1, R2_y1, R2_x2, R2_y2));

    return 0;
}