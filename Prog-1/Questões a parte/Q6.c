//TROCAR OS NUMEROS DO VETOR

#include <stdio.h>

int main () {
    int vet [6];
    int troca;

    for ( int i = 0 ; i < 6 ; i++) {
        scanf("%d",&vet[i]);
    }

    //fazendo a troca dos valores
    troca = vet[0];
    vet[0] = vet[5];
    vet[5] = troca;

    //imprimindo os valores invertidos
    for ( int i = 0 ; i < 6 ; i++) {
        printf("%d ",vet[i]);
    }

    return 0;
}