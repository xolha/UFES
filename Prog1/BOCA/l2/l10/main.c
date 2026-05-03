#include <stdio.h>

//contexto: uma tabuada

int main() {
    //declarar duas variaveis principais e duas auxiliares
    //segundo ler tudo isso
    //fazer o for do intervalo fechado
    //fazer o outro for para a tabuada de 1 até 10 multiplacando os valores -> a mantém o valor, b++
    int n, m, a = 0, b = 0;
    scanf("%d %d", &n, &m);

    for (a = n; a <= m; a++) {
        for (b = 1; b <= 10; b++) {
            printf("%d x %d = %d\n", a, b, a*b);
        }
    }

    return 0;
}