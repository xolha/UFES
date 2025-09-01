#include <stdio.h>
#include <string.h>

#define MAX_ARQUIVOS 100
#define MAX_NOME 101

typedef struct {
    char extensao[101];
    char nome[101];
    int tamanho;
} tArquivo;

typedef struct {
    char nome[101];
    int qtdArquivos;
    int tamanhoMax;
    tArquivo arquivos[100];
} tPasta;

//funções arquivo
tArquivo tArquivo_le() {
    tArquivo arquivo;
    scanf("%s %s %d", arquivo.extensao, arquivo.nome, &arquivo.tamanho);
    return arquivo;
}

void tArquivo_imprime(tArquivo arquivo) {
    printf("(%s) %s\n", arquivo.extensao, arquivo.nome);
}

int tArquivo_ehExtensao(tArquivo arquivo, char *extensao) {
    return strcmp(arquivo.extensao, extensao) == 0;
}

int tArquivo_qualTamanho(tArquivo arquivo) {
    return arquivo.tamanho;
}

//funções pasta
int tPasta_somaArquivos(tPasta pasta) {
    int soma = 0;
    for (int i = 0; i < pasta.qtdArquivos; i++) {
        soma += pasta.arquivos[i].tamanho;
    }
    return soma;
}

int tPasta_cabeArquivo(tPasta pasta, tArquivo arquivo) {
    return (tPasta_somaArquivos(pasta) + arquivo.tamanho) <= pasta.tamanhoMax;
}

tPasta tPasta_adicionaArquivo(tPasta pasta, tArquivo arquivo) {
    pasta.arquivos[pasta.qtdArquivos] = arquivo;
    pasta.qtdArquivos++;
    return pasta;
}

tPasta tPasta_le() {
    tPasta pasta;
    int M;
    scanf("%s %d %d", pasta.nome, &M, &pasta.tamanhoMax);
    pasta.qtdArquivos = 0;
    for (int i = 0; i < M; i++) {
        tArquivo arq = tArquivo_le();
        pasta = tPasta_adicionaArquivo(pasta, arq);
    }
    return pasta;
}

void tPasta_imprime(tPasta pasta) {
    printf("%s:\n", pasta.nome);
    for (int i = 0; i < pasta.qtdArquivos; i++) {
        printf("  ");
        tArquivo_imprime(pasta.arquivos[i]);
    }
}

int tPasta_ehPasta(tPasta pasta, char *nome) {
    return strcmp(pasta.nome, nome) == 0;
}

int main() {
    int N, Q;
    scanf("%d", &N);
    tPasta pastas[N];

    for (int i = 0; i < N; i++) {
        pastas[i] = tPasta_le();
    }

    scanf("%d", &Q);
    for (int i = 0; i < Q; i++) {
        char nomePasta[101];
        tArquivo novoArquivo;
        scanf("%s %s %s %d", nomePasta, novoArquivo.extensao, novoArquivo.nome, &novoArquivo.tamanho);

        int encontrada = 0;
        for (int j = 0; j < N; j++) {
            if (tPasta_ehPasta(pastas[j], nomePasta)) {
                encontrada = 1;
                if (tPasta_cabeArquivo(pastas[j], novoArquivo)) {
                    pastas[j] = tPasta_adicionaArquivo(pastas[j], novoArquivo);
                } else {
                    printf("ERRO: Arquivo nao cabe na pasta %s.\n", nomePasta);
                }
                break;
            }
        }
        if (!encontrada) {
            printf("ERRO: Pasta %s nao encontrada.\n", nomePasta);
        }
    }

    for (int i = 0; i < N; i++) {
        tPasta_imprime(pastas[i]);
    }

    return 0;
}
