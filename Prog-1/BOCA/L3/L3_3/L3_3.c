#include <stdio.h>

int ehPrimo(int num) {
    if ( num <=1 ) return 0;

    for ( int j = 2 ; j < num ; j++ ) { //verificando a veracidade de ser primo
        if ( num % j == 0) {
            return 0;
        }
    }
    return 1;
}

    int main() {
        int n, m;
        scanf("%d %d", &n, &m);

        for ( int i = n + 1 ; i < m ; i++ ) {
            if (ehPrimo(i)) {
                printf("%d ", i);
            }
        }

        return 0;
    }