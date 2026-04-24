#include <stdio.h>

//contexto: selecionar os numeros pares de um intervao aberto

int main() {
    //primeiro declarar dois caracteres
    //segundo ler eles
    //terceiro fazer a verificação do maior
    //fazer o for com a verificação dos pares
    int a = 0, b = 0, maior, menor, i;
    scanf("%d %d", &a, &b);

    if ( a > b ) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }
    
    printf("RESP:");
    for ( i = menor + 1; i < maior; i++) {
        if ( i % 2 == 0) {
            printf("%d ", i);
        } else {
            continue;
        }
    }

    return 0;
}