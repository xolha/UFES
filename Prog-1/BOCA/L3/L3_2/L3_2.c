#include <stdio.h>

float Soma(float num1, float num2) {
    float Soma;
    Soma = (num1 + num2);

    return (Soma);
}

float Subtracao(float num1, float num2) {
    float Subtracao;
    Subtracao = num1 - num2;

    return (Subtracao);
}

float Divisao(float num1, float num2) {
    float Divisao;
    Divisao = num1 / num2;

    return (Divisao);
}

float Multiplicacao(float num1, float num2) {
    float Multiplicacao;
    Multiplicacao = num1 * num2;

    return (Multiplicacao);
}

int main() {
    float num1, num2;
    char operador;

    //guardar a primeira informação da conta
    scanf("%f %f %c", &num1, &num2, &operador);

    switch (operador) {
        case '+': num1 = Soma(num1, num2); break;
        case '-': num1 = Subtracao(num1, num2); break;
        case '*': num1 =  Multiplicacao(num1, num2); break;
        case '/': num1 = Divisao (num1, num2); break;
        default: printf("Operador invalido");
    }

    //fazer a conta com um novo operador
    while ( getchar() == ' '){
        scanf("%f %c", &num2, &operador);
        switch (operador) {
            case '+': num1 = Soma(num1, num2); break;
            case '-': num1 = Subtracao(num1, num2); break;
            case '*': num1 = Multiplicacao(num1, num2); break;
            case '/': num1 = Divisao(num1, num2); break;
            default: printf("Operador invalido");
        }
    }

    printf("%.2f\n", num1);

    return 0;
}