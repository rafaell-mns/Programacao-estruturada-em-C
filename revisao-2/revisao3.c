#include <stdio.h>

int main(){
	int numero, algarismo, soma = 0;
	
	do{
	printf("Digite o numero [0 ou superior]: ");
	scanf("%d", &numero);
	}
	while(numero < 0);
	
	while(numero > 0){
		algarismo = numero%10;
		numero = numero/10;
		soma = soma + algarismo;
	}
	
	printf("A soma dos algarismo eh %d.", soma);
	
	return 0;
}