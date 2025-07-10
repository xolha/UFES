#include <stdio.h>

float Soma(float num1, float num2) {
    float Soma;
    Soma = num1 + num2;

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

    while ( scanf("%f %f", &num1, &num2) == 2 ){
        float result;

        result = Soma(num1, num2);
        printf("%.2f", result);

        result = Subtracao(num1, num2);
        printf(" %.2f", result);

        result = Divisao(num1, num2);
        printf(" %.2f", result);

        result = Multiplicacao(num1, num2);
        printf(" %.2f\n", result);
    }

    return 0;
}