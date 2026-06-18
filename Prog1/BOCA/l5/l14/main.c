#include <stdio.h>
#include <stdlib.h>

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

int ComparaString(char *str1, char *str2);

int main()
{
    int qtdCand, i = 0;

    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    //comparar se os sobrenomes são iguais
    int j, impresso[qtdCand]; //verifica os q ja foram impressos

    for(i = 0; i < qtdCand; i++) impresso[i] = 0;

    for(i = 0; i < qtdCand; i++){
        if(impresso[i]){
            continue;
            //se aquela posição ja foi lida, pula para a proxima
        }

        //flag
        int temRepetido = 0;
        for (j = 0; j < qtdCand; j++){
            //se a posição for diferente e ter retornado verdadeiro, tem o msm sobrenome
            if (i != j && (ComparaString(candidatos[i].sobrenome, candidatos[j].sobrenome))){
                temRepetido = 1;
                break;
            }
        }

        if(temRepetido){
            for (j = 0; j < qtdCand; j++){
                //imprime i e todos os sobrenomes iguais ao dele em sequencia
                if( !impresso[j] && ComparaString(candidatos[i].sobrenome, candidatos[j].sobrenome   )){
                    ImprimeCandidato(candidatos[j]);
                    impresso[j] = 1;
                }
            }
        }
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

void ImprimeCandidato(tCandidato candidato) {
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", candidato.codigo, candidato.nome,
        candidato.sobrenome, candidato.nota, candidato.idade);
}

//mesma lógica do concatenar string
int ComparaString(char *str1, char *str2){
    int i = 0, qtd1 = 0, qtd2 = 0, ehIgual = 1;

    //conta a quantidade de caracteres
    while(str1[i] != '\0'){
        qtd1++;
        i++;
    }

    i = 0;

    //conta os caracteres da outra string
    while(str2[i] != '\0'){
        qtd2++;
        i++;
    }

    //verifica se a quantidade é igual e atualiza a flag
    if (qtd1 != qtd2) {
        ehIgual = 0;
    }

    i = 0;

    while(str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]){
            ehIgual = 0;
            break;
        }
        i++;
    } 

    if (ehIgual) {
        return 1;
    } else {
        return 0;
    }
}