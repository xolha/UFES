#include <stdio.h>

//contexto: dizer se dois pontos estão contidos dentro de um retangulo

int main() {
    //primeiro delcarar todas as variveis
    //segundo ler todas as variaveis
    //terceiro vamos garantir quem é o x e o y maiores
    //quarto fazendo a troca para realmente garantir quem é o maior e o menor    
    int x1Ret, y1Ret, x2Ret, y2Ret, x, y;
    scanf("%d %d %d %d %d %d", &x1Ret, &y1Ret, &x2Ret, &y2Ret, &x, &y);
    
    int maiorX, maiorY, menorX, menorY;

    if ( x1Ret > x2Ret ){
        maiorX = x1Ret;
        menorX = x2Ret;
    } else {
        maiorX = x2Ret;
        menorX = x1Ret;
    }

    if ( y1Ret > y2Ret ){
        maiorY = y1Ret;
        menorY = y2Ret;
    } else {
        maiorY = y2Ret;
        menorY = y1Ret;
    }

    if ( x <= maiorX && x >= menorX && y <= maiorY && y >= menorY ) {
        printf("Dentro");
    } else {
        printf("Fora");
    }

    return 0;

}