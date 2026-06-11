#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    scanf("%d", &n);

    int postes[n], poste, i;

    //loop de lida
    for (i = 0; i < n; i++){
        scanf("%d", &poste);

        //recebe o valor do poste e guarda no array
        postes[i] = poste;
    }

    //assume q o primeiro par é a maior diferença
    int maxDif = abs(postes[0] - postes[1]);

    //loop da diferença dos pares
    for (i = 0; i < n - 1; i++){
        int dif = abs(postes[i] - postes[i+1]);

        if (dif > maxDif){
            maxDif = dif;
        }
    }


    //loop de impressão
    for (i = 0; i < n -1;i++){

        //se aquele par tiver o esmo valor q maxdif
        if (abs(postes[i] - postes[i+1]) == maxDif){
            printf(" (%d %d)", i, i+1);
        }
    }

    if (n < 2){
        printf("IMPOSSIVEL");
    }
    return 0;
}