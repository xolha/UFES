#include <stdio.h>

int main() {
    int n;

    //entrada
    scanf("%d", &n);

    //verificaçao para garantir que o numero seja positivo
    if (n <= 0 || n % 2 != 0) {
        printf("Erro: o número deve ser positivo e par");
        return 1;
    }

    //saida
    for ( int i = n; i >= 0 ; i--) {
        if ( i % 2 == 0 ) {
            printf("%d ", i);
        }
    }

    return 0;
}