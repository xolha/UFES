#include <stdio.h>

//contexto: sumir com os espaços das frases

int main() {
    //declarar um char
    //ler isso
    //fazer um while com as paradas da frase
    //tirar os ' '
    //colocar o getchar
    //printar com putchar
    char letra;

    scanf(" %c", &letra);

    printf("RESP:");
    while (letra != '!' && letra != '?' && letra != '.') {
        if (letra != ' ') {
            putchar(letra);
        }

        letra = getchar();
    }

    putchar(letra);

    return 0;
}