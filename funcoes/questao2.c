#include <stdio.h>

/*
chamada apropriada de uma fun��o que ap�s 
executada o valor impresso das vari�veis x e y do main estar�o trocados. 
Implemente essa fun��o.
*/

void troca(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x,y;
	printf("Digite dois n�meros: ");
	scanf("%d %d", &x, &y);
	troca(&x,&y);
	printf("%d %d", x, y);
	return 0;
}