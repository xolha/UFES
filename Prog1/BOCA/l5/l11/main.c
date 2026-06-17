#include <stdio.h>

int bubbleSort(int vetor[], int qtd);

int main(){
    int n, m;

    scanf("%d", &n);

    int a[n], A, i;

    for(i = 0; i < n; i++){
        scanf("%d", &A);

        //guarda os valores no vetor
        a[i] = A;
    }   

    bubbleSort(a, n);

    /////////
    scanf("%d", &m);

    int b[n], B;

    for(i = 0; i < m; i++){
        scanf("%d", &B);

        //guarda os valores no vetor
        b[i] = B;
    }

    bubbleSort(b, m);

    int ai = 0, bi = 0;

    while (ai < n || bi < m){ //verifica se um dos valores ainda é menor do q o vetor
        if (ai < n &&(bi >= m || a[ai] <= b[bi])){
            //pega os elementos de A enquanto ainda existe
            //o mesmo para b
            //a ultima parte é referente ao desempate quando ainda tem elemento nos vetores
            printf("A");
            ai++;
        } else {
            printf("B");
            bi++;
        }

    }

    return 0;
}

int bubbleSort(int vetor[], int qtd){
    int i, troca, aux;
    do {
        troca = 0;
        for (i = 0; i < qtd - 1; i++){
            if (vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                troca++;
            }
        }
    } while (troca > 0);
}