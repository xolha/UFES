#include <stdio.h>
#include <math.h>

int main() {
    int n, k = 1 ;
    double divisao = 0.0, raiz;

    //entrada
    scanf("%d", &n);

    //condicao
    do {
        divisao += 6.0 / ( k * k );
        k++; //soma +1 ao valor antigo de k
        raiz = sqrt(divisao);

    } while ( k <= n );

    //saida
    printf("%.6f", raiz);

    return 0;
}