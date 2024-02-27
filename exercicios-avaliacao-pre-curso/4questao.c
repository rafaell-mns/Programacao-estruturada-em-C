#include <stdio.h>

int main(){
	int numero, fator;
	
	printf("Digite um numero para saber a tabuada dele: ");
	scanf("%d", &numero);
	
	for (fator = 1; fator <= 10; ++fator){
		printf("%d x %d = %d\n", numero, fator, numero*fator);
	}
	
	return 0;
}