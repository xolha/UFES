#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i;
    //entrada
    scanf("%d %d", &n, &m);

    //separar numeros
        for ( i = n + 1 ; i < m ; i++) {
            int ab = i / 100; //separando a primeira parte
            int cb = i % 100; //separando a segunda
            int ef = ab + cb; //multiplicação
            if ( ef * ef == i ) {
                printf("%d\n", i); //conferindo
            }
        }
    return 0;
}