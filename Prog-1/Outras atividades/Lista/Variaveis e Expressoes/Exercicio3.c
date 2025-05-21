#include <stdio.h>

int main () {
    int n1, n2, n3, soma = n1 + n2  + n3;

    //entrada
    printf("Digite tres numeros inteiros");
    scanf("%d %d %d", &n1, &n2, &n3);

    //saida
    printf("A soma desses numeros eh %d", soma);

    return 0;
}