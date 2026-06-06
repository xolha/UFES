#include <stdio.h>
#include "produto.h"

tProduto LeProduto() {
    tProduto produtoRetornado;

    //le o produto, se passar de 3, o programa fecha
    if(scanf("%d;%f;%d", &produtoRetornado.codigo, &produtoRetornado.preco, &produtoRetornado.quantidade) != 3 ) {
        printf("Passou da quantidade!");
        exit (1);
    }

    return produtoRetornado;
}

//isso aqui pode ser feito de formas mais intuitivas, não precisa inventar moda
int TemProdutoEmEstoque(tProduto p){
    return p.quantidade > 0;
}

int EhProduto1MaiorQ2(tProduto p1, tProduto p2){
    return p1.preco > p2.preco;
}

int EhProduto1MenorQ2(tProduto p1, tProduto p2) {
    return p1.preco < p2.preco;
}

//só imprime o essencial
void ImprimeProduto(tProduto p){
    printf("COD %d, PRE %.2f, QTD %d", p.codigo, p.preco, p.quantidade);
}