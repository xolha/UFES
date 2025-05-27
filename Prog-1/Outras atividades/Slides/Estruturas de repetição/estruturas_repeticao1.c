#include <stdio.h>

int main() {
    int  i;

    //for
    for ( i = 1 ; i <= 100 ; i++ ) {
        printf("%d ", i);
    }

    //while
    while ( i <= 100) {
        printf("%d ", i);
    }

    //do-while
    do {
        i = i + 1;
        printf("%d", i);
    } while ( i <= 100 );

    return 0;
}