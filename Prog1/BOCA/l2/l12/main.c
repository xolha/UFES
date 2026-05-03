#include <stdio.h>

// contexto: dado uma frase, substituir os ' ' por '_' e o programa vai parar
// quando ter um . ? !

int main() {
  // primeiro declarar uma variavel char para a leitura
  // ler isos aí
  // fazer um while para ler tudo e subsituir ' ' por _
  // essa substituição ocorre por meio de um "putchar" que serve para trocar
  // caracteres por outro (no caso, ele apenas coloca um caracter, e nesse caso
  // ele serve de substituição)
  // o "getchar" dentro de um loop serve para ir "guardando" as outras futuras letras, ex.:
  // ali ele vai ler um carcter, depois de verificar que ele é o ou não um ' ', ele vai guardar essa resposta e ja partir para a proxima leitura
  // por fim, o ultimo putchar é para fazer a leitura de todos os caracteres que foram "guardados" no getchar
  // tanto que ele "puxa" o 'a' que estava com o "getchar"

  char a;

  scanf(" %c", &a);

  printf("RESP:");
  while (a != '!' && a != '?' && a != '.') {
    if (a == ' ') {
      putchar('_');
    } else {
      putchar(a);
    }

    a = getchar();
  }

  putchar(a);
  return 0;
}