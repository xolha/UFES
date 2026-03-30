#include <stdio.h>

//contexto: dizer se é vogal ou não

int main(){
    char ehVogal;
    scanf("%c", &ehVogal);

    if (ehVogal == 'a' || ehVogal == 'A' || ehVogal == 'e' || ehVogal == 'E' || ehVogal == 'i' || ehVogal == 'I' || ehVogal == 'o' || ehVogal == 'O' || ehVogal == 'u' || ehVogal == 'U') {
        printf("Vogal");
    } else {
        printf("Nao vogal");
    }

    return 0;
}