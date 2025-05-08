#include <stdio.h>
#include <math.h>

int main() {
    //variaveis
    int n1;
    int n2;

    //entrada
    printf("Informe um numero inteiro: ", &n1);
    scanf("%d", &n1);

    printf("Informe outro numero inteiro: ", &n2);
    scanf("%d", &n2);

    //saida
    printf("O resultado da soma das raizes destes numeros e igual a %.2f", sqrt(n1) + sqrt(n2));
    return 0;
}
