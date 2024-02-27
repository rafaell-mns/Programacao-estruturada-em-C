#include <stdio.h>

int leNaoNegativo(){
	int numero;
	do{
		printf("digite um numero: ");
		scanf("%d", &numero);
		
		if (numero < 0)
			printf("Digite um valor valido.\n");
	}
	while(numero < 0);
	return numero;
}

int somaDivisores(int num){
	int i, soma = 0;
	for(i = 1; i < num; ++i){
		if (num % i == 0)
			soma = soma + i;
	}
	return soma;
}

int saoAmigos(int num1, int num2){
	if (somaDivisores(num1) == num2 && somaDivisores(num2) == num1)
		return 1;
	else return 0;
}

int main(){
	int num1, num2;
	
	printf("comeco do programa :)\n");
	
	while(1){
	num1 = leNaoNegativo();
	num2 = leNaoNegativo();
	
	if (num1 == 0 && num2 == 0) //condicao especial se ambos for 0
		printf("%d e %d nao sao amigos.\n", num1, num2);
	else if (saoAmigos(num1, num2) == 1)
		printf("%d e %d sao amigos.\n", num1, num2);
	else printf("%d e %d nao sao amigos.\n", num1, num2);
	
	if(num1 == 0 || num2 == 0) break;
	}
	
	printf("fim do programa pq um dos numeros foi 0.\n");
	
	return 0;
}