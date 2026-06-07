#include <stdio.h>
#include <stdlib.h>

#define APROVADO(x) (x >= 7)
#define RECUPERACAO(x) (x < 7 && x >= 5)
#define REPROVADO(x) (x < 5 && x >= 0)

typedef struct {
    char nome[50];
    int matricula;
    float notas[3];
    float media;
} tAluno;

tAluno leAluno();
float calculaMedia(tAluno aluno);
void imprimeSituacao(tAluno aluno);

int main(){
    int i, n;
    float mediaFinal = 0;

    tAluno aluno, melhorAluno;

    melhorAluno.media = 0;

    scanf("%d", &n);
    if (n < 1 || n > 100) {
        printf("Passou da quantidade de alunos!");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        aluno = leAluno();

        //melhor aluno
        if (aluno.media > melhorAluno.media){
            melhorAluno = aluno; 
        }

        //soma media
        mediaFinal = mediaFinal + aluno.media;
    }

    mediaFinal = mediaFinal/n;

    printf("Melhor aluno: %s\n", melhorAluno.nome);
    printf("Media da turma: %.2f\n", mediaFinal);
}

tAluno leAluno(){
    tAluno aluno;

    if (scanf("%s %d %f %f %f", aluno.nome, &aluno.matricula, &aluno.notas[0], &aluno.notas[1], &aluno.notas[2]) != 5){
        printf("Informou mais do que 3 dados!");
        exit(1);
    }

    //chama a média
    //como tem um campo do aluno q guarda a media, não faz sentido ter que calcular de novo 
    aluno.media = calculaMedia(aluno);

    return aluno;
}

float calculaMedia(tAluno aluno){
    //lembrar que é assim que pega o valor dos vetores
    float media = (aluno.notas[0] + aluno.notas[1] + aluno.notas[2])/3;

    return media;
}

void imprimeSituacao(tAluno aluno) {

    //imprime com a situacao de cada um
    if (APROVADO(aluno.media)) {
        printf("%s: APROVADO (media %.2f)\n", aluno.nome, aluno.media);
    } else if (RECUPERACAO(aluno.media)) {
        printf("%s: RECUPERACAO (media %.2f)\n", aluno.nome, aluno.media);
    } else if (REPROVADO(aluno.media)){
        printf("%s: REPROVADO (media %.2f)\n", aluno.nome, aluno.media);
    }
}