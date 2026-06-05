#include <stdio.h>

int somadosdigitos(int n);
void parImpar(int n);
void valorPrimo(int n);

int main(){
    int a;
    while (scanf("%d", &a) == 1) {
        int soma;
        soma = somadosdigitos(a);

        //distrincha os numeros até ficar somente um digito
        while(1){
            printf("%d ", soma);
            parImpar(soma);
            printf(" ");
            valorPrimo(soma);
            printf("\n");

            if (soma < 10) {
                break;
            }

            soma = somadosdigitos(soma);
        }
    }
    return 0;
}


int somadosdigitos(int n){
    int soma = 0;
    
    // soma todo os digitos do número
    while (n > 0){
        int resto = 0;
        //pega o ultimo valor
        resto = n % 10;
        soma = soma + resto;
        //retira o ultimo digito
        n = n / 10;
    }

    return soma;
}

void parImpar(int n){

    if (n % 2 == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }
}

void valorPrimo(int n) {
    int i = 0, ehPrimo = 1;
    int digito = somadosdigitos(n);

    if (n <= 1 ){
        ehPrimo = 0;
        printf("Nao e primo");

        return;
    } else {
            //varre os numeros até encontrar algum valor q é divísivel com número analisado

    for (i = 2; i < n; i++){
        if (n % i == 0 && i != 0){
            ehPrimo = 0;
            break;
        } else {
            ehPrimo = 1;
        }
    }

    if (ehPrimo == 1){
        printf("Primo");
    } else {
        printf("Nao e primo");
    }
    }

}