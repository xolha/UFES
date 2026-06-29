#include <stdio.h>

typedef struct{
    int id;
    int qtdLinhasColunas;
    int bingo[100][100];
} tCartela;

typedef struct{
    tCartela cartela[100];
    int qtdCartelas;
} tPartida;


tCartela LeCartela();

tPartida LeCartelasPartida();

void ImprimeInvCartelasPartida(tPartida partida);

int main(){
    tPartida partida; 
  
    partida = LeCartelasPartida(); 
  
    ImprimeInvCartelasPartida(partida); 

    return 0;
}

tCartela LeCartela(){
    tCartela cartela;

    scanf("%d", &cartela.id);
    scanf("%d", &cartela.qtdLinhasColunas);

    int n = cartela.qtdLinhasColunas;

    int i, j;

    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++){
        scanf("%d", &cartela.bingo[i][j]);
        }
    }

    return cartela;
}

tPartida LeCartelasPartida(){
    int n, i;

    scanf("%d", &n);

    tPartida partida;
    partida.qtdCartelas = n;

    for (i = 0; i < n; i++){
        partida.cartela[i] = LeCartela();
    }

    return partida;
}

void ImprimeInvCartelasPartida(tPartida partida){
    int i, troca;

    tCartela aux;
    tCartela cartela;

    int j, k;

    //NESSE CASO, COMO É PARA IMPRIMIR DE TRAZ PRA FRENTE NA ORDEM DE LEITURA
    //NÃO TEM NECESSIDADE DO BUBBLESORT DE ORDENAR POR ID
    for (k = partida.qtdCartelas - 1; k >= 0 ; k--){
        printf("ID:%d\n", partida.cartela[k].id);

        for(i = 0; i < partida.cartela[k].qtdLinhasColunas; i++){
            for(j = 0; j <partida.cartela[k].qtdLinhasColunas; j++){
                printf("%03d", partida.cartela[k].bingo[j][i]);

                //coloca a barra automaticamente antes de chegar no limite
                if (j !=  partida.cartela[k].qtdLinhasColunas - 1){
                    printf("|");            
                }
            }
            printf("\n");
        }
    }


}