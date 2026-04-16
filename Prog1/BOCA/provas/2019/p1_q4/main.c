#include <stdio.h>

//contexto: fazer uma validador de cpf

int main() {
    int a, b, c, d, e, f, g, h, i, j, k;
    char s1, s2, s3;

    scanf("%1d %1d %1d %c %1d %1d %1d %c %1d %1d %1d %c %1d %1d", &a, &b, &c, &s1, &d, &e, &f, &s2, &g, &h, &i, &s3, &j, &k);

    int dig1, dig2;

    int soma1 = (10 * a) + (9 * b) + (8 * c) + (7 * d) + (6 * e) + (5 * f) + (4 * g) + (3 * h) + (i * 2);
    int resto1 = soma1 % 11;

    if ( resto1 < 2) {
        dig1 = 0;
    } else if ( resto1 >= 2 ) {
        dig1 = 11 - resto1;
    }



    int soma2 = (11 * a) + (10 * b) + (9 * c) + (8 * d) + (7 * e) + (6 * f) + (5 * g) + (4 * h) + (3 * i) + (2 * dig1);


    int resto2 = soma2 % 11;



    if ( resto2 < 2) {
        dig2 = 0;
    } else if ( resto2 >= 2 ) {
        dig2 = 11 - resto2;
    }

    if ( a == b && b == c && c == d && d == e && e == f && f == g && g == h && h == i && i == j && j == k) {
        printf("CPF invalido: digitos iguais!");
    } else if (dig1 != j && dig2 != k) {
        printf("CPF invalido: dois digitos!");
    } else if (dig1 != j) {
        printf("CPF invalido: primeiro digito!");
    } else if (dig2 != k) {
        printf("CPF invalido: segundo digito!");
    } else {
        printf("CPF valido!");
    }

    return 0;
}