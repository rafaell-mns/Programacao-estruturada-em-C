#include <stdio.h>

int main(){
	int numero_alunos, contador, nota7 = 0;
	float nota;
	
	printf("Digite o numero de alunos: ");
	scanf("%d", &numero_alunos);
	
	for (contador = 1; contador <= numero_alunos; ++contador){
		do{
		printf("nota do aluno %d: ", contador);
		scanf("%f", &nota);
		}
		while(nota < 0 || nota > 10);
		
		if (nota > 7)
			++nota7;
	}
	
	printf("Numero de alunos com nota > 7: %d", nota7);
	
	return 0;
}