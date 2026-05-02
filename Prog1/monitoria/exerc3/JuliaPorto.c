#include <stdio.h>

//contexto: jogo de xadrez

int main(){
    //primeiro declarar uma variavel do menu e das cooredanas
    //segundo ler essas variaveis
    //terceiro while - fazer a exibição do menu
    //quarto fazer a parte do switch para cada escolha -> não declarar nada dentro do switch
    //dentro de cada switch, tem q fazer a relação da distancia da peça com cada linha e coluna
    //nisso, tem que verificar se essa distancia se encaixa no maximo que aquela peça pode ir

    char menu;
    int x, y, i = 0, j = 0, distancia = 0, distanciaJ = 0;

    while ('1') {
        printf("Menu:\n");
        printf("R - Rei\n");
        printf("T - Torre\n");
        printf("B - Bispo\n");
        printf("C - Cavalo\n");
        printf("Q - Sair\n");
        printf("Escolha uma opcao: \n");
        scanf(" %c", &menu);

        if (menu == 'Q') {
            break;
        }

        if (menu != 'R' && menu != 'T' && menu != 'B' && menu != 'C') {
            printf("Opcao Invalida! Escolha novamente.\n\n");
            continue;
        }

        do {
            printf("Indique a coordenada (X,Y): \n");
            scanf("%d %d", &x, &y);

            if (x < 1 || x > 8 || y < 1 || y > 8) { 
                printf("Coordenada Invalida!\n");
            }
        } while (x < 1 || x > 8 || y < 1 || y > 8); 

        switch(menu) {
        case 'R':
        for (i = 1; i <= 8; i++) {
            distancia  = i - x;

            if ( distancia < 0) {
                distancia = distancia * (-1);
            } else {
                distancia = distancia;
            }

            for (j = 1; j <= 8; j++) {
                distanciaJ = j - y;

                if (distanciaJ < 0){
                    distanciaJ = distanciaJ * (-1);
                } else {
                    distanciaJ = distanciaJ;
                }

                if ( distancia <= 1 && distanciaJ <= 1) {
                    printf("X");
                } else {
                    printf("-");
                }

                if (j < 8) {
                    printf(" ");
                }
            }
            printf("\n");

        } 
        printf("\n");

        break;
        
        case 'T':
        for (i = 1; i <= 8; i++) {
            distancia  = i - x;

            if ( distancia < 0) {
                distancia = distancia * (-1);
            } else {
                distancia = distancia;
            }

            for (j = 1; j <= 8; j++) {
                distanciaJ = j - y;

                if (distanciaJ < 0){
                    distanciaJ = distanciaJ * (-1);
                } else {
                    distanciaJ = distanciaJ;
                }

                if ( distancia == 0 || distanciaJ == 0) {
                    printf("X");
                } else {
                    printf("-");
                }

                if (j < 8) {
                    printf(" ");
                }            
            }
            printf("\n");

        }   
        printf("\n");

        break;

        case 'B':
        for (i = 1; i <= 8; i++) {
            distancia  = i - x;

            if ( distancia < 0) {
                distancia = distancia * (-1);
            } else {
                distancia = distancia;
            }

            for (j = 1; j <= 8; j++) {
                distanciaJ = j - y;

                if (distanciaJ < 0){
                    distanciaJ = distanciaJ * (-1);
                } else {
                    distanciaJ = distanciaJ;
                }

                if ( distancia == distanciaJ ) {
                    printf("X");
                } else {
                    printf("-");
                }

                if (j < 8) {
                    printf(" ");
                }                
            }

            printf("\n");

        } 
        printf("\n");
                           
        break;
        
        case 'C':
            for (i = 1; i <= 8; i++) {
            distancia  = i - x;

            if ( distancia < 0) {
                distancia = distancia * (-1);
            } else {
                distancia = distancia;
            }

            for (j = 1; j <= 8; j++) {
                distanciaJ = j - y;

                if (distanciaJ < 0){
                    distanciaJ = distanciaJ * (-1);
                } else {
                    distanciaJ = distanciaJ;
                }

                if ( ((distancia == 2) && (distanciaJ ==  1)) || ((distancia == 1) && (distanciaJ ==  2)) || ((distancia == 0) && (distanciaJ == 0)) ) {
                    printf("X");
                } else {
                    printf("-");
                }

                if (j < 8) {
                    printf(" ");
                }                
            }
            printf("\n");
        }  
        printf("\n");
          
        break;

       }
    }


    return 0;
}