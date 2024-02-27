#include <stdio.h>

int main(){
	int numero, contador = 0;

	printf("Digite um numero para verificar quantos digitos ele tem: ");
	scanf("%d", &numero);
	
	
	if (numero < 0){
		printf("Digite um numero positivo");
	}
	else{
		// caso especial para 0:
		if(numero == 0){
			printf("O numero 0 tem 1 digito, o proprio zero.");
		}
		else{
			while(numero > 0){
			numero = numero / 10;
			++contador;
			}
			printf("O numero digitado possui %d digito(s)!", contador);
		}
	}
return 0;
}