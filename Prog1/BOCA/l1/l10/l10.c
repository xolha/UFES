#include <stdio.h>

//context: dizer se o número é par ou ímpar

int main() {
    int n;
    scanf("%d", &n);

    if ( n % 2 == 0 ) {
        printf("Par");
    } else {
        printf("Impar");
    }

    return 0;
}