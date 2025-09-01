#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int maior = 0;

    for (int i = 0; i < n; i++) {
        int menor = 999999;
        int valor;

        while (1) {
            scanf("%d", &valor);
            if (valor == -1) break;

            if (valor < menor) {
                menor = valor;
            }
        }

        if (i > 0) printf(" ");
        printf("%d", menor);

        if (menor > maior) {
            maior = menor;
        }
    }

    if (m == 1) {
        printf("\n%d\n", maior);
    } else {
        printf("\n");
    }

    return 0;
}
