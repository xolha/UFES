#ifndef DATA_H
#define DATA_H

typedef struct {
    int dia;
    int mes;
    int ano;
} tData;

tData LeData();
tData VerificaData(int a_data, int a_mes, int a_ano);
int InformaQtdDiasNoMes(int a_mes, int a_ano);
int InformaQtdDiasNoMesTData (tData a_data);
void EhBissextoImprime(int a_ano);
int EhBissexto(int a_ano);
void ImprimeData(tData data);

#endif