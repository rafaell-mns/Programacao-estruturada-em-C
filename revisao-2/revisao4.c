#include <stdio.h>

int main(){
	int numero, i, soma = 0;
	
	printf("numero: ");
	scanf("%d", &numero);
	
	for(i = 1; i < numero; ++i){
		if(numero % i == 0)
			soma = soma + i;
	}

	if (soma == numero)
		printf("%d eh perfeito.\n", numero);
	else printf("%d nao eh perfeito.\n", numero);
	
	
	return 0;
}