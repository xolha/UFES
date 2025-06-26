#include <stdio.h>


int main() {
    int c;
    //entrada
    scanf("%c",&c);

    printf("RESP: ");

    while ( c != '.' && c != '?' && c != '!') {
        if ( c == ' ') {
            putchar('_'); //colocar o caractere
        } else {
            putchar(c);
        }
        c = getchar();
    }

    putchar(c);
    return 0;
}