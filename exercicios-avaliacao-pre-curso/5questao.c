#include <stdio.h>

int main(){
	int base, altura, area;
	
	printf("Digite o valor da base do triangulo: ");
	scanf("%d", &base);
		
	printf("Digite o valor da altura do triangulo: ");
	scanf("%d", &altura);
	
	while (base < 0 || altura < 0){
		printf("Digite valores positivos. Tente novamente abaixo.\n");
	
		printf("Digite o valor da base do triangulo: ");
		scanf("%d", &base);
			
		printf("Digite o valor da altura do triangulo: ");
		scanf("%d", &altura);
	}
	
	area = (base*altura)/2;
	
	printf("A area do triangulo corresponde a %d.", area);
	
	return 0;
}