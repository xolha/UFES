#include <stdio.h>

//contexto: dado dois numeros de identidades, classificar o tipo de pessoa

int main() {
    //primeiro declarar dois numeros
    //segundo ler esses dois numeros
    //terceiro fazer as comparações e logicas com if/else
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if ( (n1 >= 1 && n1 <= 5) && (n2 >= 6 && n2 <= 10) ) {
        printf("Um casal");
    } else if ( (n1 >= 1 && n1 <= 5) && (n2 >= 1 && n2 <= 5) && (n1 == n2) ) {
        printf("Um homem");
    } else if ((n1 >= 1 && n1 <= 5) && (n2 >= 1 && n2 <= 5) && (n1 != n2)){
        printf("Par de homens");
    } else if ( (n1 >= 6 && n1 <= 10) && (n2 >= 6 && n2 <= 10) && (n1 == n2) ) {
        printf("Uma mulher");
    } else if ( (n1 >= 6 && n1 <= 10) && (n2 >= 6 && n2 <= 10) && (n1 != n2) ) {
        printf("Par de mulheres");
    } else {
        printf("Invalido");
    }

    return 0;
}