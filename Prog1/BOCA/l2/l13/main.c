#include <stdio.h>

//contexto: trnasformar letras minusculas em maiusculas e parar a frase quanto receber um sinal ? ! .

int main() {
    //primeiro declarar um caracter
    //segundo ler isso aí
    //fazer um while para fazer a verificação dos sinais
    //fazer a parte da transofrmação de minuscula em maisucula a - 32
    char letra;
    scanf(" %c", &letra);

    while (letra != '!' && letra != '?' && letra != '.') {
        if ( letra >= 'a' && letra <= 'z') {
            letra = letra - 32;
            putchar(letra);
        } else {
            putchar(letra);
        }

        letra = getchar();
    }

    putchar(letra);

    return 0;
}