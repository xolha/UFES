#include <stdio.h>

// contexto:dado um número, segmentar ele até q ele fique <10

int main() {
  // primeiro declarar a varivel principal, uma auxiliar e a que vai guardar o
  // resto da divisão segundo ler isso fazer um while com a relação de % < 10
  // printar o resultado com RESP:
  int a, soma = 0, resto, tempoSoma, somaDigitoFinal;

  scanf("%d", &a);

  somaDigitoFinal = a;

  while (somaDigitoFinal >= 10) {
    tempoSoma = 0;
    resto = somaDigitoFinal;

    while (resto > 0) {
        tempoSoma = tempoSoma + (resto % 10);
        resto /= 10;
    }

    somaDigitoFinal = tempoSoma;

  }

  printf("RESP:%d", somaDigitoFinal);

  return 0;
}