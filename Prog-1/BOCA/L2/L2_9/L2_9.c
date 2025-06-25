#include <stdio.h>

int main() {
    int n, m, ehPrimo, i, j, temMultiplo;
    //entrada
    scanf("%d %d", &n, &m);

    for (i = n+1  ; i < m; i++) {
        //intervalos abertos
        ehPrimo = 1;

        for ( j = 2; j < i ; j++) { //descobrir se o numero é primo
            if (i % j == 0) {
                ehPrimo = 0; //nao primo
                break;
            }
        }

        if (ehPrimo) { //se for primo
            printf("%d\n", i);

            temMultiplo = 0; //verificar se ha multiplos
            for ( j = 2; i * j < m; j++) {
                if ( i * j > n ) {
                    printf("%d ", i * j);
                    temMultiplo = 1;
                }
            }

            if (!temMultiplo) {
                printf("*"); //caso nao tenha
            }

            printf("\n");
        }
    }
    return 0;
}