#include <stdio.h>

int main(){
	int parcelas, sinal = 1;
	double pi = 0.0, denominador = 1.0;
	
	printf("numero de parcelas da formula: ");
	scanf("%d", &parcelas);
	
	for (; parcelas != 0; --parcelas){
		pi = pi + 1/denominador * sinal;
		sinal = sinal * -1;
		denominador = denominador + 2;
	}
	
	pi = 4*pi;
	
	printf("o valor de pi eh %.7lf", pi);
	
	return 0;
}