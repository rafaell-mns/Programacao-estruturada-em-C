#include <stdio.h>

int main(){
	float raio;
	
	scanf("%f", &raio);
	
	if (raio < 0 || raio > 10000)
		printf("Forneça um valor valido.");
	else
		printf("%.2f", 3.1416*raio*raio);
	
	return 0;
}