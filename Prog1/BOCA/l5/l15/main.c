#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

typedef struct{ 
 int codigo; 
 char sobrenome[21]; 
 char nome[21]; 
 int nota; 
 int idade; 
} tCandidato; 
 
tCandidato LeCandidato(); 
void ImprimeCandidato(tCandidato candidato); 
 
void OrdenaCrescente(tCandidato * vet, int qtd); 
 
int main(){ 
 int qtdCand, i = 0, j; 
  
 scanf("%d", &qtdCand); 
  tCandidato candidatos[qtdCand]; 
  
 for(i = 0; i < qtdCand; i++){ 
  candidatos[i] = LeCandidato(); 
 } 
 
 OrdenaCrescente(candidatos, qtdCand); 
  
 for(i = 0; i < qtdCand; i++){ 
  ImprimeCandidato(candidatos[i]); 
 } 
  
    return 0;     
} 
 
tCandidato LeCandidato(){ 
 tCandidato candidato; 
 scanf("%*[^{]"); 
 scanf("%*[{ ]"); 
 scanf("%d", &candidato.codigo); 
 scanf("%*[, ]"); 
 scanf("%[^,],", candidato.sobrenome); 
 scanf("%*[ ]"); 
 scanf("%[^,],", candidato.nome);
 scanf("%d", &candidato.nota);
 scanf("%*[, ]");
 scanf("%d", &candidato.idade);
 scanf("%*[^\n]\n");

 return candidato;
} 
 
 
void ImprimeCandidato(tCandidato candidato){ 
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n",
        candidato.codigo, candidato.nome, candidato.sobrenome, candidato.nota, candidato.idade);
}

void OrdenaCrescente(tCandidato * vet, int qtd){
    int i = 0, troca = 0;
    
    //precisa ser com struct pq o valor comparado é uma struct
    tCandidato aux;

    do {
        troca = 0;
        for (i = 0; i < qtd - 1; i++){
                //se str1 > str2, retorna 1. se for igual retorna 0. se for o contrário, retorna - 1.
                //verifica isso aqui e guarda para descobrir a coparação entre eles
                int cmp = strcmp(vet[i].nome, vet[i+1].nome); //compara os nomes
                
                if(cmp == 0) {
                    //nomes iguais, desempata com sobrenome
                    cmp = strcmp(vet[i].sobrenome, vet[i+1].sobrenome);
                }

                //verifica se precisa trocar (bubblesort padrao)
                if(cmp > 0) {
                    aux = vet[i];
                    vet[i] = vet[i+1];
                    vet[i+1] = aux;

                    troca++;
            }
        }
    } while (troca > 0);
}