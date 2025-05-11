#include <stdio.h>
#include <math.h>

int main() {
    float temperatura;
    char unidade;

    scanf("%f %c", &temperatura, &unidade);

    if ( unidade == 'C' || unidade == 'c') {
        float f =  (temperatura * 9.0 / 5.0) + 32.0;
        printf("%.2f (F)", f);
    }
    else if ( unidade == 'F' || unidade == 'f') {
        float c = (temperatura - 32.0) * 5.0 / 9.0;
        printf ("%.2f (C)", c);
    }

    return 0;
}