#include <stdio.h>

typedef struct{
    int id;
    int qtdLinhasColunas;
    int bingo[100][100];
} tCartela;

tCartela LeCartela();

void ImprimeCartela(tCartela cartela);

int main(){
    tCartela cartela; 
  
    cartela = LeCartela(); 
  
    ImprimeCartela(cartela); 
 
 return 0;
}

tCartela LeCartela(){
    tCartela cartela;
    
    scanf("%d", &cartela.id);
    scanf("%d", &cartela.qtdLinhasColunas);

    int n = cartela.qtdLinhasColunas;

    int i, j;
    //como é um bingo, ele tem q ler linhas e colunas
    for (i = 0; i < n;i++){
        for(j = 0; j < n;j++){
            scanf("%3d", &cartela.bingo[i][j]);
        }
    }

    return cartela;
}

void ImprimeCartela(tCartela cartela){
    int i, j;

    printf("ID:%d\n", cartela.id);

    for(i = 0; i < cartela.qtdLinhasColunas; i++){
        for(j = 0; j <cartela.qtdLinhasColunas; j++){
            printf("%03d", cartela.bingo[j][i]);

            //coloca a barra automaticamente antes de chegar no limite
            if (j != cartela.qtdLinhasColunas - 1){
                printf("|");            
            }
        }
        printf("\n");
    }
}