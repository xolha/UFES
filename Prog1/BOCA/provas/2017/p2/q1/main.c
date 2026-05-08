#include <stdio.h>
#include <limits.h>

//contexto: dado um numero que ditará a sequencia, dizer a posição do menor numero

int main() {
    //primeiro declarar a variavel da sequencia, i do for, menorNumero e uma para a posição do menor numero
    //segundo ler essas variaveis
    //fazer o for usando o contador
    //dentro dele, verificar quem é o menor numero e a posição dele
    //por fim, printar POS:%d posicaoMenorNumero
    int a, i = 0, b, menorNumero, posicaoMenorNumero = 0, primeiraAparicao;
    scanf("%d", &a);

    menorNumero = INT_MAX;

    for (i = 1; i <= a; i++) {
        scanf("%d", &b);

        if (b < menorNumero) {
            menorNumero = b;
            posicaoMenorNumero = i;
            primeiraAparicao = i;

        } else if ( b == menorNumero) {
            posicaoMenorNumero = primeiraAparicao;
        }
    }

    if ( a == 0 ) {
        printf("");
         
        return 0;
    }

    printf("POS:%d", posicaoMenorNumero);

    return 0;
}