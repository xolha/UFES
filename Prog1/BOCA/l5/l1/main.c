#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    float media = 0, STD = 0, desvioNotas = 0, potencia;
    int menorNota = 9999, maiorNota = 0, qtdAcimaDaMedia = 0, qtdReprovados = 0, i, n;

    //qtd acima da media eu acho que se refere as notas que ficaram maior do q a formula do desvio

    scanf("%d", &n);

    int notas[n], nota;

    //loop para ir rodando a quantidade de pessoas;
    for (i = 0; i < n; i++){
        scanf("%d ", &nota);

        notas[i] = nota;

        if (nota < menorNota) {
            menorNota = nota;
        }
        if (nota > maiorNota){
            maiorNota = nota;
        }

        if (nota < 70) {
            qtdReprovados++;
        }

        //pega os valores para calcular a media depois
        media = media + nota;
    }

    //calcula a media mesmo
    media = media/n;

    //formula doida
    float soma = 0, divide = 0;
    for (i= 0; i < n; i++){
        potencia = notas[i] - media;
        desvioNotas = (pow( potencia, 2));

        soma = soma + desvioNotas;

        //ve quantos estão acima da nota
        if (notas[i] > media) {
            qtdAcimaDaMedia++;
        }
    }

    STD = soma/n;
    STD = sqrt(STD);

    //MENOR:41, MAIOR:41, MEDIA:41.00, STD:0.00, ACIMA_MEDIA_CONC:0, REPROV:1
    printf("MENOR:%d, ", menorNota);
    printf("MAIOR:%d, ", maiorNota);
    printf("MEDIA:%.2f, ", media);
    printf("STD:%.2f, ", STD);
    printf("ACIMA_MEDIA_CONC:%d, ", qtdAcimaDaMedia);
    printf("REPROV:%d", qtdReprovados);

    return 0;
}