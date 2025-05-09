#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //variaveis
    int n1, n2;
    float media;

    //entrada
    //"digite duas notas para fazer uma media"
    scanf("%d %d", &n1, &n2);

    //operacao
    media = (n1 + n2) / 2.0;

    //saida
    if (media >= 7.0) {
        printf("%.1f - Aprovado\n", media);
    }
    else if (media < 5.0) {
        printf("%.1f - Reprovado\n", media);
    }
    else {
        printf("%.1f - De Recuperacao\n", media);
    }

return 0;
}