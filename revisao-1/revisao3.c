#include <stdio.h>

int main(){
	int numero_brindes, dia, mes, nao_ganhou = 0;
	
	printf("Digite o numero de brindes: ");
	scanf("%d", &numero_brindes);
	
	for(;numero_brindes != 0; --numero_brindes){
		   printf("Dia do seu aniversario: ");
		   scanf("%d", &dia);
		   
		   printf("Mes do seu aniversario: ");
		   scanf("%d", &mes);
		   
		   if (dia%mes == 0)
		   	printf("PARABENS\n");
		   else ++nao_ganhou;
	}
	
	printf("PROMOCAO ENCERRADA. %d nao ganharam o premio.\n", nao_ganhou);
	
	return 0;
}