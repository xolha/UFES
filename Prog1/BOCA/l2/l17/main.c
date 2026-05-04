#include <stdio.h>

// contexto: decodificar

int main() {
  // primeiro declarar uma variaveil para mostrar se iria codificar ou
  // descodificar, numeros q serão somados a letra minuscula, frase ler a
  // primeira e a segunda variavel fazer o switch dentro do switch fazer a
  // logica da codificação primeiro ler a sequencia dos caracters com o while
  // dentro do while verificar se é minusculo, se minusculo, somar com o numero
  // dado se não for, pega a letra do jeito q tá usa o getchar para ir guardando
  // a proxima letra usa o putchar com essas letras para imprimir

  int codifica, somarNumeros;
  char frase;

  scanf("%d %d", &codifica, &somarNumeros);
  scanf(" %c", &frase);

  switch (codifica) {
  case 1:
    while (frase != '.') {
      if (frase >= 'a' && frase <= 'z') {
        frase = ((frase - 'a' + somarNumeros) % 26) + 'a';
        putchar(frase);
      } else {
        putchar(frase);
      }

      frase = getchar();
    }

    putchar(frase);
    break;

  case 2:
    while (frase != '.') {
      if (frase >= 'a' && frase <= 'z') {
        frase = ((frase - 'a' - (somarNumeros % 26) + 26) % 26) + 'a';

        putchar(frase);

      } else {
        putchar(frase);
      }

      frase = getchar();
    }
    putchar(frase);

    break;

  default:
    printf("Operacao invalida.");
    break;
  }

  return 0;
}