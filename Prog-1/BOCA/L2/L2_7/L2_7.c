#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if ( n == 2 ) {
        printf("Primo");
    } else if ( n % 2 != 0 ) {
        printf("Primo");
    }  else {
        printf("Nao primo");
    }
}