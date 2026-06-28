#include <stdio.h>

/*
 o que resulta em 2+4+2+106+63=177. Como o código de erro do 
pacote contém o valor 175, esse pacote pode ser considerado transmitido com falha. 
Se  o  código  calculado  fosse igual  ao  transmitido  com  o  pacote,  o  pacote  seria 
considerado  transmitido  com  sucesso.  Sua  segunda  tarefa,  é  identificar  os  pacotes 
transmitidos  com  falha.  Para  isso,  faça  um  programa  para  ler  o  conteúdo  de  cada 
pacote  dado  e  imprimi-los  na  sequência,  caso  não  haja  falha,  ou  imprimir  uma 
indicação de falha quando houver falha
*/

typedef struct{
    int identificador;
    int identificadorPacote;
    int conteudo;
    char mensagem[10];
    int codigoErro;
} tPacote;

tPacote lePacote();
int temErro(tPacote pacote);
void ImprimePacote(tPacote pacote);


int main() {
    int i, n;

    scanf("%d", &n);

    tPacote pacote;
    for (i = 0; i < n; i++){
        int qtd = 0, j;
        pacote = lePacote();

        //lembrar q essa função EXIGE um parâmentro, e era por isso que estava dando errado
        if (temErro(pacote)){
            printf("FALHA!\n"); 
        } else {
            ImprimePacote(pacote);
        }
    }

    return 0;
}

int temErro(tPacote pacote){
    int j, qtd = 0;

    qtd = pacote.identificador + pacote.identificadorPacote + pacote.conteudo;
    // printf("qtd %d\n", qtd);

    for (j = 0; j < pacote.conteudo;j++){
        qtd += pacote.mensagem[j];
        // printf("qtd cont %d\n", qtd);
    }

    if (qtd == pacote.codigoErro){
        return 0;
    } else {
        return 1;
    }
}

tPacote lePacote(){
    tPacote pacote;

    scanf("%3d %3d %1d%9c %4d",  &pacote.identificador, &pacote.identificadorPacote,
        &pacote.conteudo, pacote.mensagem, &pacote.codigoErro);

    //determina q na posição nove é o final!
    pacote.mensagem[9] = '\0';

    return pacote;
}


void ImprimePacote(tPacote pacote){
        printf("PCT: %d,%d,%d,", pacote.identificador, pacote.identificadorPacote, pacote.conteudo);

        int i;
        for(i = 0; i < pacote.conteudo; i++){
            printf("%c", pacote.mensagem[i]);
        }

        printf(",%d\n",pacote.codigoErro);
}