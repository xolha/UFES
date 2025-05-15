#include <stdio.h>

int main() {
    int numero, ordem, unidade;

    //entrada
    scanf("%d %d", &numero, &ordem);

    //contas
    if ( ordem == 1 ) {
        unidade = numero % 10;
    }
    else if ( ordem == 2 ) {
        unidade = ( numero / 10 ) % 10;
    }
    else if ( ordem == 3 ) {
        unidade = ( numero / 100 ) % 10;
    }

    //saida
    if ( unidade % 2 == 0 ) {
        printf("PAR");
    }
    else {
        printf("IMPAR");
    }

    return 0;
}