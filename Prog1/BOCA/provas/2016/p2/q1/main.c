#include <stdio.h>

//contexto: dado um numero q indicará a sequencia, dizer a quantidade de pares e a quantidade de impares

int main() {
    //primeiro declarar uma variavel principal, e a sequencia qtdPares, qtdImpares, e uma auxliar do fr e pro while
    //ler a primera
    //verificar se esse numero é par ou impar
    //fazer o while da sequencia
    //dentro dele verificar a quantidade de pares
    int a, b, qtdPares = 0, qtdImpares = 0, contador = 0, i = 0, primeiro = 0;
    
    scanf("%d", &a);

    while (contador < a ){
        scanf("%d", &b);

        if (contador == 0) {
            primeiro = b;
        }

        if ( b % 2 == 0) {
            qtdPares++;
        } else {
            qtdImpares++;
        }

        contador++;
    }

    if (primeiro % 2 == 0) {
        printf("QTD PARES:%d", qtdPares);
    } else {
        printf("QTD IMPARES:%d", qtdImpares);
    }

    return 0;
}