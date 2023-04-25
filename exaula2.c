#include <stdio.h>

int main()
{
	float idade;
	char letra;
	float altura;
	
	printf("Digite sua idade: ");
	scanf("%f", &idade);

	printf("Digite a primeira letra do seu nome... ");
	scanf("%s", &letra);
	
	printf("Me diga sua altura: ");
	scanf("%f", &altura);
	   	
	printf("\nAgora tenho suas informacoes completas!");
	printf("\n");
	printf("Essas sao sua idade, primeira letra do nome e altura, respectivamente: %.0f, %c, %.2fm", idade, letra, altura);

	return 0;
}