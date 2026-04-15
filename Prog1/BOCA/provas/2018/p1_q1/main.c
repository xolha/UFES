#include <stdio.h>

//contexto: dado dois pontos extremos de um retangulo, dizer todos os pontos q o completa

int main() {
    //primeiro declara 4 variaveis
    //segundo ler 4 variaveis
    //terceiro só printar na hordem
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2 );

    int maiorX, maiorY, menorY, menorX;

    if ( x1 < x2) {
        maiorX = x2,
        menorX = x1;
    } else {
        maiorX = x1;
        menorX = x2;
    }

    if ( y1 < y2 ) {
        menorY = y1;
        maiorY = y2;
    } else {
        maiorY = y1;
        menorY = y2;
    }

    printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)\n", menorX, maiorY, menorX, menorY, maiorX, menorY, maiorX, maiorY );

    return 0;
}