#include <stdio.h>
#include <stdlib.h>
#include "data.h"


void EhBissextoImprime(int a_ano){
    // if (a_ano % 400 == 0){
    //     printf("Bissexto\n");
    // } else if (a_ano % 100 == 0) {
    //     printf ("Normal\n");
    // }   else if (a_ano % 4 == 0 ){
    //     printf("Bissexto\n");
    // } else {
    //     printf("Normal\n");
    // }

    if (a_ano % 400 == 0){
        printf("Bisexto\n");
    } else if ((a_ano % 4 == 0) && (a_ano % 100 != 0)){
        printf("Bisexto\n");
    } else {
        printf("Normal\n");
    }
}

int EhBissexto(int a_ano){
    if (a_ano % 400 == 0){
        return 1;
    }

    if (a_ano % 100 == 0) {
        return 0;
    }

    if (a_ano % 4 == 0 ){
        return 1;
    }

    return 0;
}

//faz a verificação dos meses com os dias
int InformaQtdDiasNoMes(int a_mes, int a_ano){
    if (a_mes == 4 || a_mes == 6 || a_mes == 9 || a_mes == 11) {
        return 30;
    } else if (a_mes == 2) {
        if (EhBissexto(a_ano)) {
            return 29;
        } else {
            return 28;
        }
    } else {
        return 31;
    }
}

//retorna em tData a correção
int InformaQtdDiasNoMesTData(tData a_data) {
    int retornaData= InformaQtdDiasNoMes(a_data.mes, a_data.ano);

    return retornaData;
}

//faz a verificação completa
tData VerificaData(int a_data, int a_mes, int a_ano) {
    tData data;
    //atribui o valor do ano (não necessita de nenhuma verificação)
    data.ano = a_ano;

    //verifica se o dia do mês é valido
    if (a_mes > 12) {
        a_mes = 12;
    } else if (a_mes < 1) {
        a_mes = 1;
    }
    data.mes = a_mes;

    //verifica se o dia é válido
    int qtdDiasNoMes = InformaQtdDiasNoMes(a_mes, a_ano);
    //se a data passar da qtd de dias daquele mes, ele assume aquele ultimo dia
    if (a_data > qtdDiasNoMes) {
        a_data = qtdDiasNoMes;
    } else if (a_data < 1) {
        a_data = 1;
    }
    data.dia = a_data;

    return data;
}

tData LeData(){
    tData data;

    //tem que ler separadamente para fazer toda a verificação
    int dia, mes, ano;
    if (scanf("%02d %02d %04d", &dia, &mes, &ano) != 3) {
        printf("Passou da quantidade!");
        exit(1);
    }

    //após a leitura, vai chamar a função e data estará completa
    data = VerificaData(dia, mes, ano);

    return data;
}

void ImprimeData(tData data){
    printf("'%02d/%02d/%04d':", data.dia, data.mes, data.ano);
}