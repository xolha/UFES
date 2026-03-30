#include <stdio.h>

//contexto: calcular a media de duas notas de um aluno e dizer se ele foi aprovado

int main() {
    //primeiro declarar dois valores inteiros
    int nota1, nota2;
    //segundo ler esses dois valores
    scanf("%d %d", &nota1, &nota2);
    //calcular a media dos valores
    float media = (nota1 + nota2) / 2.0;
    //fazer a condição se o aluno foi aprovado, reprovado ou de recuperação
    if (media >= 7.0) {
        printf("%.1f - Aprovado", media);
    } else if ( media < 5.0) {
        printf("%.1f - Reprovado", media);
    } else {
        printf("%.1f - De Recuperacao", media);
    }

    return 0;
}