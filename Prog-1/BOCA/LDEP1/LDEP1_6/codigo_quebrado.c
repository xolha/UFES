#include <stdio.h>

int main(){
	
	int l, c, i, j;
	int somaTotal = 0, somaLinha, atual;

	scanf("%d %d", &l, &c);

	for (i = 0 ; i < l ; i++){
		somaLinha = 0;

		for(j = 0; j < c ; j++){
			scanf("%d", &atual);
			somaLinha += atual;
		}

		printf("%d\n", somaLinha);
		somaTotal += somaLinha;
	}

	printf("%d", somaTotal);
	return 0;
}
