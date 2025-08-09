#include <stdio.h>

int ehPrimo(int num) {
    if ( num <= 1) return 0; //caso seja negativo, nem continua

    for ( int j = 2 ; j < num ; j++ ) {
        if ( num % j == 0 ) {
            return 0;
        }
    }
    return 1;
}

void ImprimeMultiplos(int num, int max) {
    int temMultiplo = 0; //ja começa com 0 pra ver se tem multiplo

    for ( int j = 2 ; num * j  < max ; j++ ) {
        printf("%d ", num * j);
        temMultiplo = 1; //entao é verdade, tem multiplo
    }
    if (!temMultiplo) {
        printf("*\n");
    } else {
        printf("\n");
    }

}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for ( int i = n + 1 ; i < m ; i++) {
        if ( ehPrimo(i) ) {
            printf("%d\n", i); //para o primo
            ImprimeMultiplos(i, m); //para o multiplo
        }
    }
}