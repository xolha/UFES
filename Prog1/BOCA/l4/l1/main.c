#include <stdio.h>
#include <stdlib.h>
//papagaida aí
#include "produto.h"

int main() {
    tProduto product, maior, menor;
    int qtd, contador = 0;
    scanf("%d", &qtd);

    while (contador < qtd) {
        product = LeProduto();
        //se não tem produto no estoque -> pode ja ir imprimindo, não é um problema
        if(!(TemProdutoEmEstoque(product))){
            printf("FALTA:");
            ImprimeProduto(product);
            printf("\n");
        }

        //se for o primeiro produto
        if (contador == 0) {
            //guarda os primeiros dados
            maior = product;
            menor = product;
        }

        //faz a verificação
        if (EhProduto1MaiorQ2(product, maior)) {
            maior = product;
        }
        if(EhProduto1MenorQ2(product, menor)) {
            menor = product;
        }
        contador++;
    }

    printf("MAIOR:");
    ImprimeProduto(maior);
    printf("\n");

    printf("MENOR:");
    ImprimeProduto(menor);
    printf("\n");    

    return 0;
}
