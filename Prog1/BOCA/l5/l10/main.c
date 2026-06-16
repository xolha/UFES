#include <stdio.h>

void OrdenaCrescente(int vet[], int qtd);
void ImprimeDadosDoVetor(int vet[], int qtd); 

int main(){
    int n;

    scanf("%d", &n);

    int vetores[n], vetor, i;

    for(i = 0; i < n; i++){
        scanf("%d", &vetor);

        vetores[i] = vetor;
    }

    OrdenaCrescente(vetores, n);

    ImprimeDadosDoVetor(vetores, n);

    return 0;
}

void OrdenaCrescente(int vet[], int qtd){
    int aux, i, troca;

    do {
        troca = 0;
        for (i = 0; i < qtd - 1; i++){
            if (vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                troca++;
            }
        }
    } while (troca > 0);

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