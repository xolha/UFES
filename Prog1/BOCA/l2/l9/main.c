#include <stdio.h>

//contexto:dizer os numeros primos de um intervalo e seus multiplos caso existam

int main() {
    //primeiro declarar as variaveis do intervalo, talvez a do primo e duas auxiliares
    //segundo ler tudo isso aí
    //terceiro fazer o primeiro for do intervalo ABERTO
    //quarto fazer o for de dentro em relação ao intervalo
    //fazer a verificação de primo e printar o primeiro
    //se for primo, ver se dentro o intervalo que foi dado, existe multiplos, se existir, printar eles, se não um *
    int a, b, i = 0, j = 0, k = 0, ehPrimo = 1, Primo, ehMultiplo = 0;

    scanf("%d %d", &a, &b);

    if ( b < 2) {
        return 0;
    }

    for ( i = a + 1; i < b ; i++) {
        for ( j = 2; j < i; j++) {
            if ( i % j == 0 && j != 0) {
                ehPrimo = 0;
                break;
            } else {
                ehPrimo = 1;
                Primo = i;
            }
        }

        if (ehPrimo) {
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