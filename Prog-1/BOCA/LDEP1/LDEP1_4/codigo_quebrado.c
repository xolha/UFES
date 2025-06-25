#include <stdio.h>

int main() {
  int i, primo, qtd, j;

  scanf("%d", &qtd); //numero fornecido

  for (i = 2 ; i <= qtd ; i++) { //verificar se o numero é primo
      primo = 1;

      for ( j = 2 ; j < i ; j++) {
          if ( i % j == 0 ) { //nao é primo
              primo = 0;
              break;
          }
      }

      if (primo) {
          printf("%d ", i); //se for primo
      }
  }
    printf("\n");

  return 0;
}