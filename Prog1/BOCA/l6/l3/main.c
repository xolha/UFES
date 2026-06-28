#include <stdio.h>

typedef struct{
    int identificador;
    int identificadorPacote;
    int conteudo;
    char mensagem[10];
    int codigoErro;
} tPacote;

typedef struct{
    tPacote pacote[100];
    int qtd;
} tMensagens;

tPacote    LePacote();
tMensagens LeMensagens(int n);
tMensagens OrdenaMensagens(tMensagens mensagem);
int        DesempataPacote(tPacote a, tPacote b);
int        temErro(tPacote pacote);
void       ImprimePacote(tPacote pacote);
void       ImprimeMensagem(tMensagens mensagem);

int main() {
    int n, i;

    tMensagens mensagem;
    tPacote pacote;

    mensagem.qtd = n;

    while(scanf("%d", &n) == 1){
        mensagem = LeMensagens(n);

        mensagem = OrdenaMensagens(mensagem);

        ImprimeMensagem(mensagem);
    }

    return 0;
}

tPacote LePacote(){
    tPacote pacote;

    scanf("%3d %3d %1d%9c %4d", &pacote.identificador, &pacote.identificadorPacote,
        &pacote.conteudo, pacote.mensagem, &pacote.codigoErro);

    pacote.mensagem[9] = '\0';

    return pacote;
}

//como o exercicio pede para q tudo seja relação tMensagens <> tPacote,
//então as funções tMensagens sempre vão chamar as relacionadas a tPacote
tMensagens LeMensagens(int n){
    int i;
    tMensagens mensagem;

    mensagem.qtd = n;

    for(i = 0; i < n;i++){
        mensagem.pacote[i] = LePacote();
    }

    return mensagem;
}

int DesempataPacote(tPacote a, tPacote b){
    //critério de desempate é atraves do idenficador
    if (a.identificador != b.identificador){
        return a.identificador > b.identificador;
    }

    //se não, pega da outra parte final de desempate
    return a.identificadorPacote > b.identificadorPacote; 
}

tMensagens OrdenaMensagens(tMensagens mensagem){
    int i, troca = 0;
    tPacote aux;

    do {
        troca = 0;
        for(i = 0; i < mensagem.qtd - 1; i++){
            //nesse caso, o ideal é realmente ter essa função a mais do desempate
            //se não ficaria muito longo
            if (DesempataPacote(mensagem.pacote[i], mensagem.pacote[i+1])){
                aux = mensagem.pacote[i];
                mensagem.pacote[i] = mensagem.pacote[i+ 1];
                mensagem.pacote[i+1] = aux;

                troca++;
            }
        }
    } while (troca > 0);


    return mensagem;
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

void ImprimePacote(tPacote pacote){
    int j;

    if(temErro(pacote)){
        printf("##FALHA##");
    } else {
        for (j = 0; j < pacote.conteudo;j++){
            printf("%c", pacote.mensagem[j]);
        }
    }
}

void ImprimeMensagem(tMensagens mensagem){
    int i,j;

    //atualiza os pacotes
    for(i = 0; i < mensagem.qtd; i++){
        //se não é o primeiro pacote E o id de mensagem mudou em relação ao pacote anterior
        if(i > 0 && mensagem.pacote[i].identificador != mensagem.pacote[i-1].identificador){

            //quebra a linha
            printf("\n");
        }

        //por padrão imprime o conteúdo do pacote
        ImprimePacote(mensagem.pacote[i]);
    }
    printf("\n");
}

