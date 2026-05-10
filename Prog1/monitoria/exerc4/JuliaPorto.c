#include <math.h>
#include <stdio.h>

//contexto: determinar os numeros narcisista dentro de um intervalo fechado
//usar o pow

int main() {
    //declarar duas variaveis para o intervalo, uma para o for, uma para soma, uma qtdAlgarismos e uma para separar os algarismo
    //ler isso aí
    //fazer o intervalo com o for
    //descobrir a quantidade de algarismo
    //fazer a separação dos algarimos do while
    //verificar se o numero é narcisita e imprimir a sequencia
    //obs.: se uma das entradas for negativa, o programa para
    
    int start, end, i = 0, soma = 0, qtdAlgarismos = 0, algarismo = 0, numeroOriginal = 0, numeroModificado = 0;

    scanf("%d %d", &start, &end);

    if (start < 0 || end < 0){
        printf("Intervalo invalido!\n");

        return 0;
    }

    for (i = start; i <= end; i++) {
        soma = 0;
        qtdAlgarismos = 0;
        
        numeroOriginal = i;
        numeroModificado = i;

        while (numeroModificado > 0) {
            numeroModificado = numeroModificado / 10;
            qtdAlgarismos++;
        }

        while (numeroOriginal > 0) {
            algarismo = numeroOriginal % 10;
            soma = soma + (int)pow(algarismo, qtdAlgarismos);

            numeroOriginal = numeroOriginal / 10;
        }

        if ( i == soma) {
            printf("%d ", i);
        }   
    }
    
    return 0;
}