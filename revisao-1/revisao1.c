#include <stdio.h>

int main(){
	int idade;
	float peso, altura;
	
	//entrada
	printf("idade: ");
	scanf("%d", &idade);
	
	printf("peso (em kg): ");
	scanf("%f", &peso);
	
	printf("altura (em metros): ");
	scanf("%f", &altura);
	
	//teste
	if ((idade >= 18 && idade <=30) && (peso > 100 || altura > 2))
		printf("Voce pode participar do concurso de medidas.\n");
	else printf("Voce nao pode participar do cuncurso de medidas.\n");
	
	return 0;
}