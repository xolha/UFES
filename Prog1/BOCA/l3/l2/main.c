#include <stdio.h>

float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Divisao(float num1, float num2);
float Multiplicacao(float num1, float num2);

int main() {
  float num1, num2, result;
  char sinal;

  scanf("%f %f %c", &num1, &num2, &sinal);
    switch (sinal){
      case '+': result = Soma(num1, num2); break;
      case '-': result = Subtracao(num1, num2); break;
      case '/': result = Divisao(num1, num2); break;
      case '*': result = Multiplicacao(num1, num2); break;
      default: printf("Operador invalido");
    }

    while (getchar() == ' '){
      scanf("%f %c", &num2, &sinal);

    switch (sinal){
      case '+': result = Soma(result, num2); break;
      case '-': result = Subtracao(result, num2); break;
      case '/': result = Divisao(result, num2); break;
      case '*': result = Multiplicacao(result, num2); break;
      default: printf("Operador invalido");
    }
    }

    printf("%.2f", result);

  return 0;
}

float Soma(float num1, float num2) {
  float result = num1 + num2;
  return result;
}

float Subtracao(float num1, float num2) {
  float result = num1 - num2;
  return result;
}

float Divisao(float num1, float num2) {
  float result = num1 / num2;
  return result;
}

float Multiplicacao(float num1, float num2) {
  float result = num1 * num2;
  return result;
}