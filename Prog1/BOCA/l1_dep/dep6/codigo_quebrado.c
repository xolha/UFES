#include <stdio.h>

int main(){
	int l, c, i, j;
	int soma = 0, atual, somaFinal = 0;

	scanf("%d %d", &l, &c);

	
	for (i = 0; i< l; i++){
		for(j = 0; j < c; j++){
			scanf("%d", &atual);
			soma += atual;
			somaFinal += atual;
		}
		printf("%d\n", soma);
		soma = 0;
	}

	printf("%d\n", somaFinal);

	return 0;
}
