#include <stdio.h>

int main () {
    int pes, item;

    //entrada
    scanf("%d %d", &pes, &item);

    //saida
    int resto = ( item - 1 ) % pes + 1; //soma 1 pra n ficar 0
    printf("RESP:%d", resto);

    return 0;
}
