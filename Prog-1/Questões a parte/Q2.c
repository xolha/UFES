// SOMANDO TODOS OS ELEMENTOS DE UMA MATRIZ

#include <stdio.h>

int main() {
    int vet[6];
    int soma = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    printf("%d", soma);

    return 0;
}