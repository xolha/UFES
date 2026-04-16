#include <stdio.h>

int main() {
    int a, b;
    char sinal;

    scanf("(%c,%d,%d)", &sinal, &a, &b);

    int n1a = a % 10;
    int n2a = (a / 10) % 10;
    int n3a = (a / 100) % 10;
    int n4a = (a / 1000) % 10;
    
    int n1b = b % 10;
    int n2b = (b / 10) % 10;
    int n3b = (b / 100) % 10;
    int n4b = (b / 1000) % 10;

    int numero1 = (n1a * 1) + (n1b *10) + (n2a * 100)+ (n2b* 1000) + (n3a * 10000) + (n3b * 100000) + (1000000*n4a) + (10000000*n4b);
    int numero2 = (n1b * 1)+ (n1a * 10)+(n2b * 100)+ (n2a * 1000)+ (n3b * 10000)+ (n3a * 100000)+ (1000000*n4b) + (10000000*n4a);

    if ( (sinal >= 'A' && sinal <= 'Z') || (sinal >= 'a' && sinal <= 'z')) {
        printf("(%d)\n", numero1);
    } else {
        printf("(%d)\n", numero2);
    }

    return 0;
}