#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    //verificar se a letra está minuscula
    while (c != '.' && c != '?' && c != '!') {
        if (c >= 'a' && c <= 'z') {
            putchar(c - 32); //colocar em maiuscula
        } else {
            putchar(c); //se ja for maiuscula
        }

        c = getchar();
    }
    putchar(c); //continua com o resto das letras

    return 0;
}
