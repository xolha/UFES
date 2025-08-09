//SOMAR TODOS OS ELEMENTOS DE UMA MATRIZ

#include <stdio.h>

int main() {
    int mat[3][3];
    int soma = 0;
    int i, j;

    for ( i = 0 ; i < 3 ; i++ ) {
        for  ( j = 0 ; j < 3 ; j++ ) {
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
        }
    }
    printf("%d\n", soma);

    return 0;
}