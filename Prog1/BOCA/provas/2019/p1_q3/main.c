#include <stdio.h>

//contexto: validar uma placa composta por letras e numeros @@@-####

int main() {
    //primeiro declarar 7 variaiveis sendo 3chars
    //segundo declarar tudo isso
    //fazer a vlidação se os primeiros 3 caracteres são letras
    //fazer a validação se os outros digitos são realmente numeros
    //se o codigo for valido, apenas imprima "codigo valido"
    //do contrário, explicar o pq ele é invalido
    char a, b, c, sinal;
    char n1, n2, n3, n4;

    scanf("%c %c %c %c %c %c %c %c", &a, &b, &c, &sinal, &n1, &n2, &n3, &n4);

    int validaLetra = (((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) &&
                        ((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z')) &&
                        ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')));

    int validaNumero = ((n1 >= '0' && n1 <= '9' ) &&
                        (n2 >= '0' && n2 <= '9' ) &&
                        (n3 >= '0' && n3 <= '9' ) &&
                        (n4 >= '0' && n4 <= '9' ));

    if ( validaLetra && validaNumero ) {
        printf("Codigo valido!");
    } else {
        printf("Codigo invalido!");

        if ( !validaLetra && !validaNumero ) {
            printf("Problema nas letras e nos numeros!");
        } else if (!validaLetra) {
            printf("Problema nas letras!");
        } else if (!validaNumero) {
            printf("Problema nos numeros!");
        }
    }

    return 0;
}