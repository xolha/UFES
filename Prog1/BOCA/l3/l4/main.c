#include <stdio.h>

int EhPrimo(int num);
void ImprimeMultiplos(int num, int max);

int main(){
    int n, m, i = 0;
    scanf("%d %d", &n, &m);

    for(i = n + 1; i < m; i++){
        if (EhPrimo(i)){
            printf("%d\n", i);
            ImprimeMultiplos(i, m);
        }
    }

    return 0;
}

int EhPrimo(int num){
    if (num < 2){
        return 0;
    }

    int i = 0;
    for (i = 2; i < num; i++){
        if (num % i == 0 && i != 0){
            return 0;
        }
    }

    return 1;
}

void ImprimeMultiplos(int num, int max){
    int i = 0, temMultiplo = 0;

    if (EhPrimo(num)){
        temMultiplo = 0;
        
        for (i = num + 1; i < max; i++){
            if ( i % num == 0 && num != i){
                printf("%d ", i);
                temMultiplo = 1;
            }
        }

        if (temMultiplo == 0){
            printf("*");
        }

        printf("\n");
    }
}