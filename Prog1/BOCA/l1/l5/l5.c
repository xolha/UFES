#include <stdio.h>

//contexto: ler dois numeros e dizer quem é o maior, caso forem iguais, dizer quem é igual

int main(){
    int N1, N2;

    scanf("%d %d", &N1, &N2);
    
    if (N1 > N2) {
        printf("N1 = %d", N1);
    } else if (N1 < N2) {
        printf("N2 = %d", N2);
    } else if (N1 == N2) {
        printf("N1 = N2");
    }

    return 0;
}