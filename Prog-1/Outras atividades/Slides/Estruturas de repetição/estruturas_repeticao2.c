#include <stdio.h>

int main () {
    int n, i;

    //entrada
    scanf("%d", &n);

    //saida
    for ( i = 1 ; i <= n ; i++) {
        if ( n % 2 == 1 ) {
            printf("%d\n", i);
        }
    }

    return 0;
}