#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a = 0, b, c, d;

    //entrada
    scanf("%d", &d);

    //saida
    while(a < d) {
        scanf("%d %d", &b, &c);
        printf("%d\n", b + c);
        a++;
    }

    return 0;
}
