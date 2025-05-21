#include <stdio.h>

int main () {
    int x ;

    //saida
    if ( ( x > 5 ) || ( x > 10) ) {
        printf("Verdadeiro");
    }
    else {
        printf("Falso");
    }
    if ( ! ( x == 6 ) &&  x >= 6 ) {
        printf("Verdadeiro");
    }
    else {
        printf("Falso");
    }
    if ( ! ( x  == 6  && x - 2 >= 6) ) {
        printf("Verdadeiro");
    }
    else {
        printf("Falso");
    }
    if ( x - 2 == 5 && x == 6 && x * 2 >= 6 ) {
        printf("Verdadeiro");
    }
    else {
        printf("Falso");
    }
    if ( ( x - 2 == 5 ) || ( x == 6 ) && ( x + 2 ) >= 6 ) {
        printf("Verdadeiro");
    }
    else {
        printf("Falso");
    }

    return 0;
}