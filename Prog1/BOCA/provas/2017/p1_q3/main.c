#include <stdio.h>

// contexto: comparar dois digitos alfanumericos

int main()
{
    // primeiro ler duas variaveis (vou começar com char)
    // segundo declarar todas as variveis
    // terceiro fazer a normalização em todas minusculas (Se forem maiusculas)
    // quarto validar se está nos parametros do exercicio -> ser alfanumerico
    //fim fazer a validação final

    char a, b, c, d;
    scanf("%c%c %c%c", &a, &b, &c, &d);

    if ( a >= 'A' && a <= 'Z') {
        a = a + 32;
    }

    if ( b >= 'A' && b <= 'Z' ) {
        b = b + 32;
    }

    if ( c >= 'A' && c <= 'Z') {
        c = c + 32;
    }

    if ( d >= 'A' && d <= 'Z' ) {
        d = d + 32;
    }

    int v = (( a >= 'a' && a <= 'z') || (a >= '0' && a <= '9') &&
            ( b >= 'a' && b <= 'z') || (b >= '0' && b <= '9') &&
            ( c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') &&
            ( d >= 'a' && d <= 'z') || (d >= '0' && d <= '9'));

    if (!v) {
        printf("Invalido");
    } else if ( a == c && b == d ) {
        printf("IGUAIS");
    } else {
        printf("DIFERENTES");
    }
     
    
            
    return 0;
}