#include <stdio.h>

// contexto: dado uma sequencia de numeros, dizer a quantidade de números negativos
// a quantidade de números positivos
// soma dos números negativos e a soma dos números positivos 

int main() {
    //primeiro declarar uma variavel comum, qtdNegativos, qtdPositivos, somaNegativos, somaPositivos;
    //ler tudo isso menos a variavel
    //fazer um do while com a condição de != de caracteres especiais
    //ler a variavel
    //dentro fazer o if para ver os negativos, se tiver soma, se não faz com positivos;
    //mesmo esquema mas agora com a soma;
    
    //quando se tem um scanf no while com == 1, isso serve para ver se o que está sendo lido realmente é o caractere esperado
    //se não for, o loop acaba. e nesse caso so se espera carcteres do tipo inteiro

    int a, qtdNegativos = 0, qtdPositivos = 0, somaNegativos = 0, somaPositivos = 0;

    while ( scanf("%d", &a) == 1) {
        if ( a < 0) {
            somaNegativos = somaNegativos + a;

            qtdNegativos++;
        } else if (a > 0) {
            somaPositivos = somaPositivos + a;

            qtdPositivos++;
        }

    } 

    printf("%d %d %d %d", qtdNegativos, qtdPositivos, somaNegativos, somaPositivos);
    
    return 0;
}