#include <stdio.h>

int main() {
    int nEntrada;

    //entrada
    scanf("%d", &nEntrada); //quantidade de numeros q vou digitar

    //condição
    if (nEntrada <= 0) {
        printf("Digite um numero diferente de 0");
        return 1;
    }

    //saida
    int nSaida, maior, menor, pares = 0, impares = 0, soma = 0;

    for (int i = 0; i < nEntrada ; i++) {
        scanf("%d", &nSaida);

        if (i == 0) {
            maior = menor = nSaida;
        }

        //maior numero
        if (maior < nSaida) {
            maior = nSaida;
        }

        //menor
        if (menor > nSaida) {
            menor = nSaida;
        }

        //soma para a media
        soma += nSaida;

        //pares e impares
        if ( nSaida % 2 == 0 ) {
            pares++;
        } else {
            impares++;
        }
    }

    //media
    float media = (float)soma/nEntrada;

    //saida
    printf("%d %d %d %d %.6f", maior, menor, pares, impares, media);

    return 0;
}
