#include <stdio.h>

//contexto: dizer se duas retas tem o mesmo coeficiente angular

int main() {
    //primeiro declarar as 8 variaveis
    //segundo ler todas as variaveis
    //terceiro fazer a conta verificando o coeficiente angular de cada reta -> levar em consideração quando alguma parte da divisão for 0
    //fim: comparar os coeficentes angulares
    int x1R1, x2R1, y1R1, y2R1, x1R2, x2R2, y1R2, y2R2;
    scanf("%d %d %d %d %d %d %d %d", &x1R1, &y1R1, &x2R1, &y2R1, &x1R2, &y1R2, &x2R2, &y2R2 );
   
    if ( ((x2R2 - x1R2 == 0) && (y2R1 - y1R1 == 0)) || ((x2R1 - x1R1 == 0) && (y2R2 - y1R2 == 0)) ) {
        printf("PERPENDICULARES");
    } else {
        float M1 = (float)(y2R1 - y1R1)/(x2R1 - x1R1);
        float M2 = (float)(y2R2 - y1R2)/(x2R2 - x1R2);

        if ( M1 == M2) {
            printf("PARALELAS");
        } else if ((M1 * M2 == -1.0) || (M1 == 1 && M2 == 0) || (M1 == 0 && M2 == 1)) {
            printf("PERPENDICULARES");
        } else {
            printf("NENHUM");
        }
    }

    return 0;
}