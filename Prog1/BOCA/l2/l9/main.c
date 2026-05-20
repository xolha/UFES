#include <stdio.h>
#include <stdbool.h>

//contexto:dizer os numeros primos de um intervalo e seus multiplos caso existam

int main() {
    //primeiro declarar as variaveis do intervalo, talvez a do primo e duas auxiliares
    //segundo ler tudo isso aí
    //terceiro fazer o primeiro for do intervalo ABERTO
    //quarto fazer o for de dentro em relação ao intervalo
    //se for primo, ver se dentro o intervalo que foi dado, existe multiplos, se existir, printar eles, se não um *
    int a, b, i = 0, j = 0, k = 0, Primo, ehMultiplo = 0;
    bool isPrime = true;

    scanf("%d %d", &a, &b);

    if ( b < 2) {
        return 0;
    }

    // fazer a verificação de primo e printar o primeiro
    for ( i = a + 1; i < b ; i++) {
        for ( j = 2; j < i; j++) {
            if ( i % j == 0 && j != 0) {
                isPrime = 0;
                break;
            } else {
                isPrime = 1;
                Primo = i;
            }
        }

        if (isPrime) {
            printf("%d\n", Primo);

            //importante lembrar que é necessário "resetar" a verificação de multiplo pois está dentro do for, e ele precisa verificar os outros candidatos a serem primos
            ehMultiplo = 0;
            for ( k = a + 1; k < b; k++) {
                if (k % Primo == 0 && k != Primo) {
                    printf("%d ", k);
                    ehMultiplo = 1;
                }
            }

            if (ehMultiplo == 0) {
                printf("*");
            }

            printf("\n");
        }

    }
    return 0;
}