#include <stdio.h>
#include "data.h"

int main() {
    tData data;
    int contador = 0, n;

    scanf("%d", &n);
    //enquanto o contador não chegar naquele valor, diz quais anos são bissextos;
    while(contador < n){
        data = LeData();

        ImprimeData(data);
        EhBissextoImprime(data.ano);

        contador++;
    }


    return 0;
}