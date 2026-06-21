#include <stdio.h>
#include <ctype.h>

/*
Faça  um  programa  que  leia  palavras  de  um  texto  e
imprima  o  texto  de  trás  para  frente  com  as  palavras  separadas  por  espaço  e  sem
pontuação ou qualquer outro caractere que não seja letra. Percebe que a palavra em
si deve permanecer com sua ordem natural de letras.
*/

int main()
{
    //quando um char tem 2 [], isso signifca que voce está buscando um caractere especifico de uma palavra
    char texto[500][501], palavra[501];

    int n = 0, pos = 0;
    char atual[501], c;

    while ((c =getchar()) != EOF)
    {
        if (isalpha(c)){
            atual[pos++] = c; //acumula as letras
        } else {
            if (pos > 0) { //tinha palavra acumulada?
                atual[pos] = '\0';

                //copia para o texto[n]
                //x serve só para pager o caractere daquela palavra
                int x;
                for(x = 0; x <= pos; x++){
                    texto[n][x] = atual[x];
                }
                n++;
                pos = 0; //reseta para a proxima palavra
            }
        }
    } 

    //ultima palavra SE terminou com nao-letra
    if (pos > 0) {
        atual[pos] = '\0';
        int x;
        for(x = 0; x <= pos; x++){
            texto[n][x] = atual[x];
        }
        n++;
    }

    // filtra não letras de uma palavra
    int i = 0, j = 0, k;
    for (i = 0; i < n; i++)
    {
        j = 0;

        for (k = 0; texto[i][k] != '\0'; k++)
        {
            //isalpha retira qualquer coisa q não seja um caractere a-z
            if (isalpha(texto[i][k]))
            {
                //copia o char filtrado da propria palavra
                texto[i][j++] = texto[i][k];
            }
        }
        texto[i][j] = '\0'; //termina a palavra filtrada
    }
    //texto[i] agora só tem letras!

    //imprimir de traz para frente
    for (i = n - 1; i >= 0; i--){
        if (i < n - 1) {
            printf(" ");
        }
        printf("%s", texto[i]);
    }

    return 0;
}