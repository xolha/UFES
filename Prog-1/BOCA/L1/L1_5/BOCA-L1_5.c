#include <stdio.h>
#include <math.h>

int main() {
    //variaveis
    int N1, N2;

    //entrada
    printf("Insira dois numeros: ");
    scanf("%d %d", &N1, &N2);

    //saida
    if (N1 > N2) {
        printf("n1 = %d", N1);
    } else if (N1 < N2) {
        printf("n2 = %d", N2);
    } else if (N1 == N2) {
        printf("N1 = N2", N1, N2);
    }

    return 0;
}
