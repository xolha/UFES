#include <stdio.h>

int EhPar (int x);
void PrintaPares (int N);
void PrintaImpares (int N);

int main(){
    int a, n, i = 0, tipo;
    scanf("%d %d", &a, &n);

    switch(a){
        case 0:
        for ( i = 1; i <= (n*2); i ++){
            tipo = EhPar(i);

            if (tipo == 0){
                PrintaPares(i);
            }
        }
        break;

        case 1:
        for ( i = 1; i <= (n*2); i++){
            tipo = EhPar(i);

            if (tipo == 1){
                PrintaImpares(i);
            }
        }
    }

    return 0;
}

int EhPar (int x) {
    if (x % 2 == 0){
        return 0;
    } else {
        return 1;
    }
}

void PrintaPares (int N){
    printf("%d ", N);
}

void PrintaImpares (int N){
        printf("%d ", N);

}