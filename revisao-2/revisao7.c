#include <stdio.h>

int main(){
	//variaveis iniciais
	int idade;
	float peso, altura;
	char categoria;
	
	//variaveis para operação
	int A = 0, i = 0;
	float mais_alto = 0, mais_pesado = 0;
	float soma = 0, B = 0;
	
	for(i = 1; i <= 100; ++i){
		//idade
		printf("idade: ");
		scanf("%d", &idade);
		if (idade < 0) break;
		
		//peso
		printf("peso: ");
		scanf("%f", &peso);
		
		//altura
		printf("altura em metros: ");
		scanf("%f", &altura);
		
		//categoria
		printf("categoria (A ou B): ");
		scanf(" %c", &categoria);
		
		if(categoria == 'A' || categoria == 'a')
			++A;
		else ++B;

		//mais alto de B
		if((categoria == 'B' || categoria == 'b') && altura > mais_alto)
			mais_alto = altura;
		
		//mais pesado de A
		if((categoria == 'A' || categoria == 'a') && peso > mais_pesado)
			mais_pesado = peso;
		
		//média de idade dos atletas de B
		if(categoria == 'B' || categoria == 'b')
			soma = soma + idade;
		
		//percentual de atletas de A
	}

	printf("O mais alto de B tem %.1fm.\n", mais_alto);
	printf("O mais pesado de A tem %.2fkg.\n", mais_pesado);
	printf("A media de idade dos atletas de B eh %.0f.\n", soma/B);
	printf("O percentual de atletas da categoria A eh %.1f%%.\n", A/(A+B)*100);

	return 0;
}
