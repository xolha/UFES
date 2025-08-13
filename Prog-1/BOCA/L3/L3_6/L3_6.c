#include <stdio.h>

int EhPalindromo (int num) {
    int original = num;
    int invertido = 0;

    while (num > 0) {
        invertido = (invertido * 10) + (num % 10);
        num /= 10;
    }

   return original == invertido;
}

int main() {
    int num;

    while (scanf("%d", &num) == 1 ) {
        if (EhPalindromo (num)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}