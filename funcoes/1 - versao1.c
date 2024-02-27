#include <stdio.h>

/*
Todas as leituras devem ser realizadas na função main;
O valor ganho pela artesã deve ser impresso na função calculaValorGanho
*/

void calculaValorGanho (float v, float c, int q){
	float valor_ganho;
	valor_ganho = (v - c)*q;
	printf("Valor ganho = R$%.2f", valor_ganho);
}

int main(){
	float venda, custo;
	int quantidade;
	
	printf("valor de venda: R$");
	scanf("%f", &venda);
	
	printf("valor do custo: R$");
	scanf("%f", &custo);
	
	printf("quantidade vendida: ");
	scanf("%d", &quantidade);
	
	calculaValorGanho(venda, custo, quantidade);
	
	// VALOR_GANHO = (VALOR_VENDA_UM_PRODUTO – VALOR_CUSTO_UM_PRODUTO) * QUANTIDADE_VENDIDA
	
	return 0;
}