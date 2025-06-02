#include <stdio.h>

int main () {
    int n, maior = 0, contador = 0;
    double media, soma = 0;

    //condicao
    do {
        scanf("%d",&n);

        if ( n == 0 ) { //condicao
            break;
        }

        if ( contador == 0 || n > maior) { //sair o maior numero
            maior = n;
        }

        soma = soma + n; //somar o valor anterior com o antigo e adicionar +1 ao contador
        contador++;

        media = soma / contador;

        printf("%d %.6f\n", maior, media);
    } while ( 1 );

    return 0;
}