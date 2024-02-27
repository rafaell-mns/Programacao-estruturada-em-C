#include <stdio.h>

int main(){
	int idade;
	float anos, meses, dias;
	
	printf("Digite sua idade em dias: ");
	scanf("%d", &idade);
	
	anos = idade/365;
	meses = (idade%365)/30;
	dias = (idade%365)%30;
	
	printf("Sua idade eh de %.0f ano(s), %.0f mes(es) e %.0f dia(s)", anos, meses, dias);
	
	return 0;
}