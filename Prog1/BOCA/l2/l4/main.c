#include <stdio.h>

int main() {
    //primeio declarar uma variavel a, maior e a media
    //segundo ler tudo isso aí
    //terceiro fazer o while com scanf, ler o maior numero e a media ENQUANTO não for 0
    int a, maior = 0, i = 1;
    float media = 0, soma = 0;

    do {
        scanf("%d", &a);

        if ( a == 0 ) {
            return 0;
        }

        if ( a > maior ) {
            maior = a;
        }

        soma = a + soma;

        media = soma/i;
        
        printf("%d %.6f\n", maior, media);

        i++;

    } while ( a !=0 );

    return 0;
}