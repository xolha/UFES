#include <stdio.h>

int main() {
    int n, m, i, j, ehPrimo;

    //entrada
    scanf("%d %d", &n, &m);

    printf("RESP:");
    //primo
    for ( i = n+1; i < m; i++) {
        //intervalo dos numeros
        ehPrimo = 1;  // caso seja primo


        for ( j = 2; j < i; j++) { //verificar se é primo
            if (i % j == 0) { //não é primo
                ehPrimo = 0;
                break;
            }
        }

        if (ehPrimo && i > 1) {
            printf("%d ", i);
        }
    }

    return 0;
}