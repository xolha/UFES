#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char modelo[20];
    char marca[20];
    int ano;
    float km;
    char placa[20];
    char cor[20];
    float preco;
} tCarro;

typedef struct {
    char nome[20];
    int qtdCarros;
    tCarro carro[50];
} tConcessionaria;

///
tConcessionaria LeConcessionaria(); //
tCarro LeCarro(); //
tConcessionaria CadastraCarro(tConcessionaria Concessionaria);//
void ImprimeCarro(tCarro carro); //
void ImprimeConcessionaria(tConcessionaria Concessionaria); //
void ImprimeMenu(); //
tConcessionaria OrdenaPorPreco(tConcessionaria Concessionaria); //
float CalculaMediaPreco(tConcessionaria Concessionaria);
///

int main() {
    tConcessionaria concessionaria = LeConcessionaria();

    ImprimeMenu();
    char menu = 0;
    float media;

    //escolher as opções com switch;
    //cada coisa vai chamar uma das funções
    while(menu != 'F') {
        scanf(" %c", &menu);

        switch(menu) {
            //cadastrar carro
            case 'C':
                concessionaria = CadastraCarro(concessionaria);
                break;

            //listar carro
            case 'I':
                ImprimeConcessionaria(concessionaria);
                break;

            //ordenar por preço
            case 'O':
                    concessionaria = OrdenaPorPreco(concessionaria);
                break;

            //media do preço
            case 'M':
                media = CalculaMediaPreco(concessionaria);

                printf("Preco medio: %.2f", media);
                break;

            //sair
            case 'F':
                printf("Programa Encerrado!");
                exit(1);
                break;

            default:
                printf("Essa nao eh uma opcao valida!\n");
                break;
        }
    }
}

void ImprimeMenu(){
    printf("--- Concessionaria ---\n");
    printf("C - Cadastrar carro\n");
    printf("I - Listar carros\n");
    printf("O - Ordenar por preco\n");
    printf("M - Imprimir preco medio\n");
    printf("F - Finalizar\n");
}

tCarro LeCarro(){
    tCarro carro;

    if(scanf("%s %s %04d %f %s %s %.2f", carro.modelo, carro. marca, &carro.ano, &carro.km, carro.placa, carro.cor, &carro.preco) > 7) {
        printf("Passou da quantidade de informacoes!\n");
        exit(1);
    }

    return carro;
}

//lista os carros
void ImprimeCarro(tCarro carro){
    printf("%s %s %04d - %s - %s - %.2f\n",
        carro.marca, carro.modelo, carro.ano, carro.placa, carro.cor, carro.preco);
    //marca modelo ano - placa - cor - preço
}

tConcessionaria LeConcessionaria(){
    tConcessionaria concessionaria;

    if(scanf("%s", concessionaria.nome) != 1) {
        printf("Digitou mais informações do que o necessario!");
        exit(1);
    }
    concessionaria.qtdCarros = 0;

    return concessionaria;
}

//tem que acrescentar para ler com os carros
void ImprimeConcessionaria(tConcessionaria Concessionaria){
    printf("Concessionaria: %s\n", Concessionaria.nome);

    int i;

    for (i = 0; i < Concessionaria.qtdCarros; i++){
       ImprimeCarro(Concessionaria.carro[i]);
    }
}

tConcessionaria CadastraCarro(tConcessionaria Concessionaria){

    //começa com 0 pq é a quantidade de carro, vulgo posição no struct
    Concessionaria.carro[Concessionaria.qtdCarros] = LeCarro();

    Concessionaria.qtdCarros++;

    printf("Carro cadastrado com sucesso!\n");

    return Concessionaria;
}

tConcessionaria OrdenaPorPreco(tConcessionaria Concessionaria){
    int i = 0, troca = 0;
    tCarro aux;

    //variavel temporaria é o carro
    do {
        //aqui tem 48 carros
        for (i = 0; i < Concessionaria.qtdCarros - 1; i++) {
            //comparando os preços
            if (Concessionaria.carro[i].preco > Concessionaria.carro[i+1].preco){
                aux = Concessionaria.carro[i];
                Concessionaria.carro[i] = Concessionaria.carro[i+1];
                Concessionaria.carro[i+1] = aux;
                troca++;
            }
        }
    } while (troca > 0);

    return Concessionaria;
}

float CalculaMediaPreco(tConcessionaria Concessionaria) {
    float media = 0;
    int i;

    for (i = 0; Concessionaria.qtdCarros; i++){
        media = media + Concessionaria.carro[i].preco;
    }

    return media/Concessionaria.qtdCarros;
}