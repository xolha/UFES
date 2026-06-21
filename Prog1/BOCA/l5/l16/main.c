#include <stdio.h>
#include <stdlib.h>

/*
Dado o programa abaixo que lê candidatos de um
concurso  e  imprime  em  ordem  de  classificação  do  concurso  (do  primeiro  a  ser
chamado ao último), implemente a função que ordena os candidatos considerando a
prioridade de chamada dada por maior nota, menor idade, e menor código.
*/

typedef struct
{
    int codigo;
    char sobrenome[21];
    char nome[21];
    int nota;
    int idade;
} tCandidato;

tCandidato LeCandidato();
void ImprimeCandidato(tCandidato candidato);

void OrdenaCrescente(tCandidato *vet, int qtd);

int main()
{
    int qtdCand, i = 0, j;

    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    OrdenaCrescente(candidatos, qtdCand);

    for (i = 0; i < qtdCand; i++)
    {
        ImprimeCandidato(candidatos[i]);
    }

    return 0;
}

tCandidato LeCandidato()
{
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
void ImprimeCandidato(tCandidato candidato) { printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", candidato.codigo, candidato.nome, candidato.sobrenome, candidato.nota, candidato.idade); }

// ordena por nota -> idade -> codigo
void OrdenaCrescente(tCandidato *vet, int qtd)
{
    //é necessário uma flag aqui pq fazer um if aninhado com bubble sort dá problema
    int i, troca, deveTrocar = 0;
    tCandidato aux;
    do
    {
        troca = 0;

        for (i = 0; i < qtd - 1; i++)
        {
            deveTrocar = 0;
            // se as notas forem iguais
            if (vet[i].nota == vet[i + 1].nota)
            {

                // se as idades forem iguais
                if (vet[i].idade == vet[i + 1].idade)
                {

                    // desempata no código (que é único)
                    //e menor código
                    if (vet[i].codigo > vet[i + 1].codigo)
                    {
                deveTrocar = 1;

                    }
                }
                //quero a menor idade
                else if (vet[i].idade > vet[i + 1].idade)
                {
                deveTrocar = 1;
                }
            } else if (vet[i].nota < vet[i+1].nota){
                deveTrocar = 1;
            }

            if(deveTrocar)
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
                troca++;
            }
        }
    } while (troca > 0);
}