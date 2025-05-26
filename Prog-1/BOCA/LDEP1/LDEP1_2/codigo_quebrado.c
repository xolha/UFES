#include <stdio.h>

int main(int argc, char const *argv[]) {
    int idade;

    scanf("%d", &idade);

    if (idade < 16) {
        printf("vc nao pode votar!\n");
    }
    else if ( idade >= 16 && idade < 18) {
        printf("vc pode votar, mas nao eh obrigado!\n");
    }
    else if (idade >= 18 && idade < 65) {
        printf("vc eh obrigado a votar!\n");
    }
    else if (idade >= 65) {
        printf("vc pode votar, mas nao eh obrigado!\n");
    }

    return 0;
}
