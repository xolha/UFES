#include <stdio.h>
#define MAX_ALUNOS 10
/* Programa que analisa informações sobre alunos*/

int escolhaAluno(int tamanho) {
    int escolha;
    if (tamanho ==0 ) {
        printf("Nenhum aluno matriculado!");
        return -1;
    }

    while (1) {
        printf("\nEscolha um aluno [0 a %d]: ", tamanho );
        scanf("%d", &escolha);
        if (escolha >= 0 && escolha <= tamanho) {
           return escolha;
        } else {
            printf("Escolha invalida! Aluno nao amtriculado");
        }
    }

} //voce escolhe o aluno

void estudar(float alunos[], int indice) {
    if (alunos[indice] < 10.0) {
        alunos[indice] += 0.5f;
    }
} //"manda o aluno estudar"

void avaliar(const float alunos[], int indice) {
    if ( alunos[indice] >= 6.0 ) {
        printf("Aluno [%d] aprovado!\n", indice);
    } else {
        printf("Aluno [%d] reprovado!\n", indice);
    }
} //ve se o aluno está aprovado

void imprimeNota(float alunos[], int indice) {
    printf("O alunos %d tem nota: %.2f\n", indice, alunos[indice]);
} //imprime a nota

void inserirAluno(float alunos[], int *tamanho) {
    if (*tamanho >= MAX_ALUNOS) {
        printf("Erro! Matriculas esgotadas");
        return;
    }

    alunos[*tamanho] = 0.0f;

    *tamanho += 1;
    printf("Alunos matriculados: %d", *tamanho);
} //adiciona aluno

void mudarNota(float alunos[], int indice) {
    float nota = 0.0f;
    while (1) {
        printf("Insira a nova nota: ");
        scanf("%f", &nota);
        if ( nota >= 0 && nota <= 10 ) {
            alunos[indice] = nota;
            return;
        }
        printf("\nA nota precisa ser de 0.0 a 10.0!");
    }
} //muda a nota de algum aluno

void excluirAluno(int *tamanho) {
    *tamanho -= 1;
    printf("Alunos matriculados: %d", *tamanho);
} //exclui um aluno

float maiorNota(const float alunos[], int tamanho) {
    float maior = alunos[0];
    int i;

    for (i = 0; i < tamanho; i++) {
        if (maior < alunos[i]) {
            maior = alunos[i];
        }
    }
    return maior;
} //ve a maior nota

float menorNota(const float alunos[], int tamanho) {
    float menor = alunos[0];
    int i;

    for (i = 0; i < tamanho; i++) {
        if (menor > alunos[i]) {
            menor = alunos[i];
        }
    }
    return menor;
} //ve a menor nota


int main() {
    float aluno[MAX_ALUNOS];
    float alunos[MAX_ALUNOS];
    int indice = 0;
    int tamanho = 0;
    int opcao;

    while(1) {
        printf("\nOpcoes: [1] - Estudar | [2] - Avaliar | [3] - Imprimir nota | [4] - Mudar nota | [5] - Maior nota | [6] - Menor nota | [7] - Inserir aluno | [8] - Excluir aluno | [9] - Sair \nEscolha\n");
        scanf("%d", &opcao);

         switch (opcao) {
             case 1:
                 indice = escolhaAluno(tamanho);
                 estudar(aluno, indice);
                 break;

             case 2:
                 indice = escolhaAluno(tamanho);
                 avaliar(aluno, indice);
                 break;

             case 3:
                 indice = escolhaAluno(tamanho);
                 imprimeNota(aluno, indice);
                 break;

             case 4:
                 indice = escolhaAluno(tamanho);
                 mudarNota(aluno, indice);
                 break;

             case 5:
                 printf("\nMaior nota: %.2f", maiorNota(alunos, tamanho));
                 break;

             case 6:
                 printf("\nMenor nota: %.2f", menorNota(alunos, tamanho));
                 break;

             case 7:
                 inserirAluno(alunos, &tamanho);
                 break;

             case 8:
                 excluirAluno(&tamanho);
                 break;

             case 9:
                 return 0;

             default:
                 printf("Opcao invalida");
         }
    }
}
