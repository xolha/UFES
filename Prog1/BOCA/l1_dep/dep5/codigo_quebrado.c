#include <stdio.h>

int main() {
	int a, b, den=1, i=0, mdc=0, mmc=0, limMDC, limMMC;

	scanf("%d %d", &a, &b);

	//Acha limites da busca
	if (a < b){ 
		limMDC = a;
		limMMC = b;
	} else {
		limMDC = b;
		limMMC = a;
	}
	
	//MDC - mínimo divisor comum
	for ( den = 1 ; den <= limMDC; den++ ) {   
		if ( (a % den == 0) && (b % den == 0)){ 
			mdc = den;
		}
	}
	
	//MMC - máximo múltiplo comum
	i = limMMC;
	while(1){
		if( (i % a == 0) && (i % b == 0)) {
			mmc = i;
			break;
		}  
		i++;
	}

	printf("%d %d", mdc, mmc);

	return 0;
}
