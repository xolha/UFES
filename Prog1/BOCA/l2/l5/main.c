#include <stdio.h>
#include <math.h>

//contexto calcular o somatório de pi

int main() {
    //primeiro ler uma variavel n
    //segundo declarar essa variavel junto com um k que será usada no for
    //terceiro declara o for
    //quarto fazer o esquema da formula 
    //tira da raiz só no final(?)
    int n, k = 1;
    double somatorio = 0, soma = 0;

    scanf("%d", &n);

    do {
        soma += 1.0/(k * k);
        
        k++;
    
    } while (k <= n);

    somatorio = sqrt(6.0 * soma);

    printf("%.6f", somatorio);

    return 0;
}