#include <stdio.h>

//contexto: distribuir itens para um número de pessoas e dizer quem foi a última a receber

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("RESP:");
    if (a == 1 && b == 1) {
        printf("1");
    } else {
        int result = b % a;
            if (result == 0) {
                printf("%d", a);
            } else {
                printf("%d", result);
            }
    }

    return 0;
}