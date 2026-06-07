#include <stdio.h>
#include <stdlib.h>
#include "data.h"

//esquema pra ver se o ano é bissexto
int EhBissexto(int a_ano) {
    if (a_ano % 400 == 0) {
        return 1;
    }

    if (a_ano % 100 == 0) {
        return 0;
    }

    if (a_ano % 4 == 0) {
        return 1;
    }

    return 0;
}

//funçãoo básica para retornar a qtd de dias daquele mes
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

int InformaQtdDiasNoMesTData(tData data){
    int retornaData = InformaQtdDiasNoMes(data.mes, data.ano);

    return retornaData;
}

tData VerificaData(int a_dia, int a_mes, int a_ano){
    tData data;

    //recebe o valor do ano
    data.ano = a_ano;

    //faz a verificação do mês
    if (a_mes > 12) {
        a_mes = 12;
    } else if (a_mes < 1) {
        a_mes = 1;
    }
    //recebe no data
    data.mes = a_mes;

    //verifica se o dia informado não passa da quantidade de dias reais daquele mês
    int qtdDiasNoMes = InformaQtdDiasNoMes(a_mes, a_ano);
    if (a_dia > qtdDiasNoMes) {
        a_dia = qtdDiasNoMes;
    } else if (a_dia < 1) {
        a_dia = 1;
    }
    data.dia = a_dia;

    return data;
}

tData AvancaDia(tData data) {
    if (data.dia < InformaQtdDiasNoMesTData(data)) {
        data.dia++;
    } else {
        data.dia = 1;
        if (data.mes < 12) {
            data.mes++;
        } else {
            data.dia = 1;
            data.mes = 1;
            data.ano++;
        }
    }

    return data;
}

int ComparaData (tData d1, tData d2){
    //precisamos comparar separadamente pois C não entende esse tipo de coisa num for
    //-1 -> menor; 0 -> possível condição de parada (qunado intervalo aberto); 1 -> condição de parada mesmo (intervalo fechado/aberto)

    //PRIMEIRO compara o ano
    if (d1.ano < d2.ano) {
        return -1;
    }
    if (d1.ano > d2.ano) {
        return 1;
    }

    if (d1.mes < d2.mes) {
        return -1;
    }
    if (d1.mes > d2.mes) {
        return 1;
    }

    if (d1.dia < d2.dia) {
        return -1;
    }
    if (d1.dia > d2.dia) {
        return 1;
    }

    //condição de parada
    return 0;
}

tData LeData(){
    tData data;
    int dia, mes, ano;

    if(scanf("%02d %02d %04d", &dia, &mes, &ano) != 3){
        printf("Passou da quantidade!");
        exit(1);
    }

    data = VerificaData(dia, mes, ano);

    return data;
}

void ImprimeData (tData data){
    printf("'%02d/%02d/%04d'\n", data.dia, data.mes, data.ano);
}