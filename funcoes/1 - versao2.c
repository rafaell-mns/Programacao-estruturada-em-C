#include <stdio.h>

/*
Nenhuma leitura deve ser realizada na função main;
O valor ganho pela artesã deve ser impresso no main.
*/

float calculaValorGanho(){
	float venda, custo;
	int quantidade;
	
	printf("valor de venda: R$");
	scanf("%f", &venda);
	
	printf("valor do custo: R$");
	scanf("%f", &custo);
	
	printf("quantidade vendida: ");
	scanf("%d", &quantidade);
	
	return(venda - custo)*quantidade;	
}


int main(){
	printf("O valor ganho eh R$%.2f", calculaValorGanho());
	
	return 0;
}