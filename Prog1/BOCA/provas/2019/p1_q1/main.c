#include <stdio.h>

//contexto: dado 3 numeros, dizer se eles etão na ordem crescente, descrescente ou tudo doido

int main() {
    //primeiro declarar 3 numeros
    //segundo ler essas 3 variaveis
    //terceiro verificar se é crescente, descrescente ou tudo doido
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ( a < b && b < c ) {
        printf("CRESCENTE");
    } else if ( a > b && b > c ) {
        printf("DECRESCENTE");
    } else {
        printf("TUDO DOIDO");
    }

    return 0;
}