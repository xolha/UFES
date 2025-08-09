//PROGRAMA PARA LER PRODUTOS

#include <stdio.h>

typedef struct {
    int cod;
    float pre;
    int qtd;
} tProduto; // para acessar ele é só escrever tProduto p, onde p -> p.codigo, p.preco, p.quantidade;

//

tProduto LeProduto() {
    tProduto p;
    scanf("%d;%f;%d", &p.cod, &p.pre, &p.qtd);
    return p;
}
//
int EhProduto1MaiorQ2(tProduto p1, tProduto p2) {
    return (p1.pre > p2.pre);
}
//
int EhProduto1MenorQ2(tProduto p1, tProduto p2) {
    return ( p1.pre < p2.pre);
}
//
int TemProdutoEmEstoque(tProduto p) {
    return p.qtd > 0; //vai retornar somente se o produto for maior que zero
}
//
void ImprimeProduto(tProduto p) {
    printf("COD %d, PRE %.2f, QTD %d\n", p.cod, p.pre, p.qtd);
}

////////////////////////////////////////

int main() {
    int qtdProdutos, i;
    scanf("%d", &qtdProdutos); //quantidade de produtos a serem inseridos

    tProduto produtos = LeProduto();
    tProduto maior = produtos;
    tProduto menor = produtos;

    if (!TemProdutoEmEstoque(produtos)) { //ja começa vendo se tem algo em falta
        printf("FALTA:");
        ImprimeProduto(produtos);
    }

    for (i = 1; i < qtdProdutos; i++) { //para ver o restante dos produtos cadastrados
        produtos = LeProduto();

            if (!TemProdutoEmEstoque(produtos)) { //ja começa vendo se tem algo em falta
            printf("FALTA:");
            ImprimeProduto(produtos);
        }

        if (EhProduto1MaiorQ2(produtos, maior)) {
            maior = produtos;
        }

        if (EhProduto1MenorQ2(produtos, menor)) {
            menor = produtos;
        }
    }

    //printando o maior valor
    printf("MAIOR:");
    ImprimeProduto(maior);

    //printando o menor valor
    printf("MENOR:");
    ImprimeProduto(menor);

    return 0;
}