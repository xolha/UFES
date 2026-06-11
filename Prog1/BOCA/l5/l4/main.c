#include <stdio.h>

/*
dizer  quantos  números  estão  dentro  do  intervalo  e  quantos  números  estão  fora  do 
intervalo. 
 Entrada:  1  número  inteiro  N  representando  a  quantidade  de  números,  seguido  de  N 
números, seguido por dois  números a e b representando o intervalo, todos separados por 
espaço. 
 Saída:  Quantidade  de  números  dentro  do  intervalo  seguido  pela  quantidade  de  números 
fora dele. Ver exemplo abaixo da formatação de saída. 
 Exemplo de Entrada: 1 41 30 50
                    qtdN Nlidos intervalo(a b)    
*/

int main(){
    int n;

    scanf("%d", &n);
    
    int numeros[n], numero, i;

    //loop da leitura
    for (i = 0; i < n; i++){
        scanf("%d ", &numero);

        //vetor de numeros recebe todos os números
        numeros[i] = numero;
    }

    int a, b;
    scanf("%d %d", &a, &b);

    int qtdDentro = 0, qtdFora = 0;
    for (i = 0; i < n; i++){
        //descobri que não precisa fazer com um loop j a mais, só comparar desse jeito faz mais sentido
        if (numeros[i] >= a && numeros[i] <= b){
            qtdDentro++;
        } else {
            qtdFora++;
        }
    }

    printf("%d %d", qtdDentro, qtdFora);

    return 0;
}