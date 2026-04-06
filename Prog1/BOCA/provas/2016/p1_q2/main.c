#include <stdio.h>

//contexto: dizer se um ponto está contido em uma reta

int main() {
    //primeiro declarar 8 pontos, sendo os dois primeiros os valores a e b da reta: ax + b = y
    //segundo ler todos os vaores
    //terceiro verificar se o ponto pertece a reta - isso só acontece quando x = y
    int a, b, x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &x1, &y1, &x2, &y2, &x3, &y3);

    int F_de_x1 = a*x1 + b;  
    int F_de_x2 = a*x2 + b;  
    int F_de_x3 = a*x3 + b;  

    if ( F_de_x1 == y1 && F_de_x2 == y2 && F_de_x3 == y3 ) {
        printf("Todos");
    } else if ( (F_de_x1 == y1 && F_de_x2 == y2) || (F_de_x1 == y1 && F_de_x3 == y3) || (F_de_x3 == y3 && F_de_x2 == y2)) {
        printf("Dois");
    } else if ( F_de_x1 == y1 || F_de_x2 == y2 || F_de_x3 == y3 ) {
        printf("Um");
    } else {
        printf("Nenhum");
    }

    return 0;
}