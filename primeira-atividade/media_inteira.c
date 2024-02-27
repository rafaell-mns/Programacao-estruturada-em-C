#include <stdio.h>

int main(){
	int numA, numB;
	
	scanf("%d%d", &numA, &numB);
	
	if (numA > 1000 || numB > 1000)
		   printf("Digite valores abaixo de 1000");
	else
		printf("%d", (numA+numB)/2);
	
	return 0;
}