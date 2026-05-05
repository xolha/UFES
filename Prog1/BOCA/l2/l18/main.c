#include <stdio.h>
#include <limits.h>

// contexto: dado uma matriz, dizer qual o maior valor e a posição dele

int main() {
  // primeiro duas variaveis de coluna e linha, uma "maior", posicaoColuna,
  // posicaoLinha e duas auxiliares segundo ler tudo isso terceiro iniciar o for
  // com a linha e nisso e colocar a verificação do maior aqui e a posição,
  // quarto fazer a mesma coisa com o da coluna
  // por fim, printar o maior e as posições com (l, c)
  // colocar 1 nas posições q eu determinei é o ideal porque é o minimo valor que dá para se obter

  int l, c, maior = 0, posicaoColuna = 1, matriz, posicaoLinha = 1, i = 0, j = 0;
  scanf("%d %d", &l, &c);

  maior = INT_MIN;

  for (i = 1; i <= l; i++) {
    for (j = 1; j <= c; j++) {
      scanf("%d", &matriz);
      if (matriz > maior) {
        maior = matriz;

        posicaoColuna = j;

        posicaoLinha = i;
      }
    }
  }

  printf("%d (%d, %d)", maior, posicaoLinha, posicaoColuna);

  return 0;
}