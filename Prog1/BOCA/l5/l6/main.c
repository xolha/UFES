#include <stdio.h>

/*
Faça um programa para ler duas sequências de números 
e armazena-las em dois vetores A e B. No final, o programa deverá dizer se todos os 
itens de A estão em B, se somente parte deles está, ou se nenhum deles está. 
 Entrada: um número inteiro N1 representando uma quantidade de números, seguido de N1 
números  inteiros,  e  um  número  N2  representando  uma  quantidade  de  números,  seguido 
de N2 números inteiros, todos separados por espaço e com cada sequência em uma linha. 
 Saída:  “TODOS” se todos os itens de A estiverem em B, “NENHUM” se nenhum item de A 
estiver em B, “PARCIAL” se os itens de A estiverem parcialmente em B. Ver exemplo abaixo 
da formatação de saída. 

1 41 1 40 

fazer um for de a exterior e um for interior de b para ver se está contido
*/

int main() {
    int n1, n2;

    scanf("%d", &n1);

    int a[n1], as, i;

    //loop de lida do input
    for (i = 0; i < n1; i++){
        scanf("%d ", &as);

        //guarda o valor lido no vetor
        a[i] = as;
    }

    scanf("%d", &n2);

    int b[n2], bs;

    //loop de lida do input
    for (i = 0; i < n2; i++){
        scanf("%d ", &bs);

        //guarda o valor lido no vetor
        b[i] = bs;
    }

    int j, qtdTotal = 0;
    //loop que verifica se os números são iguais
    for (i = 0; i < n1; i++){
        
        //flag que indica se achou algum algum numero na ocorrencia (o numero não pode ser igual)
        int achou = 0;
        for (j = 0; j < n2; j++){
            if (a[i] == b[j]){
                //achou um numero igual? ja para
                achou = 1;
                break;
            }
        }
        if (achou) {
            qtdTotal++;
        }
    }

    if (qtdTotal == n1){
        printf("TODOS");
    } else if (qtdTotal == 0) {
        printf("NENHUM");
    } else {
        printf("PARCIAL");
    }

    return 0;
}