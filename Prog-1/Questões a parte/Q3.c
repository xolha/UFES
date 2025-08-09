// CALCULAR A MEDIA DOS ELEMENTOS DE UM VETOR

#include <stdio.h>

int main () {
    int vet[3];
    int soma = 0;
    int media;

    for ( int i = 0 ; i < 3 ; i++) {
        scanf("%d",&vet[i]);
        soma += vet[i];
    }

    media  = soma / 3;

    printf("%d", media);

    return 0;
}