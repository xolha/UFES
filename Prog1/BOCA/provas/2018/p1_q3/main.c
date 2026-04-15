#include <stdio.h>

//contexto: comparar cada caracter de 2 codigos e dizer se são iguais, diferentes ou se só se diferem por ser maiusculo ou minusculo

int main() {
    //primeiro declarar 6 variaveis sendo 2 digitos e 4 chars
    //segundo ler essas variaveis
    //terceiro fazer a verificação se esse código está dentro do paramentro de validez (ser numero, minuscula e letra)
    //quarto comparar codigo por codigo, começando pelo digito -> IDIGITOS IGUAIS = I , DIGITOS DIFERENTES - D
    //quinto comparar as letras minusculas -> LETRAS IGUAIS - I, LETRAS DIFERENTES = D
    //sexto comparar o ultimo caracter -> LETRAS IGUAIS - I , LETRAS DIFERENTES, UMA MAIUSCULA E OUTRA MINUSCULA = C

    int n1, n2;
    char a, b, c, d;

    scanf("%d%c%c %d%c%c", &n1, &a, &b ,&n2, &c, &d);

    int validacaoDigito = ((n1 >= 0 && n2 <= 9) || ( n2 >= 0 && n2 <= 9));
    int validacaoMinusculo = ((a >= 'a' && a <= 'z') && (c >= 'a' && c <= 'z'));
    int validacaoLetra = (((b >= 'A' && b <= 'Z') || ( b >= 'a' && b <= 'z')) && ((d >= 'A' && d <= 'Z') || ( d >= 'a' && d <= 'z')));

    if (!validacaoDigito || !validacaoLetra || !validacaoMinusculo) {
        printf("Codigo invalido!\n");
    } else {
        if (n1 == n2) {
            if (a == c) {
                if (b == d) {
                    printf("III\n");
                } else {
                    if (b >= 'A' && b <= 'Z') {
                        b = b + 32;
                    }
                    if (d >= 'A' && d <= 'Z') {
                        d = d + 32;
                    }

                    if (b == d) {
                        printf("IIC\n");
                    } else {
                        printf("IID\n");
                    }
                }
            } else {
                if (b == d) {
                    printf("IDI\n");
                } else {
                    if (b >= 'A' && b <= 'Z') {
                        b = b + 32;
                    }
                    if (d >= 'A' && d <= 'Z') {
                        d = d + 32;
                    }

                    if (b == d) {
                        printf("IDC\n");
                    } else {
                        printf("IDD\n");
                    }
                }
            }
        } else {
            if (a == c) {
                if (b == d) {
                    printf("DII\n");
                } else {
                    if (b >= 'A' && b <= 'Z') {
                        b = b + 32;
                    }
                    if (d >= 'A' && d <= 'Z') {
                        d = d + 32;
                    }

                    if (b == d) {
                        printf("DIC\n");
                    } else {
                        printf("DID\n");
                    }
                }
            } else {
                if (b == d) {
                    printf("DDI\n");
                } else {
                    if (b >= 'A' && b <= 'Z') {
                        b = b + 32;
                    }
                    if (d >= 'A' && d <= 'Z') {
                        d = d + 32;
                    }

                    if (b == d) {
                        printf("DDC\n");
                    } else {
                        printf("DDD\n");
                    }
                }
            }
        }
    }

    return 0;
}