#include <stdio.h>

void InverteVetor(int * vet, int qtd); 
void ImprimeDadosDoVetor(int vet[], int qtd); 

int main() {
    int n;

    scanf("%d", &n);

    int vetores[n], vetor, i;

    for(i = 0; i < n; i++){
        scanf("%d", &vetor);

        vetores[i] = vetor;
    }

    InverteVetor(vetores, n);

    ImprimeDadosDoVetor(vetores, n);

    return 0;
}

void InverteVetor(int * vet, int qtd){
    int aux, i;

    for(i = 0; i < qtd / 2; i++){
        aux = vet[i];
        vet[i] = vet[qtd - i - 1];
        vet[qtd - i - 1] = aux;
    }
}

void ImprimeDadosDoVetor(int vet[], int qtd){
    int i;

    printf("{");

    for(i = 0; i < qtd; i++){
        printf("%d", vet[i]);

        if (i != qtd - 1){
            printf(", ");
        } else {
            printf("");
        }
    }
    
    printf("}");
}