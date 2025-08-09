//PROGRAMA PARA DIZER A QUANTIDADE DE NUMEROS NEGATIVOS, POSITIVOS, A SOMA DOS NEGATIVOS E SOMA DOS POSITIVOS

#include <stdio.h>

int main() {
    int num;
    int quantPos = 0, quantNeg = 0, somaPos = 0, somaNeg = 0;

    //entrada -> o legal dessa questão e desse while é q ele so vai parar de ler numero quando vir um caractere diferente
    while (scanf("%d", &num) == 1) { //eu tenho q lembrar q esses programas ja sabem oq é um numero negativo e positivo, e q n eu n preciso fazer nada milaborante para que ele consiga entender isso porque ele é um bentido computador
        if ( num < 0 ) {
            quantNeg++;
            somaNeg += num;
        } else if ( num > 0 ) {
            quantPos++;
            somaPos += num;
        }
    }

    printf("%d %d %d %d", quantNeg, quantPos, somaNeg, somaPos);

    return 0;
}