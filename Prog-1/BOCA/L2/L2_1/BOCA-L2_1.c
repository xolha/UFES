#iinclude <stdio.h>

int main () {
	int n, m, i;

	//entrada
	scanf("%d %d", &n, &m);

	//saida
	printf("RESP:");

	for ( i = n+1 ; i < m ; i++ ) {
		if ( i % 2 == 0 ) {
			printf("%d ", i);
		}
	}

	return 0;
}