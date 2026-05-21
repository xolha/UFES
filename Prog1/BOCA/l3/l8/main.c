#include <stdio.h>

int verificaPrimo(int n);
int verificaNegativo(int n);
int transformaPrimo(int n); /* transforma o número n passado como parâmetro no próximo maior ou menor primo retornando o número transformado*/

int main(){
    int n, b, i = 0, j = 0, a;
    scanf("%d %d", &a, &b);

    for (i = 0; i < a; i++){
        for (j = 0; j < b; j++){
            scanf("%d", &n);

            //precisa chamar a função aqui antes de descobrir se é
            int transforma = transformaPrimo(n);
            if (transforma) {
                printf("%d ", transforma);
            }
        }
        printf("\n");
    }

    return 0;
}

int verificaPrimo(int n){
    if ( n < 2) {
        return 0;
    }

    //ve se o número tem alguma divisão, se tiver, não é primo
    int i = 0;
    for ( i = 2; i < n; i++){
        if (n % i == 0 && i != 0) {
            return 0;
        }
    }

    return 1;
}

int verificaNegativo(int n) {
    if (n < 0) {
        return 1;
    } else if ( n >= 0) {
        return 0;
    }
}

int transformaPrimo(int n){
    int i;
    //se o numero não for primo
    if ((verificaPrimo(n))){
     return n;

    } else {
        //se o numero for negativo, pega o menor primo mais proximo
        if (verificaNegativo(n)){
            for ( i = n; ;i--){ 
                if (i < -32000 ) {
                    return n;
                }

                if (verificaPrimo(i *(-1))){
                    return i;
                }
            }
        } else {
            // se não, pega o maior primo mais próximo
            for ( i = n; ;i++){
                if (i > 32000 ) {
                    return n;
                }
                if (verificaPrimo(i)){
                    return i;
                }
            }
        }
    }
}