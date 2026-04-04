#include <stdio.h>

//contexto: dar um número e verificar se a unidade, dezena ou centena é par ou ímpar

int main() {
    //primeiro declarar duas variaveis
    //segundo ler todas as variaveis
    //fazer um switch de cada caso(3)
    //pegar as uni, dez, cen
    int a, b;
    scanf("%d %d", &a, &b);

    int result = a;

    switch(b) {
        case 1:
            result = result % 10;
        break;

        case 2:
            result /= 10;
            result = result % 10;
        break;

        case 3:
            result /= 100;
            result = result % 10;
        break;
    }

    if (result % 2 == 0) {
        printf("PAR");
    } else  {
        printf("IMPAR");
    }

    return 0;
}