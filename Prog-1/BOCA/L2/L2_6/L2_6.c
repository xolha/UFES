#include <stdio.h>
#include <math.h>

int main() {
    int n, num, deno;
    double S1 = 0.0, S2 = 0.0, S3 = 0.0;

    //entrada
    scanf("%d", &n);

    //condicao
    if ( n == 1 ) {
        for ( num = 1, deno = 1; deno <= 50.0; num += 2, deno++ ) {
            S1 += (double) num / deno;
        }
        printf("%.6f", S1);
    } else if ( n == 2 ) {
        for ( num = 1, deno = 50; num <= 50.0; num++, deno--) {
            S2 += (double) pow(2,num) / deno;
        }
        printf("%.6f", S2);
    } else if ( n == 3 ) {
        for ( num = 1, deno = 1; num <= 10; num++, deno++) {
            S3 += (double) num / pow(deno,2);
        }
        printf("%.6f", S3);
    }

    return 0;
}