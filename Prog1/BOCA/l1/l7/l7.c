#include <stdio.h>

//contexto: converter temperaturas

int main() {
    int n;
    char temp;
    scanf("%d %c", &n, &temp);

    if (temp == 'F' || temp == 'f') {
        float convertC = (n - 32)/1.8;
        printf("%.2f (C)", convertC);
    } else if (temp == 'C' || temp == 'c') {
        float convertF = (n * 1.8) + 32;
        printf("%.2f (F)", convertF);
    }

    return 0;
}