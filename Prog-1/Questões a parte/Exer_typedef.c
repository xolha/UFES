#include  <stdio.h>
#include  <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} tData; //deixando do lado de fora, não necessariamente precisa estar no main

int EhBissexto (tData a_data) {
    if (!(a_data.ano%400)) { //isso significa "se o ano é divisível por 400, se for, ele é bissexto
        return 1; //retorna 1 porque é verdadeiro
    }
    if (!(a_data.ano%100)) { //se ele for divisível por 100, então ele não é bissexto
        return 0;
    }
    if (!(a_data.ano%4)) { //se ele for divisível por 4, então ele é bissexto
        return 1;
    }

    return 0; //se não atender nenhum dos critérios acima
}

int InformaQtdDiasnoMes (tData a_data) {
    if (a_data.mes == 4 || a_data.mes == 6 || a_data.mes == 9 || a_data.mes == 11 ) {
        return 30;
    }
    if ( a_data.mes == 2 ) {
        if ( EhBissexto (a_data) ) {
            return 29;
        }
        return 28;
    }
    return 31;
}

//funcao para garantir que a data seja valida
tData InicializaDataParam (int a_dia, int a_mes, int a_ano ) {
    tData data; //transformando uma das infos do struct em variável
    int qtdDiasNoMes;
    data.ano = a_ano; //pegando o tipo do struct e transformando numa variável para ser usada no programa

    if (a_mes > 12 ) { //garantido que tudo seja um mes
        a_mes = 12;
    } else  if (a_mes < 1) {
        a_mes = 1;
    }

    data.mes = a_mes;
    qtdDiasNoMes = InformaQtdDiasnoMes (data); //esse eu não entendi muito bem como funciona
    if ( a_dia > qtdDiasNoMes ) { //tipo, se o dia for maior que a quantidade de dias que tem num mes, ele vai retornar 31, eu acho
        a_dia = qtdDiasNoMes;
    } else if (a_dia < 1) {
        a_dia = 1;
    }

    data.dia = a_dia; //no final eu so valido que a_dia vem do struct

    return data;
}

tData LeData() {
    tData dataRtn;

    int d, m, a;

    if (scanf ("%d %d %d", &d, &m, &a) != 3) {
        printf ("ERRO: Formato de data invalida!");
        exit (1); //exit serve para voltar ao programa do 0
    }

    dataRtn = InicializaDataParam (d, m, a); //pegou a validação da função acima e no fim verificou se ela está num parâmetro válido

    return dataRtn; //retorna somente se ela estiver no parâmetro válido
}

void ImprimeData (tData data) { //tem que ser assim - tData data - porque ele ta pegando a informação da data!
    printf("'%02d/%02d/%04d'", data.dia, data.mes, data.ano); //esse 02 significa que somente dois dígitos serão aceites
}


int EhIgual ( tData a_data1, tData a_data2 ) {
    return a_data1.dia ==  a_data2.dia && a_data1.mes == a_data2.mes && a_data1.ano == a_data2.ano;
}

int main () {
    tData data;

    data = LeData();
    ImprimeData (data);

    return 0;
}