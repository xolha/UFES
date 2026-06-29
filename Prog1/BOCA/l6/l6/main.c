#include <stdio.h>

typedef struct
{
    int id;
    int qtdLinhasColunas;
    int bingo[100][100];
    int bingoOriginal[100][100];

} tCartela;

typedef struct
{
    tCartela cartela[100];
    int qtdCartelas;
} tPartida;

tCartela LeCartela();

tPartida LeCartelasPartida();

tCartela MarcaCartela(tCartela cartela, int numSorteados);

int VenceuCartela(tCartela cartela);

tCartela ResetaCartela(tCartela cartela);

// partida

tPartida ResetaPartida(tPartida partida);

void JogaPartida(tPartida partida);

int main()
{
    tPartida partida;
    int qtdPartidas, i;

    partida = LeCartelasPartida();

    scanf("%d", &qtdPartidas);
    for (i = 0; i < qtdPartidas; i++)
    {
        if (i != 0)
            printf("\n");
        printf("PARTIDA %d\n", i + 1);
        partida = ResetaPartida(partida);
        JogaPartida(partida);
    }
    return 0;
}

tCartela LeCartela()
{
    tCartela cartela;
    int i, j;

    scanf("%d", &cartela.id);
    scanf("%d", &cartela.qtdLinhasColunas);

    for (i = 0; i < cartela.qtdLinhasColunas; i++)
    {
        for (j = 0; j < cartela.qtdLinhasColunas; j++)
        {
            scanf("%d", &cartela.bingo[i][j]);
            cartela.bingoOriginal[i][j] = cartela.bingo[i][j];
        }
    }

    return cartela;
}

tPartida LeCartelasPartida()
{
    tPartida partida;
    int n, i;
    scanf("%d", &n);

    partida.qtdCartelas = n;

    for (i = 0; i < n; i++)
    {
        partida.cartela[i] = LeCartela();
    }

    return partida;
}

tCartela MarcaCartela(tCartela cartela, int numSorteados)
{
    int i, j;

    for (i = 0; i < cartela.qtdLinhasColunas; i++)
    {
        for (j = 0; j < cartela.qtdLinhasColunas; j++)
        {
            // se for um número sorteado, marca aquele número
            // o vetor passa a receber um -1    ao inves do número
            if (numSorteados == cartela.bingo[j][i])
            {
                cartela.bingo[j][i] = -1;
            }
        }
    }

    return cartela;
}

int VenceuCartela(tCartela cartela)
{
    int i, j;

    // se alguma parte for diferente de -1, ou seja, não está marcado
    // então aquela cartela "não venceu"
    for (i = 0; i < cartela.qtdLinhasColunas; i++)
    {
        for (j = 0; j < cartela.qtdLinhasColunas; j++)
        {
            if (cartela.bingo[i][j] != -1)
            {
                return 0;
            }
        }
    }

    return 1;
}

tCartela ResetaCartela(tCartela cartela)
{
    int i, j;

    for (i = 0; i < cartela.qtdLinhasColunas; i++)
    {
        for (j = 0; j < cartela.qtdLinhasColunas; j++)
        {
            cartela.bingo[i][j] = cartela.bingoOriginal[i][j];
        }
    }

    return cartela;
}

tPartida ResetaPartida(tPartida partida)
{
    int i;

    for (i = 0; i < partida.qtdCartelas; i++)
    {
        partida.cartela[i] = ResetaCartela(partida.cartela[i]);
    }

    return partida;
}

void JogaPartida(tPartida partida)
{
    int i, j, k, numSorteados, temVencedor = 0;

    while (scanf("%d", &numSorteados) == 1 && numSorteados != -1)
    {
        //marca todas as cartelas com numero sorteado
        for (i = 0; i < partida.qtdCartelas; i++)
        {
            partida.cartela[i] = MarcaCartela(partida.cartela[i], numSorteados);
        }

        //verficia se alguma venceu após o sorteio
        for (i = 0; i < partida.qtdCartelas; i++){
            if (VenceuCartela(partida.cartela[i])){
                temVencedor = 1;
                break;
            }
        }

        //se venceu, para de sortear
        if(temVencedor){
            break;
        }
    }

    //consome o restante da sequencia até o -1

    if(temVencedor){
        while(scanf("%d", &numSorteados) == 1 && numSorteados != -1);
    }

    if (!temVencedor){
        printf("SEM VENCEDOR\n");
    } else {
        printf("COM VENCEDOR\n");

        for (k = 0; k < partida.qtdCartelas; k++){
            if (VenceuCartela(partida.cartela[k])){
                printf("ID:%d\n", partida.cartela[k].id);
                for(i = 0; i < partida.cartela[k].qtdLinhasColunas; i++){
                    for(j = 0; j < partida.cartela[k].qtdLinhasColunas; j++){
                        if (j > 0) printf("|");
                        printf("%03d", partida.cartela[k].bingoOriginal[j][i]);
                    }
                    printf("\n");
                }
            }
        }
    }

}