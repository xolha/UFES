#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_STRING 100
#define MAX_CONTATOS 50
#define NUM_LETRAS_ALFABETO 26

typedef struct {
    char nome[TAMANHO_STRING];
    char email[TAMANHO_STRING];
    char telefone[TAMANHO_STRING];
    char endereco[TAMANHO_STRING];
} tContato;

tContato tContato_le();
int tContato_validaContato(tContato contato);
void tContato_imprime(tContato contato);
char tContato_retornaLetra(tContato contato);

typedef struct {
    int n_contatos[NUM_LETRAS_ALFABETO];
    tContato contatos[NUM_LETRAS_ALFABETO][MAX_CONTATOS];
} tAgenda;

tAgenda tAgenda_inicializa(tAgenda agenda);
tAgenda tAgenda_adicionaContato(tAgenda agenda, tContato contato);
void tAgenda_imprime(tAgenda agenda, char filtro);
int tAgenda_buscaIndiceContatoLetra(tAgenda agenda, tContato contato);


int main() {
    int N;
    scanf("%d", &N);

    tAgenda agenda;
    agenda = tAgenda_inicializa(agenda);

    for (int i = 0; i < N; i++) {
        tContato contato = tContato_le();
        agenda = tAgenda_adicionaContato(agenda, contato);
    }

    char filtro;
    scanf(" %c", &filtro); // sempre será '*'

    tAgenda_imprime(agenda, filtro);

    return 0;
}

tContato tContato_le() {
    tContato contato;
    int lidos = scanf(" [%[^,],%[^,],%[^,]],%[^]]]", contato.nome, contato.email, contato.telefone, contato.endereco);
    if (lidos == 3) { // não tinha endereço
        strcpy(contato.endereco, "-");
    }
    return contato;
}

int tContato_validaContato(tContato contato) { //somente contatos com um nome e email ou telefone serão válidos!
    if (strcmp (contato.nome, "-") == 0) return 0;
    if (strcmp (contato.email, "-" ) == 0 && strcmp (contato.telefone, "-") == 0 && strcmp (contato.endereco, "-") == 0) return 0;
    return 1;
}

void tContato_imprime(tContato contato) {
    printf("%s\n", contato.nome);
    if (strcmp (contato.email, "-") != 0) {
        printf("-%s\n", contato.email);
    }
    if (strcmp (contato.telefone, "-") != 0) {
        printf ("-%s\n", contato.telefone);
    }
    if (strcmp (contato.endereco, "-") != 0) {
        printf ("-%s\n", contato.endereco);
    }
}

char tContato_retornaLetra(tContato contato) {
    return toupper(contato.nome[0]);
}

tAgenda tAgenda_inicializa(tAgenda agenda) {
    for (int i = 0; i < NUM_LETRAS_ALFABETO; i++) {
        agenda.n_contatos[i] = 0;
    }
    return agenda;
}

tAgenda tAgenda_adicionaContato(tAgenda agenda, tContato contato) {
    if (tContato_validaContato(contato) == 1) {
        char letra = tContato_retornaLetra(contato);
        int index = letra - 'A';
        int pos = agenda.n_contatos[index];
        agenda.n_contatos[index][pos] = contato;
        agenda.n_contatos[index]++;
    }
    return agenda;
}

void tAgenda_imprime(tAgenda agenda, char filtro) {
    if (filtro == '*') {
        for (int i = 0; i < NUM_LETRAS_ALFABETO; i++) {
            for (int j = 0; j < agenda.n_contatos[i]; j++) {
                tContato_imprime(agenda.contatos[i][j]);
            }
        }
    } else {
        int index = filtro - 'A';
        if (agenda.n_contatos[index] == 0) {
            printf("Agenda vazia para a letra %c.\n", filtro);
        } else {
            for (int i = 0; i < agenda.n_contatos[index]; i++) {
                tContato_imprime(agenda.contatos[index][i]);
            }
        }
    }
}

int tAgenda_buscaIndiceContatoLetra(tAgenda agenda, tContato contato) {
    char letra = tContato_retornaLetra(contato);
    int index = letra - 'A';
    for (int i = 0; i < agenda.n_contatos[index]; i++) {
        if (strcmp(agenda.contatos[index][i].nome, contato.nome) == 0) {
            return i; // contato encontrado
        }
    }
    return -1; // não encontrado
}

tAgenda tAgenda_adicionaContato(tAgenda agenda, tContato contato) {
    if (tContato_validaContato(contato)) {
        char letra = tContato_retornaLetra(contato);
        int index = letra - 'A';

        int posExistente = tAgenda_buscaIndiceContatoLetra(agenda, contato);
        if (posExistente != -1) {
            //atualiza contato existente
            agenda.contatos[index][posExistente] = contato;
        } else {
            //adiciona novo contato
            int pos = agenda.n_contatos[index];
            agenda.contatos[index][pos] = contato;
            agenda.n_contatos[index]++;
        }
    }
    return agenda;
}
