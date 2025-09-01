#include <stdio.h>

void ValidarNumero();
int LeCodigo();
int LeTipo();
void ImprimirInformacoes(int ddd, int tipoNum);

int main() {
    int N;
    scanf("%d", &N); 

    for (int i = 0; i < N; i++) {
        ValidarNumero();
    }

    return 0;
}

void ValidarNumero() {
    int ddd_retorno = LeCodigo();
    int tipo_retorno = LeTipo();
    ImprimirInformacoes(ddd_retorno, tipo_retorno);
}
//Leitura do DDD
int LeCodigo() {
    int ddd_lido = 0;
    char c1, c2, c3, c4;

    c1 = getchar();
    if (c1 == '(') {
        c2 = getchar();
        c3 = getchar();
        c4 = getchar();
        ddd_lido = (c2 - '0') * 10 + (c3 - '0');
    } else {
        c2 = getchar();
        ddd_lido = (c1 - '0') * 10 + (c2 - '0');
    }

    if (ddd_lido == 27 || ddd_lido == 41 || ddd_lido == 61 || ddd_lido == 81 || ddd_lido == 92) {
        return ddd_lido;
    } else {
        return 0;
    }
}

//leitura do Tipo de Número
int LeTipo() {
    char digito;
    int contador_digitos = 0;
    int eh_celular = 0;

    digito = getchar();

    if (digito == '9') {
        eh_celular = 1;
    }

    while (digito != '\n') {
        if (digito >= '0' && digito <= '9') {
            contador_digitos++;
        }
        digito = getchar();
    }

    if (eh_celular) {
        if (contador_digitos == 9) {
            return 1;
        } else {
            return 0;
        }
    } else {
        if (contador_digitos == 8) {
            return 2;
        } else {
            return 0;
        }
    }
}

void ImprimirInformacoes(int ddd, int tipoNum) {
    printf("DDD ");
    if (ddd == 27) {
        printf("VITORIA ");
    } else if (ddd == 41) {
        printf("CURITIBA ");
    } else if (ddd == 61) {
        printf("BRASILIA ");
    } else if (ddd == 81) {
        printf("RECIFE ");
    } else if (ddd == 92) {
        printf("MANAUS ");
    } else {
        printf("INVALIDO ");
    }

    printf("TIPO ");
    if (tipoNum == 1) {
        printf("CELULAR");
    } else if (tipoNum == 2) {
        printf("FIXO");
    } else {
        printf("INVALIDO");
    }
    printf("\n");
}