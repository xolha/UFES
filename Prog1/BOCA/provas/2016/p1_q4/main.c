#include <stdio.h>

//contexto: dizer qual dos algarismos das centenas de 3 numeros impressos é o menor

int main() {
    //primeira coisa declarar 3 variveis
    //segundo ler as  variveis
    //terceiro usar a verificação da centena =>  numero /= 100
    //se o numero da centena for = 0, printar "nenhum" (no caso e não ter a centena)
    //como fazer a verificação quando um numero tem 4 algorismos?
    //quarto fazer a verificação de qual das centenas é a menor
    //if (N1 <= N2 || N1 <= N3 || ((N1 == N2 ) && < N3))

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

   int N1, N2, N3;

   if (a < 100) {
    N1 = 10;
   } else {
    N1 = a /= 100;
    N1 = N1 % 10;
   }

   if ( b < 100 ){
    N2 = 10;
   } else {
    N2 = b /= 100;
    N2 = N2 % 10;
   }
    
   if ( c < 100) {
    N3 = 10;
   } else {
    N3 = c /= 100;
    N3 = N3 % 10;
   }

    if ( N1 == 10 && N2 == 10 && N3 == 10 ) {
        printf("Nenhum");
    } else if (N1 <= N2 && N1 <= N3 ) {
        printf("N1");
    } else if ( N2 <= N3 ) {
        printf("N2");
    } else {
        printf("N3");
    }

    return 0;
}