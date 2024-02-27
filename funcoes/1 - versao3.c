#include <stdio.h>

/*
Todas as leituras devem ser realizadas na função main;
O valor ganho pela artesã deve ser impresso no main
*/

int main(){
	float venda, custo, resposta;
	int quantidade;
	
	printf("valor de venda: R$");
	scanf("%f", &venda);
	
	printf("valor do custo: R$");
	scanf("%f", &custo);
	
	printf("quantidade vendida: ");
	scanf("%d", &quantidade);
	
	resposta = (venda - custo)*quantidade;
	
	printf("O valor ganho eh R$%.2f", resposta);
	
	return 0;
}