#include <stdio.h>

/*
Faça  um  programa  para  ler  uma  sequência  de  N  números 
para um vetor e procurar a primeira ocorrência de um número X nesse vetor. 
• Entrada:  1  número  inteiro  X  a  ser  procurado,  um  número  inteiro  N  representando  a 
quantidade de números, seguido de N números inteiros, todos separados por espaço. 
• Saída:  Índice  da  primeira  ocorrência  de  X  no  vetor,  ou  o  tamanho  do  vetor  caso  ele  não 
esteja presente. Ver exemplo abaixo da formatação de saída. 
• Exemplo de Entrada: 
41 1 41 
X n numeroX
*/

int main(){
    int x, n;

    //numero q eu quero
    scanf("%d", &x);

    //sequencia
    scanf("%d", &n);

    int numeros[n], numero, i;

    //loop de entrada
    for (i = 0; i < n; i++){
        scanf("%d ", &numero);

        //vetor recebe os numeros lidos
        numeros[i] = numero;
    }

    int numeroX = 0;

    //loop de achada
    for (i = 0; i < n; i++){
        if (numeros[i] == x){
            numeroX = i;
            break;
        } else {
            numeroX = n;
        }
    }

    printf("RESP:%d", numeroX);

    return 0;
}
