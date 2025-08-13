#include <stdio.h>

int Propriedade(int num) {
    //vou mandar numero - num
    int ab = num % 100;
    int cd = num / 100;
    int ef = ab + cd;

    if ( ef * ef == num ) {
        return num;
    }
}

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    for (int i = n + 1; i < m; i++) {
        if (Propriedade(i) == i) {
            printf("%d\n", Propriedade(i));
        }
    }

    return 0;
}