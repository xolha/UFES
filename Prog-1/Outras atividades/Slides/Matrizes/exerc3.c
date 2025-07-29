#include <stdio.h>

#define N 2
#define M 3

void Inicializa(int mat[][M], int linhas, int cols) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < cols; j++) {
            //mat[i][j] = i + j;
            scanf("%d", &mat[i][j]);
        }
    }
}

void Imprimir (int mat[][M], int linhas, int cols) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int soma (int mat[][M],int linhas, int cols) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        soma += mat[i][cols];
    }
    return soma;
}

int somaMatriz (int mat[][M], int mat2[][M], int matSoma[][M]) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {

        }
    }
}

int main() {
    int mat[N][M] = 0;
    Inicializa(mat, N, M); //isso significa colocar 0 em todas as posições da matriz
    Imprimir(mat, N, M);

    printf("Soma = %d\n", soma(mat, N, M));

    int mat2[N][M] {0};
    Inicializa(mat2, N, M);
}