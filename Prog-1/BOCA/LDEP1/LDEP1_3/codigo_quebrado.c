#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a;

    scanf("%d", &a);

    int i = 1;
    while( i < a ) {
        if (i % 2 == 0 || i % 3 == 0) {
            printf("%d", i);
        }
            i++;
    }

    printf("\n");

    return 0;

}
