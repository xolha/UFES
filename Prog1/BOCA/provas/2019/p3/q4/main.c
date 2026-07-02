#include <stdio.h>

typedef struct{
    int identificacao;
    int qtdPassageiros;
    char tipo[100];
    int km;
    int estaAlugado;
    int idCliente;
} tCarro;

typedef struct{
    tCarro carros[100];
    int qtdCarros;
} tConcessionaria;

//carros: identificação, n passaeiros, tipo, km
//conceicionario max 100 veiculos

tCarro LeCarro(); 
void ImprimeCarro(tCarro carro);
int ObtemNumPassageirosCarro(tCarro carro); 
int ObtemKmCarro(tCarro carro); 
tConcessionaria LeCarrosConcessionaria();
void ListaCarrosConcessionaria(tConcessionaria  concessionaria,  int  pass,  int  km);

int ObtemClienteAlugouCarro(tCarro carro);
int EstaDisponivelCarro(tCarro carro);
tCarro AlugaCarro(tCarro carro, int cliente);
tCarro DevolveCarro(tCarro carro);

tConcessionaria AlugaCarroConcessionaria(tConcessionaria concessionaria, int cliente, int pass, int km);
tConcessionaria DevolveCarroConcessionaria(tConcessionaria concessionaria, int cliente);
void ImprimeCarros(tConcessionaria concessionaria);

int main(){
    tConcessionaria concessionaria; 
    
    concessionaria = LeCarrosConcessionaria(); 
    
    int idCliente; 
    char alugado;
    while(scanf("%d,%c", &idCliente, &alugado) == 2){ 
        if(alugado == 'A'){
            int pass, km;
            scanf("%d,%d", &pass, &km);

            concessionaria = AlugaCarroConcessionaria(concessionaria, idCliente, pass, km);
        } else if (alugado == 'D'){
            concessionaria = DevolveCarroConcessionaria(concessionaria, idCliente);
        }

    } 
    
    return 0;
}

tCarro LeCarro(){
    tCarro carro;

    carro.estaAlugado = 0;
    carro.idCliente = 0;

    scanf("%d %d %s %d", &carro.identificacao ,&carro.qtdPassageiros, carro.tipo , &carro.km);

    return carro;
}

void ImprimeCarro(tCarro carro){
    printf("CARRO (%d): %s de %d passageiros e com %d km\n", carro.identificacao, carro.tipo, carro.qtdPassageiros, carro.km);
}

int ObtemNumPassageirosCarro(tCarro carro){
    return carro.qtdPassageiros;
}

int ObtemKmCarro(tCarro carro){
    return carro.km;
}

tConcessionaria LeCarrosConcessionaria(){
    tConcessionaria concessionaria;

    scanf("%d", &concessionaria.qtdCarros);
    int i;

    for(i = 0; i < concessionaria.qtdCarros; i++){
        concessionaria.carros[i] = LeCarro();
    }

    return concessionaria;
}

void ListaCarrosConcessionaria(tConcessionaria  concessionaria,  int  pass,  int  km){
    tCarro carro;
   int i;
   if( pass == -1 && km == -1 ){
    for(i = 0; i < concessionaria.qtdCarros; i++){
        ImprimeCarro(concessionaria.carros[i]);
    }
   } else {
    //ignora os passageiros
    if (pass == -1){
        for (i = 0; i < concessionaria.qtdCarros; i++){
            if (ObtemKmCarro(concessionaria.carros[i]) <= km){
                ImprimeCarro(concessionaria.carros[i]);
            }
        }

        //ignora os kms
    } else if (km == -1){
        for (i = 0; i < concessionaria.qtdCarros; i++){
            if (ObtemNumPassageirosCarro(concessionaria.carros[i]) == pass){
                ImprimeCarro(concessionaria.carros[i]);
            }
        }
    } else {
        for (i = 0; i < concessionaria.qtdCarros; i++){
            if(concessionaria.carros[i].qtdPassageiros == pass && concessionaria.carros[i].km <= km){
            ImprimeCarro(concessionaria.carros[i]);

            }
        }
        }
    }
}

int ObtemClienteAlugouCarro(tCarro carro){
    return carro.idCliente;
}

int EstaDisponivelCarro(tCarro carro){
    return !carro.estaAlugado;
}

tCarro AlugaCarro(tCarro carro, int cliente){
        /*
        se o carrao não está alugado, então aquele carro específico
        (baseado no que o cliente pediu) receberá o id do cliente
        e ele não estará mais disponível para locação

        10,A 
        5,15000
        */

        carro.idCliente = cliente;
        carro.estaAlugado = 1;

    return carro;
}

tCarro DevolveCarro(tCarro carro){
    carro.estaAlugado = 0;

    //acho q pode quebrar colocando o id do cliente como 0 mas...
    carro.idCliente = 0;

    return carro;
}

tConcessionaria AlugaCarroConcessionaria(tConcessionaria concessionaria, int cliente, int pass, int km){
    int i;

    for(i = 0; i < concessionaria.qtdCarros; i++){

        tCarro c = concessionaria.carros[i];

       if(!EstaDisponivelCarro(c)) continue;
        if(pass != -1 && ObtemNumPassageirosCarro(c) != pass) continue;  // respeita -1
        if(km != -1 && ObtemKmCarro(c) > km) continue;                   // respeita -1
        concessionaria.carros[i] = AlugaCarro(c, cliente);
        printf("Alugado (cliente %d) -> ", cliente);
        ImprimeCarro(concessionaria.carros[i]);
        return concessionaria;  // return, nao break
    }

    printf("Carro Indisponivel\n");    //só imprime se nao achou
    return concessionaria;
}

tConcessionaria DevolveCarroConcessionaria(tConcessionaria concessionaria, int cliente){
    int i;

    for (i = 0; i < concessionaria.qtdCarros; i++){
        if(!EstaDisponivelCarro(concessionaria.carros[i]) && concessionaria.carros[i].idCliente == cliente){
            printf("Devolvido (cliente %d) -> ",cliente);
            ImprimeCarro(concessionaria.carros[i]);
            concessionaria.carros[i] = DevolveCarro(concessionaria.carros[i]);
            return concessionaria;
        }
    }
    return concessionaria;
}