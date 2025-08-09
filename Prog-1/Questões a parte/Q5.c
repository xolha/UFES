//ENCONTRAR O MAIOR E MENOR VALOR EM UM VETOR

#include <stdio.h>

int main() {
    int vet[6];
    int menor, maior;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &vet[i]);
    }

    maior = menor = vet[0]; //assumindo o primeiro valor como base

    for (int i = 1; i < 6; i++) {
        if (vet[i] > maior) { //creio q ele automaticamente ja entende qual que é maior dessa forma
            maior = vet[i];
        }
        if (vet[i] < menor) { // o mesmo serve para esse
            menor = vet[i];
        }
    }

    printf("O maior numero eh: %d, e o menor numero eh: %d", maior, menor);

    return 0;
}