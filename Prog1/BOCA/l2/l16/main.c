#include <stdio.h>

//contexto: dado uma sequencia de números, ver o menor da primeira sequencia e comparar esse valor menor com a segunda

int main() {
    //primeiro declarar duas variaveis principais e outras auxiliares
    //ler tudo isso
    //primeiro fazer o primeiro while para ler até chegar um caracter
    //dentro dele, ver qual o menor valor
    //colocar um getchar para limpar o buffer (tirar o \n para que o proximo while seja lido)
    //no segundo while ler a segunda sequencia
    //ver a quantidade de numeros da sequencia
    //verificar se existe algum valor da sequencia que é igual ao da primeira sequencia
    //por fim, fazer a ultima verificação caso não tenha numeros iguais, aí será substitido pela qtd de itens da segunda sequencia
  int a, b, menorPrimeira = 999999, posicaoPrimeiro = 0, qtdSegunda = 0, posicaoUltimo = 0, i = 0, encontrou = 0;

  while (scanf("%d", &a) == 1) {
    if (a < menorPrimeira) {
      menorPrimeira = a;
    }
  }

    while (getchar() != '\n');

  while (scanf("%d", &b) == 1) {
    qtdSegunda++;

    if (menorPrimeira == b) {
        if ( encontrou == 0) {
            posicaoPrimeiro = qtdSegunda - 1;
            encontrou = 1;
        }
      posicaoUltimo = qtdSegunda - 1;
    }
  }

  if ( encontrou == 0) {
        posicaoPrimeiro = qtdSegunda;
        posicaoUltimo = qtdSegunda;
  }

  printf("%d %d %d", menorPrimeira, posicaoPrimeiro, posicaoUltimo);

  return 0;
}