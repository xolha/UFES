#include <stdio.h>
#define BIMESTRES_ANUAIS 4
#define NUMERO_DE_ALUNOS 4

int main() {
    float notasAlunos[BIMESTRES_ANUAIS][NUMERO_DE_ALUNOS] = {0};
    float mediaAlunos[NUMERO_DE_ALUNOS] = {0};
    float media = 0;
    int i, j;

    for ( i = 0; i < NUMERO_DE_ALUNOS; i++) { //coluna primeiro (?)
        printf("Insira as notas do aluno %d\n", i + 1); //como ele começa a contar do 0, adicionar o mais um faz com que ele conte a partir do 1
        for ( j = 0; j < BIMESTRES_ANUAIS; j++) { //linha
            scanf("%f", &notasAlunos[i][j]);
            media += notasAlunos[i][j];
        }
        mediaAlunos[i] = (media / BIMESTRES_ANUAIS);
        media = 0; //a média tem que zerar aqui porque se não ela vai repetir tudo de novo no próximo ciclo
    }

for ( i = 0; i < NUMERO_DE_ALUNOS; i++) {
    printf("A media do aluno %d eh %.2f\n", i + 1, mediaAlunos[1]);
}

    return 0;
}