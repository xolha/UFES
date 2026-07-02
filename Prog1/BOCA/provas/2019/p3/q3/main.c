#include <stdio.h>

typedef struct{
    int identificacao;
    int qtdPassageiros;
    char tipo[15];
    int km;
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

int main(){
    tConcessionaria concessionaria; 
    
    concessionaria = LeCarrosConcessionaria(); 
    
    int qtdPassageiros, km, i = 0; 
    while(scanf("%d,%d", &qtdPassageiros, &km) == 2){ 
    printf("Caso %d:\n", ++i); 
    ListaCarrosConcessionaria(concessionaria, qtdPassageiros, km); 
    } 
    
    return 0;
}

tCarro LeCarro(){
    tCarro carro;

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