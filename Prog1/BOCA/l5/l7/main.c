#include <stdio.h>
#include <stdlib.h>

/*
Faça  um  programa  que  verifique  se  os  itens  (inteiros)  de 
uma sequência de números formam uma progressão aritmética.  
• Entrada:  um  número  inteiro  N  representando  uma  quantidade  de  números,  seguido  de  N 
números inteiros, todos separados por espaço. 
• Saída: Imprima “RESP:” seguido da razão se for uma progressão aritmética, ou “NAO” caso 
contrário.
*/

int main() {
    int n;

    scanf("%d", &n);

    if (n < 2){
        printf("NAO");
        exit(1);
    }

    int valores[n], valor, i;

    //loop de lida do input
    for (i = 0; i < n; i++){
        scanf("%d ", &valor);

        //guarda o valor no vetor
        valores[i] = valor;
    }

    if (n < 2) {
        printf("NAO");
        return 0;
    }

    //flag para indicar se é pa - o ideal é sempre assumir que é verdadeiro
    int ehPA = 1;
    //razao da pa
    int diferenca = valores[1] - valores[0];

    //verifica se é pa, o - 1 é para não pegar no array
    for (i = 0; i < n - 1; i++){

        //se algum valor quebrar a pa, então ehPA é falso
        if ((valores[i+1] - valores[i]) != diferenca){
            ehPA = 0;
            break;
        }
    }

    if (ehPA) {
        printf("RESP:");
        printf("%d", diferenca);
    } else {
        printf("NAO");
    }

    return 0;
}