#include <stdio.h>

//contexto: dado um intervalo aberto, dizer quais numeros são multipos de 3, 4 ou 7

int main() {
    //primeiro declaar 2 numeros
    //segundo ler eles
    //terceiro fazer a veriifcação de maior
    //quarto o for com quem é o multiplo de 3, 4 ou 7
    int a=0, b=0, menor, maior, i =0;
    scanf("%d %d", &a, &b);

    if ( a > b ) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    for ( i = menor + 1; i < maior; i++ ) {
        if ( i % 3 == 0 || i % 4 == 0 || i % 7 == 0 ) {
            printf ("%d ", i);
        }
    }

    return 0;
}