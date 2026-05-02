#include <stdio.h>

//contexto: dizer a sequencia de numeros primos de um intervalo aberto

int main() {
    //primeiro declarar duas variaveis do intervalo e uma para o do primo;
    //segundo ler essas variaveis
    //fazer o for verificando se o numero NÃO for primo
    int a, b, ehPrimo = 1, i = 0, j = 0;

    scanf("%d %d", &a, &b);

    printf("RESP:");
    for ( i = a + 1; i < b; i++ ) {
        for ( j = 2; j < i ; j++) {
            if (i % j == 0 && j != 0) {
                ehPrimo = 0;
                break;
            } else {
                ehPrimo = 1;
            }
        }
        
        if (ehPrimo) {
            printf("%d ", i);
        }
    }

    return 0;
}