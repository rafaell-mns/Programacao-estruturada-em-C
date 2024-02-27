#include <stdio.h>

/*
chamada apropriada de uma função que após 
executada o valor impresso das variáveis x e y do main estarão trocados. 
Implemente essa função.
*/

void troca(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x,y;
	printf("Digite dois números: ");
	scanf("%d %d", &x, &y);
	troca(&x,&y);
	printf("%d %d", x, y);
	return 0;
}