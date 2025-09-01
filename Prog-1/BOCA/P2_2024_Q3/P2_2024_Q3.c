#include <stdio.h>
#include <string.h>

//"%99[^/n]s" -- na hora da leitura de char isso aqui é interessante, pois ele permite você continuar a digitar com espaço
//importante! para o tamanho, tem que ser n-1

typedef struct { //arquivos
    char nome[101];
    char extensao[101];
} tArquivo;

typedef struct { //pasta
    char nome[101];
    int qtd_arquivos;
    tArquivo arquivos[101];
} tPasta;

//ARQUIVOS
tArquivo tArquivo_le() {
    tArquivo arquivoLido;
    scanf("%s %s", arquivoLido.extensao, arquivoLido.nome);

    return arquivoLido;
}

void tArquivo_imprime(tArquivo arquivo) {
    printf("(%s) %s\n", arquivo.extensao, arquivo.nome);
}

int tArquivo_ehExtensao(tArquivo arquivo, char *extensao) {
    return strcmp(arquivo.extensao, extensao) == 0;
}

//PASTAS
tPasta tPasta_adicionaArquivo(tPasta pasta, tArquivo arquivo) {
    pasta.arquivos[pasta.qtd_arquivos] = arquivo;
    pasta.qtd_arquivos++;

    return pasta;
}

tPasta tPasta_le() {
    tPasta pastaLida;
    int M;
    scanf("%100[^\n]s %d", pastaLida.nome, &M);
    pastaLida.qtd_arquivos = 0;

    for (int i = 0; i < M; i++) {
        tArquivo arq = tArquivo_le();
        pastaLida = tPasta_adicionaArquivo(pastaLida, arq);
    }
    return pastaLida;
}

void tPasta_imprime(tPasta pasta, char *filtro) {
    printf("%s:\n", pasta.nome);
    for (int i = 0; i < pasta.qtd_arquivos; i++) {
        if (strcmp(filtro, "-") == 0 || tArquivo_ehExtensao(pasta.arquivos[i], filtro)) {
            printf("  ");
            tArquivo_imprime(pasta.arquivos[i]);
        }
    }
}

int tPasta_ehPasta(tPasta pasta, char *nome) {
    return strcmp(pasta.nome, nome) == 0;
}

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);
    tPasta pastas[N];
    int i, j;

    for (i = 0; i < N; i++) {
        pastas[i] = tPasta_le();
    }

    scanf("%d", &Q);
    for (i = 0; i < Q; i++) {
        char nomePasta[101], filtro[101];
        scanf("%s %s", nomePasta, filtro);
        for (j = 0; j < N; j++) {
            if (tPasta_ehPasta(pastas[j], nomePasta)) {
                tPasta_imprime(pastas[j], filtro);
                break;
            }
        }
    }

    return 0;
}