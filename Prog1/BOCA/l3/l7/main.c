#include <stdio.h>

int area (int x1, int y1, int x2, int y2);
int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2); 

/*
Problema: Dado as coordenadas x e y das extremidades inferior 
esquerda e superior direita de dois retângulos, calcule a área total ocupada por eles. 
a) O  cálculo  da  área  total  deverá  ser  realizado  por  uma  função  (a ser  implementada) 
que  receberá  as  coordenadas  das  extremidades  de  cada  retângulo  e  retornará  o 
resultado. A função deverá ter o seguinte cabeçalho: 
int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2); 
b) O  cálculo  da  área  de  um  retângulo  deverá  ser  realizado  por  uma  função  (a  ser 
implementada)  que  receberá  as  coordenadas  das  extremidades  desse  retângulo  e 
retornará o resultado. A função deverá ter o seguinte cabeçalho: 
int area (int x1, int y1, int x2, int y2);
*/

int main() {
    int r1_x1, r1_y1, r1_x2,r1_y2;
    int r2_x1, r2_y1, r2_x2, r2_y2;

    scanf("%d %d %d %d", &r1_x1, &r1_y1, &r1_x2,&r1_y2);
    scanf("%d %d %d %d", &r2_x1, &r2_y1, &r2_x2,&r2_y2);

    int areaTotal = area_total(r1_x1, r1_y1, r1_x2, r1_y2, r2_x1, r2_y1,r2_x2, r2_y2);
    printf("RESP:%d", areaTotal);

    return 0;
}

int area (int x1, int y1, int x2, int y2){
    int distanciaX, distanciaY;

    //calcula a distancia baseado nas diferenças de X's e Y's
    distanciaX = x2 - x1;
    distanciaY = y2 - y1;

    return distanciaX * distanciaY;
}

int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2){
    //calcula cada uma das areas baseado na função acima
    int area1 = area(r1_x1, r1_y1, r1_x2,r1_y2);
    int area2 = area(r2_x1, r2_y1, r2_x2, r2_y2);

    //caso as arestas se encontrem
    int largura = r1_x2 - r2_x1;
    int altura = r1_y2 - r2_y1;

    //descobre se tem intersecção
    int interseccao;
    
    //ela é justamente uma area interna, por isso  a multiplicação

    if(largura > 0 && altura > 0) {
        interseccao = largura * altura;
    } else {
        interseccao = 0;
    }

    return area2 + area1 - interseccao;
}