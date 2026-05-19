#include <stdio.h>

int EhPrimo(int num);

int main(){
    int n, m, i = 0, j = 0;
    scanf("%d %d", &n, &m);

    for (i = n + 1; i < m; i++){
        if (EhPrimo(i)) {
            printf("%d ", i);
        } else {
            continue;
        }
    }

    return 0;
}

int EhPrimo(int num){
    int i = 0;

    if ( num < 2 ){
        return 0;
    }

    for (i = 2; i < num; i++){
        if (num % i == 0 && i != 0){
            return 0; 
        }
    }

    return 1;
}