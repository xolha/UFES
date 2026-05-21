#include <stdio.h>

int EhLetra (char  c);
int EhLetraMinuscula (char c);
int EhLetraMaiuscula (char c);
char Codifica(char letra, int n);
char Decodifica (char letra, int n);

int main(){
    int codifica, n, Codificador, Decodificador;
    char letra;

    scanf("%d %d", &codifica, &n);
    scanf(" %c", &letra);

    switch(codifica){
        case 1:
        Codificador = Codifica(letra, n);
        break;

        case 2:
        Decodificador = Decodifica(letra, n);
        break;

        default:
        printf("Operacao invalida.");
        break;
    }

    return 0;
}

int EhLetra (char  c) {
    if (c >= 'A' && c <= 'z'){
        return 1;
    } else {
        return 0;
    }
}

int EhLetraMinuscula (char c) {
    if (EhLetra(c)) {
        if (c >= 'a' && c <= 'z'){
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

int EhLetraMaiuscula (char c){
    if (EhLetra(c)){
        if (c >= 'A' && c <= 'Z'){
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

char Codifica(char letra, int n) {
    //'.' é o ponto de parada
    while (letra != '.'){
        if (EhLetraMinuscula(letra)){
            //primeiro transforma a letra em int e soma
            //depois descobre qual a posição dela no alfabeto
            //soma com a letra de novo para transformar em char novamente
            
            if(letra){
                letra = ((letra - 'a' + n) % 26) + 'a';
                putchar(letra);
            }
        } else if (EhLetraMaiuscula(letra)){
            //mesma coisa q a explicação acima porem para maiuscula
            //porem aqui tem a diferença de ser duas vezes maior
            if (letra){
                letra = ((letra - 'A' + (n * 2)) % 26) + 'A';
                putchar(letra);
            }
        } else {
            putchar(letra);
        }

        //guarda a letra e pega a proxima
        letra = getchar();
    }

    //retorna a frase inteira
    return putchar(letra);
}

char Decodifica (char letra, int n){
    while (letra != '.'){
        if (EhLetraMinuscula(letra)) {
            //transforma a letra diferente nas letras normais
            letra = ((letra - 'a' - (n % 26) + 26) % 26) + 'a';
            putchar(letra);
        } else if (EhLetraMaiuscula(letra)){
            letra = ((letra - 'A' - ((n * 2) % 26) + 26) % 26) + 'A';
            putchar(letra);
        } else {
            putchar(letra);
        }

        letra = getchar();
    }
    return putchar(letra);
}
