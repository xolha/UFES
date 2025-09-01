#include <stdio.h>
#include <math.h>

int verificapH(float pH) {
    if (pH == 7.0) return 0;
    else if (pH < 7.0) return 1;
    else return 2;
}

int verificaGotaChuvaAcida(float pH) {
    if (pH < 5.7) {
        return 1;
    } else {
        return 0;
    }
}

float porcentagem(float total, float valor) {
    return (valor / total) * 100;
}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal) {
    if ( porcentagemGotasChuvaAcida >= 75.0 ) {
        printf("Chuva Acida ");
    } else if ( porcentagemGotasChuvaNormal >= 75.0 ) {
        printf("Chuva Normal ");
    } else {
        printf("Chuva com indicios de chuva acida ");
    }
    printf("%.2f%% %.2f%%\n", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
}

int main () {
    int A, D, T;
    scanf("%d %d %d", &A, &D, &T);

    int totalGotas = A * D * T;

    if ( totalGotas == 0 ) {
        printf("Nenhuma gota foi avaliada\n");
        return 0;
    }

    int acidas = 0, neutras = 0, basicas = 0;
    int chuvaAcidaCount = 0;
    float P, maisAcido = 14.0, maisBasico = 0.0, maisNeutro = 0.0;
    float diferencaNeutro = 999.0;
    int i;

    for ( i = 0; i < totalGotas ; i++ ) {
        scanf("%f", &P);

        //classificação
        int tipo = verificapH(P);
        if ( tipo == 0 ) neutras++;
        else if ( tipo == 1 ) acidas++;
        else basicas++;

        //verifica chuva ácida
        if (verificaGotaChuvaAcida(P)) {
            chuvaAcidaCount++;
        }

        //mais ácido
        if (P < maisAcido) {
            maisAcido = P;
        }
        if (P > maisBasico) {
            maisBasico = P;
        }
        //proximo de 7
        float diferencaAtual = fabs(P - 7.0);
        if (diferencaAtual < diferencaNeutro) {
            diferencaNeutro = diferencaAtual;
            maisNeutro = P;
        }
    }

    printf("%d %d %d %.2f %.2f %.2f\n", acidas, basicas, neutras, maisAcido, maisBasico, maisNeutro);

    float porcentagemAcidas = porcentagem(totalGotas, chuvaAcidaCount);
    float porcentagemNormais = 100.0 - porcentagemAcidas;

    imprimeResultadosAnalise(porcentagemAcidas, porcentagemNormais);

    return 0;
}
