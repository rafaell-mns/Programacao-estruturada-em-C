#include <stdio.h>

int main(){
	int idade, quantidade = 0;
	float salario, soma_salario = 0.0, media;
	
	do{
	//receber "idade" e verificar se é válido
	do{
	printf("idade [1, 2, 3 ou 4]: ");
	scanf("%d", &idade);
	}
	while(idade < 1 || idade > 4);
	
		//receber "salario"
	printf("salario: ");
	scanf("%f", &salario);

		//media apenas para o caso 4
	if (idade == 4 && salario > 0){
		soma_salario = soma_salario + salario;
		++quantidade;
	}
	
	}
	while (salario > 0);
	
		//exibir a média
	printf("A media dos salarios das pessoas que possuem 51 anos ou mais eh de R$%.2f", soma_salario/quantidade);

	return 0;
}