#include <stdio.h>

void TrocaParEImpar(int vet[], int qtd);
void ImprimeDadosDoVetor(int vet[], int qtd); 

int main() {
    int n;

    scanf("%d", &n);

    int vetores[n], vetor, i;

    for (i = 0; i < n; i++){
        scanf("%d", &vetor);

        //guarda o valor no vetor
        vetores[i] = vetor;
    }

    TrocaParEImpar(vetores, n);

    //     for (i = 0; i < n; i++){
    // printf("%d", vetores[i]);
    // }

    ImprimeDadosDoVetor(vetores, n);

    return 0;
}

void TrocaParEImpar(int vet[], int qtd){
    int i, aux;

    //troca de lugar, como é troca de pares tem q percorrer de 2 em 2 casas
    for (i = 0; i < qtd - 1; i +=2 ){ //lembrar q quando tem i+1, no loop é qtd - 1
            aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
    }
}

void ImprimeDadosDoVetor(int vet[], int qtd){
    int i;
    printf("{");
    for (i = 0; i < qtd; i++){
        printf("%d", vet[i]);

        if (i != qtd - 1){
            printf(", ");
        } else {
            printf("");
        }
    }

    printf("}");
}