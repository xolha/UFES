//IMPRIMIR A DIAGONAL DE UMA MATRIZ 3X3

#include <stdio.h>

int main() {
    int mat[3][3];

    for ( int i = 0 ; i < 3 ; i++) {
        for (int j =0 ; j < 3 ; j++) {
            scanf("%d",&mat[i][j]);
        }
    }

    //diagonal principal
    printf("Diagonal principal: ");
    for ( int i = 0 ; i < 3 ; i++) { //é bontinho como ele entende q isso é a diagonal
        printf("%d ",mat[i][i]);
    }

    return 0;
}