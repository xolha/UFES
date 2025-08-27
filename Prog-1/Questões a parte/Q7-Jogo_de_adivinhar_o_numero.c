#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Jogo que um jogador escolhe um número aleatorio de 1 a 10 */

int main() {
    int tentativas = 3;
    int chute;

    srand(time(NULL)); //gerador de números aleatórios
    int valor = (rand() % 10) + 1; //isso faz com que randomize um número entre 1 e 10
    printf("valor = %d\n", valor);

    //jogador escolhe um número
    printf("Digite um valor para o chute: ");
    scanf("%d", &chute);
    while (1) {
        if (chute == valor ) {
            printf("Voce acertou!\n");
            break;
        }

        if (chute != valor) {
            tentativas--;
            printf("Que pena, voce errou!\n");

            if (tentativas != 0) {
                printf("Voce ainda tem %d tentativa, tente novamente\n", tentativas);
                scanf("%d", &chute);
            } else {
                printf("Voce perdeu o jogo! O numero era: %d\n", valor);
                break;
            }
        }
    }

    return 0;
}