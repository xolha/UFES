#include <stdio.h>
#include <math.h>

int main () {
    char caracter;

    //entrada
    scanf("%c", &caracter);

    //saida
    if ( caracter >= 'a' && caracter <= 'z') {
        char maiuscula = caracter - 32;
        printf ("%c(%d)", maiuscula, maiuscula);
    }
    else if ( caracter >= 'A' && caracter <= 'Z') {
        printf ("A letra deve ser minuscula!");
    }
    else {
        printf ("Nao e letra!");
    }

    return 0;
}