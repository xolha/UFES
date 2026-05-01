#include <stdio.h>

//contexto: calcular tipos de somas

int main() {
    //primeiro declarar uma variavel e o resto de auxilio para a soma
    //segundo ler essa variaveis
    //terceiro fazer o switch para ver qual a soma
    //quarto fazer cada um dos tipos de soma dentro de cada switch
    int a, i = 1, j = 1;
    double soma = 0;
    double potencia = 2.0;


    scanf("%d", &a);

    switch (a) {
        case 1:
            for ( i = 1, j = 1; j <= 50.0; i = i + 2, j++) {
                soma += (double) i/j;
            }
        break;
        case 2:
            for ( i = 1, j = 50; j >= 1; j--, i++ ) {
                soma += (double) potencia/j;

                potencia *= 2.0;
            }
        break;
        case 3:
            for ( i = 1, j = 1; j <= 10.0; i++, j++){
                soma += (double) i/(j * j);
            }
        break;
    }

    printf("%.6f", soma);

    return 0;
}