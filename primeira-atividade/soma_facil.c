#include <stdio.h>

int main(){
	int numA, numB;

	scanf("%d%d", &numA, &numB);
	
	if (numA > 1000 || numB > 1000)
		printf("Insira numero(s) menor(es) do que 1000");
	else
		printf("%d", numA + numB);
	
	return 0;
}