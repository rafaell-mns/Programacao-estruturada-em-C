#include <stdio.h>
#include <locale.h>

int main(){
	float salario, vendas, total;
	char inicial;
	setlocale(LC_ALL, "portuguese");
	// decimal separado por virgula e nao por ponto
	
	printf("Digite sua inicial: ");
	scanf(" %c", &inicial);
	
	printf("Digite seu salario fixo: R$");
	scanf("%f", &salario);
	
	printf("Digite o total de vendas do m�s: R$");
	scanf("%f", &vendas);

	total = salario + (0.2*vendas);
	
	printf("Caro %c, voc� receber� %.2f no final do m�s.", inicial, total);
	
	return 0;
}