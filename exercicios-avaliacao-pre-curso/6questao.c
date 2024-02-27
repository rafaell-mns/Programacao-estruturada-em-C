#include <stdio.h>

int main(){
	int base_maior, base_menor, altura;
	float area;
	
	printf("Digite o valor da base maior do trapezio: ");
	scanf("%d", &base_maior);
	
	printf("Agora digite o valor da base menor do trapezio: ");
	scanf("%d", &base_menor);
	
	printf("Por fim, digite o valor da altura do trapezio: ");
	scanf("%d", &altura);
	
	area = ((base_maior + base_menor)*altura)/2;
	
	printf("A area do trapezio com as dimensoes especificadas corresponde a %.1f.", area);
	
	return 0;
}