#include <stdio.h>

//contexto: uma simples calculadora

int main() {
    int a, b;
    char sinal;
    scanf("%d %c %d", &a, &sinal, &b);

    int result;
    int resto = a % b;


    switch (sinal) {
        case '+':
            result = a + b;

            printf("SOMA:%d", result);
        break;

        case '-':
           result = a - b;

            printf("SUB:%d", result);
        break;

        case '*':
            result = a * b;

            printf("MULT:%d", result);
        break;

        case '/':
            result = a / b;

            if ( (a % b == 0) && (b =!0) ) {
                printf("DIV:%d",result);
            } else {
                printf("DIV:%d, RESTO:%d", result, resto);
            }
        break;
    }

    return 0;
}