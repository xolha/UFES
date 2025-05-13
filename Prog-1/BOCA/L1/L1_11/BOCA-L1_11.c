#include <stdio.h>

int main() {
    int number;

    //entrada
    scanf("%d", &number);

    if ( number == 1 ) {
        printf("Jan.", number);
    }
    else if ( number == 2 ) {
        printf("Fev.", number);
    }
    else if ( number == 3 ) {
        printf("Mar.", number);
    }
    else if ( number == 4 ) {
        printf("Abr.", number);
    }
    else if ( number == 5 ) {
        printf("Mai.", number);
    }
    else if ( number == 6 ) {
        printf("Jun.", number);
    }
    else if ( number == 7 ) {
        printf("Jul.", number);
    }
    else if ( number == 8 ) {
        printf("Ago.", number);
    }
    else if ( number == 9 ) {
        printf("Set.", number);
    }
    else if ( number == 10 ) {
        printf("Out.", number);
    }
    else if ( number == 11 ) {
        printf("Nov.", number);
    }
    else if ( number == 12 ) {
        printf("Dez.", number);
    }
    else {
        printf("Invalido.");
    }

    return 0;
}