#include <stdio.h>

/*
 Faça  um  programa  que  lê  notas  (de 0  a  100) de N 
participantes de um concurso para um vetor. No final, o programa deverá dizer se o 
vetor está ordenado em ordem crescente, decrescente, ou se está desordenado. 
*/

int main() {
    int n, i;

    scanf("%d", &n);

    int notas[n], nota;

    //loop de lida
    for (i = 0; i < n; i++){
        scanf("%d ", &nota);

        //guarda a nota lida no vetor
        notas[i] = nota;
    }

    //variaveis auxiliares para dizer se a função é cresecente ou não
    int crescente = 1, decrescente = 1;
    
    //loop de verificação da ordem
    for (i = 0; i < n - 1; i++){
        if (notas[i] > notas[i+1]) {
            //como 1 é maior, então não é crescente
            crescente = 0;
        } else if (notas[i] < notas[i+1]){
            //como 1 é menor, então não é decrescente
            decrescente = 0;
        }
    }
    //acho q nesse caso eu poderia ter assumido o inverso também, é tudo falso e só se torna verdadeiro se for aquilo ali


    if (crescente && decrescente){
        printf("CRESCENTE&DECRESCENTE");
    } else if (crescente){
        printf("CRESCENTE");
    } else if (decrescente) {
        printf("DECRESCENTE");
    } else {
        printf("DESORDENADO");
    }

    return 0;
}