#include <stdio.h>

//contexto: dado um numero q ditára a sequencia, somar os numeros pares q estáo nas posição pares e os impares q estão nos impares na mesma soma

int main() {
    //primeiro uma variavel para a sequencia, outra para os numeros da sequencia, um para o for outro para soma
    //ler isso tudo
    //fazer o for com as lidas
    //verificar se i é par  para somar os pares e o mesmo vale para os impares
    int a, b, soma = 0, i =0;
    scanf("%d", &a);

    if (a < 0) {
        return 0;
    }

    for (i = 0; i < a; i++) {
        scanf("%d", &b);

        if ( b < 0) {
            return 0;
        }
    
        if ( i % 2 == 0) {
            if (b % 2 == 0) {
                soma += b;
            }
        } else if (i % 2 != 0){
            if(b % 2 != 0) {
                soma += b; 
            }
        }
    }

    printf("SOMA:%d", soma);

    return 0;
}