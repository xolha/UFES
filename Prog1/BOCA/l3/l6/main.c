#include <stdio.h>
#include <math.h>

int EhPalindromo(int num); 

int main() {
    int a;

    while (scanf("%d", &a) == 1){
        if (EhPalindromo(a)){
            printf("S\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}

int EhPalindromo(int num){
    int ultimoDigito = 0, primeiroDigito = 0, digitosFinais = 0, digitosIniciais = 0, restante = 0, qtdCaracteres = 0;

    //restante é meramente auxiliar
    restante = num;

    //pega a quantidade de caracteres
    while (restante >= 1){
        restante = restante / 10;
        qtdCaracteres++;
    }

    //quantos digitos precisa comparar
    digitosFinais = qtdCaracteres/2;
    digitosIniciais = qtdCaracteres - digitosFinais;

    //pega n ultimos numeros
    ultimoDigito = num % (int)(pow(10, digitosFinais));

    //pega n primeiros numeros
    primeiroDigito = num / (int)(pow(10, digitosIniciais));

    //inverte o numero
    int i = 1, numeroInvertido = 0, aux = 0;
    restante = ultimoDigito;
    while ( restante >= 1 ){
        aux = restante % 10;
        restante = restante / 10;
        numeroInvertido = numeroInvertido + ( aux * (int)(pow(10, (digitosFinais - i))));
        i++;
    }

    //faz a verificação
    if ( primeiroDigito == numeroInvertido) {
        return 1;
    } else {
        return 0;
    }
}

