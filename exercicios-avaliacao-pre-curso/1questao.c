#include <stdio.h>

int main(){
	int numero;
	
	printf("Digite o numero que quer saber se ele eh par ou impar: ");
	scanf("%d", &numero);
	
	if (numero%2 == 0){
		printf("O numero %d eh par!", numero);
	}
	else{
		printf("O numero %d eh impar!", numero);
	}
	
	return 0;
}