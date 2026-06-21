#include <stdio.h>

/*
Entrada: um número N representando a quantidade de pares de matrizes a serem 
multiplicados seguido de N pares de matrizes. Um par de matrizes é dado por duas matrizes 
na  sequência,  e  cada  matriz  é  descrita  por  um  C  (número  de  colunas)  e  um  L  (número  de 
linhas) seguidos do conteúdo em si. 
 Saída:  A  matriz  resultante  de  cada  multiplicação,  ou  “IMPOSSIVEL”  caso  não  seja  possível 
multiplicar. Uma linha vazia deve separar uma matriz da outra.  
*/

int main() {
    int n, i, j, k, l, m;
    scanf("%d", &n);

    int matrizes = n * 2, coluna1 = 0, linha1 = 0, linha2 = 0, coluna2 = 0;
    
    //ler as matrizes juntas
    for (i = 0; i < n; i++){
        
        //ler por pares
            scanf("%d", &coluna1);
            scanf("%d", &linha1);

            int  matriz1[linha1][coluna1];
            //le a primeira matriz
            for (k = 0; k < linha1; k++){
                for(l = 0; l < coluna1; l++){
                    scanf("%d ", &matriz1[k][l]);
                }
            }

            scanf("%d", &coluna2);
            scanf("%d", &linha2);

            int  matriz2[linha2][coluna2];
            //le a segunda matriz
            for (k = 0; k < linha2; k++){
                for(l = 0; l < coluna2; l++){
                    scanf("%d ", &matriz2[k][l]);
                }
            }

            if (coluna1 != linha2){
                printf("IMPOSSIVEL\n");
                printf("\n");
            } else {
                //multiplica a primeira linha inteira por todas as colunas
                //terminou a linha 1, vai para a 2 e multplica todas as colunas até terminar
                //linha1 * coluna1 + linha2 * coluna2 ...
                int resultado[linha1][coluna2];
                for(k = 0; k < linha1; k++){
                    for (l = 0; l < coluna2; l++){
                        resultado[k][l] = 0;
                        for (m = 0; m < coluna1; m++){
                            resultado[k][l] += matriz1[k][m] * matriz2[m][l];
                        }
                        if (l > 0) printf(" ");  // espaço antes, não depois
                        printf("%d", resultado[k][l]);
                    }
                    printf("\n");
                }
                printf("\n");

            }
    }

    return 0;
}