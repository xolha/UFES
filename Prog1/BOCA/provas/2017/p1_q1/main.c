#include <stdio.h>

//contexto: fazer uma operação com dois numeros inteiros e um sinal

int main() {
    //primeiro ler dis numeros e um sinal
    //segundo fazer toda a declração
    //terceiro fazer um switch para cada tipo de sinal com default: Invalido 
    int a, b;
    char sinal;

    scanf("%d %d %c", &a, &b, &sinal);

    int result;

    switch (sinal) {
        case '+':
            result = a + b;
            printf("RESP:%d", result);
        break;

        case '-':
            result = a - b;
            printf("RESP:%d", result);
        break;

        case '*':
            result = a * b;
            printf("RESP:%d", result);
        break;

        case '/':
            result = a / b;
            printf("RESP:%d", result);
        break;

        default:
            printf("Invalido");
        break;
    }

    return 0;
}