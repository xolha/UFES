#include <stdio.h>

//contexto: dado um intervalo, ver se dentro dele existe um numero que satisfaça uma propriedade em especifico

int main(){
    //primeiro fazer a declaração de duas variaveis principais, duas auxiliares e uma para o for
    //segundo ler tudo isso
    //fazer a verificação se está dentro dos conformes  1000 < n,m < 9999 e n<m.
    //fazer o primeiro for com o intervalo ABERTO
    //fazer a comparação com I para ver se ele satisfaz a seguinte propriedade:
    //3025=> 30-ab + 25-cd => 55 => 55*55 = 3025. usar /100 -ab e %100-cd
    //printar isso
    int a, b, i = 0, ab, cd, soma = 0, mult = 0;
    scanf("%d %d", &a, &b);
    
    if (1000 > a || b > 9999 || a>b) {
        return 0;
    }

    for ( i = a + 1; i < b; i++) {
        ab = i / 100;
        cd = i % 100;

        soma = ab + cd;
        mult = soma*soma;

        if (mult == i){
            printf("%d\n", i);
        }
    }

    return 0;
}