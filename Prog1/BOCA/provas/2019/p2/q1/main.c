#include <stdio.h>

//contexto: dizer o custo de tipos de papel que será dado 

int main() {
    //primeiro declarar 3 variaveis para a precificação, soma, uma para a quantidade de itens, uma para o for da proxima lida
    //ler tudo as 3 variaveis de preço
    //ler a sequencia
    //fazer o for ate a sequencia intervalo fechado e começa em 1
    //le os novos caracteres e compara se eles são do tipo 1, 2, ou 3;
    //fazer a multiplicação com seu respectivo preço
    //lembrar de somar.
    int preco1, preco2, preco3, a, soma = 0, tipoPapel, papel1 = 0, papel2 = 0, papel3 = 0, contador = 0;
    scanf("%d %d %d", &preco1, &preco2, &preco3);

    scanf("%d", &a);
    
    while (contador < a){
        scanf("%d", &tipoPapel);
        
        switch (tipoPapel) {
            case 1:
                papel1 = papel1 + preco1;
            break;
            case 2:
                papel2 = papel2 + preco2;
            break;
            case 3:
                papel3 = papel3 + preco3; 
            break;
        }
       
        soma = papel1 + papel2 + papel3;

        contador++;
    }

    printf("CUSTO:%d\n", soma);

    return 0;
}