#include <stdio.h>

int main() {
    float nota, maior = 0.0, menor = 10.0, soma = 0.0, soma7 = 0.0;
	int nota4 = 0, contador = 0, contador7 = 0;
	char resposta;
	float media, media7;

    do {
        //receber a nota
		do {
            printf("nota: ");
			scanf("%f", &nota);
			}
		while (nota < 0 || nota > 10);
		
		//quantidade:
		++contador;

		if (nota >= 7)
		++contador7;
	
		if (nota < 4)
		++nota4;
		
		//maior e menor
		if (nota > maior)
		maior = nota;
		if (nota < menor)
		menor = nota;
		
		//mensagem nota
		if (nota >= 9)
		printf("Nota Excelente! ");
		if (nota < 7)
		printf("Estude mais! ");
		
		//somatório
		soma = soma + nota;

		if (nota >=7)
		soma7 = soma7 + nota;
		
		//pergunta
        printf("Voce deseja digitar outra nota? [s/n]");
		scanf(" %c", &resposta);
		}
	while(resposta == 's');
	
	media = soma/contador;
	media7 = soma7/contador7;
	
    //final
	printf("O total de notas menores do que 4 foi de %d.\n", nota4);
	printf("A maior e menor nota foram, respectivamente, %.1f e %.1f.\n", maior, menor);
	printf("A media geral foi %.1f.\n", media);
	printf("A media das notas maiores ou igual a 7 foi de %.1f.\n", media7);

    return 0;
}