#include <stdio.h>

int verificaPrimo(int n) {
    if ( n < 2 ) { //é interessante usar desta forma já que ele analisa somente os positivos e exclui o 1, afinal, ele não é primo
        return 0;
    }

    int j;
    for ( j = 2 ; j * j <= n  ; j++ ) { //a lógica de usar j*j é que se nenhum número for divisível até a sua raíz quadrada, então ele é primo! caso contrário, ele não é primo
        if ( n % j == 0 ) {
            return 0;
        }
    }

    return 1;
}

int transformaPrimo(int n) {
    if (verificaPrimo(n > 0 ? n : -n)) {
        return n;
    }
    //numero positivo
    if ( n > 0 ) {
        int primoPositivo = n + 1;
        while ( primoPositivo <= 32000 ) {
            if ( verificaPrimo(primoPositivo) ) {
                return primoPositivo;
            }
            primoPositivo++;
        }
        return n; //caso não tenha encontrado nenhum
    } else if ( n < 0 ) {
        int negativo = -n;
        int primoNegativo = negativo + 1;
        while ( primoNegativo <= 32000 ) {
            if ( verificaPrimo(primoNegativo) ) {
                return -primoNegativo;
            }
            primoNegativo++;
        }
        return n; //caso não tenha encontrado nenhum
    }

   if ( n == 0 ) {
       int k = 2;
       return k;
   }
    return n;
}

int verificaNegativo(int n) {
    return (n < 0) ? 1 : 0;
}

int main() {
    int a, b;
    int i, j;

    scanf("%d %d", &a, &b);

    for ( i = 0 ; i < a ; i++ ) {
        for ( j = 0 ; j < b ; j++ ) {
            int n;
            scanf("%d", &n);
            n = transformaPrimo(n);
            printf("%d ", n);
        }
        printf("\n");
    }


    return 0;
}