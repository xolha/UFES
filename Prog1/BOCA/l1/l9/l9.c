#include <stdio.h>

// contexto: mostrar a versão maiuscula de uma letra minuscula e sua versão minuscula em int(ascii). avisar quando não for letra e quando inserir letra maisucula

int main() {
    char letra;
    scanf("%c", &letra);

    if ( letra >='a' && letra <= 'z' ) {
        char letraMaiscula = letra - 32;
        printf("%c(%d)", letraMaiscula, letraMaiscula);
    } else if ( letra >= 'A' && letra <='Z') {
        printf("A letra deve ser minuscula!");
    } else {
        printf("Nao e letra!");
    }

    return 0;
}