#include <stdio.h>

// contexto: dado uma sequencia de numeros, procurar quem é primo de depois
// verificar caracter por carcte achar o maior primo

int EhPrimo(int num);
int MaiorDigitoPrimo(int num);

int main() {
  int a, somaFinal = 0, somaPrimo = 0;

  while (scanf("%d", &a) == 1) {
    somaPrimo = MaiorDigitoPrimo(a);

    somaFinal += somaPrimo;
  }

  printf("SOMA:%d", somaFinal);

  return 0;
}

int EhPrimo(int num) {
  if (num < 2) {
    return 0;
  }

  int i;

  for (i = 2; i < num; i++) {
    if (num % i == 0) {
      return 0;
    }
  }

  return 1;
}

int MaiorDigitoPrimo(int num) {
  int maiorPrimo = 0;
  int verficaNumero = 0, resto;
  resto = num;

  if (resto < 0) {
    resto = -resto;
  }

  while (resto > 0) {
    verficaNumero = (resto % 10);
    resto /= 10;

    if (EhPrimo(verficaNumero)) {
      if (verficaNumero > maiorPrimo) {
        maiorPrimo = verficaNumero;
      }
    }
  }

  return maiorPrimo;
}