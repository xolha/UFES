#include <stdio.h>

int main () {
	int n, m, i;

	//entrada
	scanf("%d %d", &n, &m);

	//saida
	for ( i = n+1 ; i < m ; i++ ) {
		if ( i % 3 == 0 || i % 4 == 0 || i % 7 == 0 ) {
			printf ("%d ", i);
		}
	}

	return 0;
}