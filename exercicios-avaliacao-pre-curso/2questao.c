#include <stdio.h>
#include <locale.h>

int main(){
	int var;
	setlocale (LC_ALL, "portuguese");
	
	printf("Digite um numero de 1 a 7 para saber o dia da semana correspondente: ");
	scanf("%d", &var);
	
	switch(var){
		case 1:
			printf("Domingo");
			break;
	 	case 2:
	 		printf("Segunda-feira");
	 		break;
	 	case 3:
	 		printf("Ter�a-feira");
	 		break;
	 	case 4:
	 		printf("Quarta-feira");
	 		break;
	 	case 5:
	 		printf("Quinta-feira");
	 		break;
	 	case 6:
	 		printf("Sexta-feira");
	 		break;
	 	case 7:
	 		printf("S�bado");
	 		break;
	 	default:
	 		printf("Digite uma op��o v�lida.");
	 		break;
	}
	
	return 0;
}