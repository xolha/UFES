#include <stdio.h>

int main() {
    int number;

    //entrada
    scanf("%d", &number);

    //saida
    if (number % 2 == 0) {
        printf("Par", number);
    }
    else {
        printf("Impar", number);
    }

    return 0;
}