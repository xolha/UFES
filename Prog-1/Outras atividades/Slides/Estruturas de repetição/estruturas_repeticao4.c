#include <stdio.h>

int main () {
    int n;

    //entrada
    scanf("%d", &n);

    int numero = n + 1; //isso aqui é equivalente ao 'i' do for

    //operacao
    while ( numero % 11 != 0 && numero % 13 != 0 && numero % 17 != 0) { //enquanto numero n der resto, continuar fazendo ate achar
        numero++;
    }

    //saida
    printf("%d", numero);
    return 0;
}