 #include <stdio.h>
#include <math.h>

int main() {
    //variaveis
    int n1;
    int n2;

    //entrada
    //"Informe dois numeros inteiros"
    scanf("%d %d", &n1, &n2);

    //saida
    //"O resultado da soma das raizes destes numeros e igual a
    printf("%.2f", sqrt(n1) + sqrt(n2));

    return 0;
}
