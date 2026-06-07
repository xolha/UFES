#include <stdio.h>
#include "data.h"

int main() {
    /*
    Entrada: Sua entrada deverá conter os 3 valores (dia, mês e ano) da data inicial e 3 valores 
    (dia, mês e ano) da data final. Os valores das datas estarão separados por um espaço em 
    branco, e cada data estará em uma linha diferente. 
    */

   //chamo as datas e uma que será a base do for
    tData dataInicio, dataFinal, data;

    dataInicio = LeData();
    dataFinal = LeData();

    data = dataInicio;

    while(ComparaData(data, dataFinal) < 0) {
        ImprimeData(data);
        data = AvancaDia(data);
    }

    return 0;
}