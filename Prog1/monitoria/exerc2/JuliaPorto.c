#include <stdio.h>

int main() {
    //primeiro declarar duas variaveis, uma para a chave mestra e a outra para o binario
    //segundo ler as variaveis
    //terceiro começar o for
    //quarto verificar a chave e ceomçar o for de decodificação
    //quinto ler cada caracter e fazer a transformação em binario
    //ver quem é o maior e quem é o menor

    int c, q, i = 0, j = 0, n, chaveAtual, decimal, maior, menor;
    char bitCaracter;

    scanf("%d %d", &c, &q);

    for ( i = 0 ; i < q ; i++ ) {
        scanf("%d", &n);

        decimal = 0;

        chaveAtual = c;
        printf("Descriptografia : ");

        for ( j = 0 ; j < n ; j++) {
            scanf(" %c", &bitCaracter);

            int bitNumerico = bitCaracter - '0';
            int bitFinal = bitNumerico ^ chaveAtual;

            printf("%d", bitFinal);
                decimal = (decimal * 2) + bitFinal;
                chaveAtual = !chaveAtual;
        }

        printf("\n");

        if (i == 0) {
            maior = decimal;
            menor = decimal;
        } else {
            if ( decimal > maior) {
                maior = decimal;
            }
            
            if (decimal  < menor) {
                menor = decimal;
            }
        }
    }

    printf("MAX: %d\n", maior);
    printf("MIN: %d\n", menor);

    return 0;
}