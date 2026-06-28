#include <stdio.h>

typedef struct {
    int identificador;
    int identificadorPacote;
    int conteudo;
    char mensagem[10]; //lembrar que tem um '\0' no final! 9 + isso aí
    int codigoErro;
} tPacote;

tPacote LePacote();
void ImprimePacote(tPacote pacote);

int main(){
    int n, i;

    if (scanf("%d", &n) != 1) return 0;

    tPacote pacote;

    for (i = 0; i < n; i++){
        pacote = LePacote();
        
        ImprimePacote(pacote);
    }


    return 0;
}

tPacote LePacote(){
    tPacote pacote;

    //nesse caso onde tem espaço, é melhor ler com char
    scanf("%3d %3d %1d%9c %4d", &pacote.identificador, &pacote.identificadorPacote,
        &pacote.conteudo, pacote.mensagem, &pacote.codigoErro);

    //sinaliza que na posição nove é a quebra de linha!
    //mostra que essa é realmente a parte final
    pacote.mensagem[9] = '\0';

    return pacote;
}

void ImprimePacote(tPacote pacote){
        printf("PCT: %d,%d,%d,", pacote.identificador, pacote.identificadorPacote,
        pacote.conteudo);

        //voce pode ler todos os caracteres, mas aqui é onde diz até
        //onde a string vai, já q é relacionado ao pacote.conteudo
        int i;
        for (i = 0; i < pacote.conteudo; i++){
            printf("%c", pacote.mensagem[i]);
        }

        printf(",%d\n", pacote.codigoErro);
}