#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ALUNOS 50

//alunos
typedef struct {
    char name[50];
    int id;
    float nota;
    char turma;
} tAluno;

tAluno aluno [MAX_ALUNOS];
int qtdAlunos = 0;

void cadastrarAluno () {
    if (qtdAlunos >= MAX_ALUNOS) {
        printf("Nao ha mais vagas!");
        return;
    }

    //Aluno novo
    tAluno alunoNovo;

    printf("Digite o nome do aluno: \t");
    scanf("%s", alunoNovo.name);

    printf("Digite a nota do aluno(0 a 10): \t");
    scanf("%d", &alunoNovo.nota);

    printf("Digite a turma do aluno (a, b ou c): \t");
    scanf(" %c", &alunoNovo.turma);

    //criar o id
    alunoNovo.id = qtdAlunos;
    aluno[qtdAlunos] = alunoNovo;
    qtdAlunos++;

    printf("Aluno cadastrado com sucesso! Seu ID eh %d\n", alunoNovo.id);
}

void consultarAluno (tAluno alunos[], int qtdAlunos) {
    int idBuscado;
    printf("Digite o ID do aluno que deseja consultar: \t\n");
    scanf("%d", &idBuscado);

    if (idBuscado >= qtdAlunos || idBuscado < 0) {
        printf("Nao ha nenhum aluno com esse id!");
    } else {
        tAluno alunoNovo = aluno[idBuscado];
        printf("Nome do aluno: \t%s\n"
               "Nota do aluno \t%.2f\n"
               "Turma do aluno: %c\n"
               , alunoNovo.name, alunoNovo.nota, alunoNovo.turma);
    }
}

int descadastrarAluno (tAluno alunos[], int qtdAlunos) {
    int idBuscado;
    printf("Digite o ID do aluno a ser descadastrado: \t\n");
    scanf("%d", &idBuscado);

    if (idBuscado >= qtdAlunos || idBuscado < 0) {
        printf("Nao ha nenhum aluno com esse id!");
    } else {
        tAluno alunoNovo = aluno[idBuscado];
        int i;
        for ( i = idBuscado; i < qtdAlunos - 1; i++) { //isso faz com que ele seja deslocado um valor no vetor
            alunos[i]= alunos[i + 1];
        }
        qtdAlunos--;
        printf("O aluno com o ID %d foi descadastrado do sistema!\n", idBuscado);
    }
    return qtdAlunos;
}

int main() {
    int opcao;
    tAluno alunos[MAX_ALUNOS];

    while (1) {
        printf("[1] - Cadastrar aluno | [2] - Consultar aluno | [3] - Descadastrar aluno | [4] - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;

            case 2:
                consultarAluno(alunos, qtdAlunos);
                break;

            case 3:
                descadastrarAluno(alunos, qtdAlunos);
                break;

            case 4:
                return 0;
            default:
                printf("Nao eh uma opcao valida!");
        }
    }
}