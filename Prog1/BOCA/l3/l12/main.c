#include <stdio.h>

int somadosdigitos(int n);
void parImpar(int n);
void valorPrimo(int n);

int main(){
    int a;
    scanf("%d", &a);

    parImpar(a);
    valorPrimo(a);


    //SE A SOMA FOR NÃO PRIMO, FAZ OUTRA COISA PARA PEGAR O PRIMO
    int verificaPar = somadosdigitos(a);
    if (verificaPar % 2 == 0) {
        int ehPrimo = 1, i = 0, entaoPrimo = -1;
        
        //faz a mesma lógica assim do primo, mas acho q eu poderia só ter pego a função embaixo
        while (a >= 1){
            int resto = 0;
            ehPrimo = 1;

            resto = a % 10;
            if (resto <= 1) {
                ehPrimo = 0;
            } else {
            for (i = 2; i < resto; i++){
                if ( resto % i == 0) {
                    ehPrimo = 0;
                    break;
                }
            }
            }

            if (ehPrimo == 1){
                entaoPrimo = resto;
            }
            a = a / 10;
        }
        printf("\n");

        if (entaoPrimo != -1) {
        parImpar(entaoPrimo);
        printf("Primo\n");
        }

    }

    return 0;
}


int somadosdigitos(int n){
    int soma = 0;
    
    // soma todo os digitos do número
    while (n >= 1){
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
    int digitos = somadosdigitos(n);
    int ehPar = 1;

    if (digitos % 2 == 0) {
        printf("%d Par ", digitos);
        ehPar = 1;
    } else {
        printf("%d Impar ", digitos);
        ehPar = 0;
    }
}

void valorPrimo(int n) {
    int i = 0, ehPrimo = 1;
    int digito = somadosdigitos(n);

    
    if (n <= 1 ){
        ehPrimo = 0;
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