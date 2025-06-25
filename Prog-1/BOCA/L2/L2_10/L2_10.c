#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, m, i;
    //entrada
    scanf("%d %d", &n, &m);

    for ( i = n ; i <=m; i++) { //intervalo fechado
        printf("%dx1=%d\n", i, i * 1 );
        printf("%dx2=%d\n", i, i * 2 );
        printf("%dx3=%d\n", i, i * 3 );
        printf("%dx4=%d\n", i, i * 4 );
        printf("%dx5=%d\n", i, i * 5 );
        printf("%dx6=%d\n", i, i * 6 );
        printf("%dx7=%d\n", i, i * 7 );
        printf("%dx8=%d\n", i, i * 8 );
        printf("%dx9=%d\n", i, i * 9 );
        printf("%dx10=%d\n", i, i * 10 );
    }
    return 0;
}
