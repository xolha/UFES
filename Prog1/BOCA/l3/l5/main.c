#include <stdio.h>
#include <stdlib.h>

int Propriedade(int num);

int main() {
  int n, m, i = 0;
  scanf("%d %d", &n, &m);

  if (n > m || 1000 > n || m > 9999) {
    exit(1);
  }

  for (i = n + 1; i < m; i++) {
    if (Propriedade(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}

int Propriedade(int num) {
  int ab = 0, cd = 0, soma = 0, multiplo = 0;
  ab = num / 100;
  cd = num % 100;

  soma = ab + cd;

  multiplo = soma * soma;

  if (multiplo == num) {
    return 1;
  } else {
    return 0;
  }
}