#include <stdio.h>

//contexto: dado um numero, digitar uma sequencia de numeros e determinar varias coisas

int main() {
//primeiro declarar duas variveis comuns, um maior, um menor, qtd de pares, qtd de impares e a media
//segundo ler tudo isso
//terceiro fazer o while da leitura
//quarto fazer todas as questões q o exercicio pede
    int a = 0, b = 0, i = 1, qtdPares = 0, qtdImpares = 0, maior = 0, menor = 999999;
    float media = 0;

    scanf("%d", &a);

    while (i <= a)
    {
        scanf("%d", &b);

        if (b > maior) {
            maior = b;
        }

        if (b < menor ) {
            menor = b;
        }

        if ( b % 2 == 0) {
            qtdPares++;
        } else {
            qtdImpares++;
        }

        media = b + media;

        i++;
    }

    media = media / a;
    
    printf("%d %d %d %d %.6f", maior, menor, qtdPares, qtdImpares, media);

    return 0;
}