#include <stdio.h>

int main() {
  int n, a, contador = 1, i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0,
            i7 = 0, i8 = 0, i9 = 0;
  char frase, numero;

  scanf("%d", &n);

  if (n > 9 || n < 1) {
    return 0;
  }

  while (contador <= n) {
    scanf("%d", &a);

    switch (contador) {
    case 1:
      i1 = a;
      break;

    case 2:
      i2 = a;
      break;

    case 3:
      i3 = a;
      break;

    case 4:
      i4 = a;
      break;

    case 5:
      i5 = a;
      break;

    case 6:
      i6 = a;
      break;

    case 7:
      i7 = a;
      break;

    case 8:
      i8 = a;
      break;

    case 9:
      i9 = a;
      break;
    }
    contador++;
  }

  while (getchar() != '"')
    ;

  while ((frase = getchar()) != '"') {
    if (frase == '%') {
      // é isso que le o numero depois do %
      char numeroChar = getchar();

      // transforma char em numero
      int num_idx = numeroChar - '0';

      if (num_idx < 1 || num_idx > n) {
        printf("ERRO");
      } else {
        if (num_idx == 1)
          printf("%d", i1);
        else if (num_idx == 2)
          printf("%d", i2);
        else if (num_idx == 3)
          printf("%d", i3);
        else if (num_idx == 4)
          printf("%d", i4);
        else if (num_idx == 5)
          printf("%d", i5);
        else if (num_idx == 6)
          printf("%d", i6);
        else if (num_idx == 7)
          printf("%d", i7);
        else if (num_idx == 8)
          printf("%d", i8);
        else if (num_idx == 9)
          printf("%d", i9);
      }
    } else {
        putchar(frase);
    }
  }
  return 0;
}