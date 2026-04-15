#include <stdio.h>

//contexto: sou um caixa com notas infiintas e devo dizer quando o troco de um valor é maior ou se são iguais

int main() {
    //primeiro declarar duas variaveis
    //segundo ler as duas variaiveis
    //terceiro implementar o ssitema de quantas notas de 5 e de 1 serão utilizadas naquele valor
    //quarto fazer a comparação de qual troco foi maior ou dizer se são iguais
    //OBS.: O QUE DIZ SE O TROCO É MAIOR É A QUANTIDADE DE NOTAS QUE VOCê SEPAROU

    int valor1, valor2;
    scanf("%d %d", &valor1, &valor2);

        int notas5, notas1;

        notas5 = valor1 / 5;
        valor1 = valor1 % 5;
        notas1 = valor1;

        int total1 = notas5 + notas1;

        notas5 = valor2 / 5;
        valor2 = valor2 % 5;
        notas1 = valor2;

        int total2 = notas5 + notas1;

        if (total1 == total2) {
            printf("Iguais!");
        } else if (total1 > total2) {
            printf("QTD troco 1 eh maior!");
        } else {
            printf("QTD troco 2 eh maior!");
        }

    return 0;
}