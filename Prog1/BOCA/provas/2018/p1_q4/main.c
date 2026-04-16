#include <stdio.h>

//contexto: dado um horário e uma soma de minutos a este horário, dizer o horário total em dias, horas e minutos

int main() {
    //primeiro declarar 3 variaiveis
    //segundo ler todas essas variaveis
    //terceiro fazer a transformação de horas para minutos
    //quarto fazer a decodificação dos minutos totais e separar em dias, horas (Total / 60) e minutos
    //OBS.: SE FOR 0 DIAS, NEM APARECE, SE FOR 1 TEM Q APARECER NO SINGULAR
    int horas, minutos, incremento;
    scanf("%d:%d %d", &horas, &minutos, &incremento);

    int total = ((horas * 60) + minutos) + incremento;

    int D, H, M;

    D = total / 1440;
    total = total % 1440;
    H = total / 60;
    total = total % 60;
    M = total;

    if ( D > 0) {
        if ( D == 1 ){
            printf("(%d dia)", D);
        } else {
            printf("(%d dias)", D);
        }
    }

    if ( H > 0) {
        if (H == 1) {
            printf("(%d hora)", H);
        } else {
            printf("(%d horas)", H);
        }
    }

    if ( M > 0) {
        if (M == 1) {
            printf("(%d minuto)", M);
        } else {
            printf("(%d minutos)", M);
        }
    }

    printf("\n");

    return 0;
}