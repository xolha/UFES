#include <stdio.h>

int main () {
    int n;

    //entrada
    scanf("%d", &n); //importante: lembrar que esse n serve somente para a entrada

    //saida
    for ( int i = 1 ; i <= n ; i++) {
        if ( i % 2 == 1 ) { //e que o 'i' eh quem deve ficar neste lugar
            printf("%d ", i);
        }
    }

    return 0;
}