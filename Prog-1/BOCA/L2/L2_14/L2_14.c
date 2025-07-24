#include <stdio.h>

int main () {
    char c;

    printf("RESP:");
    //enquanto cada caracter for diferente disso aí
    while ((c = getchar()) != '.' && c != '?' && c != '!') {
        if (c != ' ') { //e o caracter for diferente de espaço
            putchar(c);
        }
    }

    putchar(c);
    putchar('\n');

    return 0;
}