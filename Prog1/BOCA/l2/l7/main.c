#include <stdio.h>

//contexto: dizer se um número é primo ou não

int main() {
    //primeiro declarar uma variavel normal e uma para o i, a a variavel primeo como 1 (supondo q sempre é primo)
    //segundo ler isso
    //terceiro fazer o for para verificar se o número é primo
    //quarto printar vendo se é primo ou não
    
    int n, Primo = 1, i = 0;

    scanf("%d", &n);

    if ( n < 2) {
        return 0;
    }

    for ( i = 2; i < n ; i++) {
        if ( n % i == 0 && i != 0) {
            Primo = 0;
            break;
        } else {
            Primo = 1;
        }
    }

    if(Primo) {
        printf("Primo");
    } else {
        printf("Nao primo");
    }

    return 0;
}