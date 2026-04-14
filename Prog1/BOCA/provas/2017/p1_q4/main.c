#include <stdio.h>

//contexto: comparar dois horários e dizer se a soma de todas as horas é maior q o outro ou dizer q são iguais

int main() {
    //primeiro declarar 6 variaiveis
    //segundo ler todas as 6 variaiveis
    //terceiro fazer uma comparação se os horarios são maiores
    //quarto fazer a verificação de qual parte desse horário é o maior
    //apos verificar quem é o maior, imprime a soma

    int h1, m1, s1, h2, m2, s2;
    scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);

    int soma;


    if (h1 == h2 && m1 == m2 && s1 == s2) {
        printf("IGUAIS");
    } else {
        if ( h1 > h2) {
            soma = h1 + m1 + s1;
        } else if (h1 < h2) {
            soma = h2 + m2 + s2;
        } else {
            if ( m1 > m2 ) {
                soma = h1 + m1 + s1;
            } else if ( m1 < m2) {
                soma = h2 + m2 + s2;
            } else {
                if ( s1 > s2) {
                    soma = h1 + m1 + s1;
                } else if ( s1 < s2 ){
                    soma = h2 + m2 + s2;
                }
            }
        }

        soma = (soma /= 10) % 10;
        printf("RESP:%d", soma);
    }



    return 0;
}