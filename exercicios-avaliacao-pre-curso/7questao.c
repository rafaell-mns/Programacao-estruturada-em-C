#include <stdio.h>
#include <math.h>

int main() {
    float a, b, potencia, raiz_a, raiz_b;
    
    printf("Digite um valor (pode ser decimal): ");
    scanf("%f", &a);

    printf("Digite outro valor (pode ser decimal): ");
    scanf("%f", &b);

	printf("\n");
	
    printf("%.1f + %.1f = %.1f\n", a, b, a+b);
    printf("%.1f - %.1f = %.1f\n", a, b, a-b);
    printf("%.1f * %.1f = %.1f\n", a, b, a*b);
    printf("%.1f / %.1f = %.1f\n", a, b, a/b);

    potencia = pow(a, b);
    printf("%.1f elevado a %.1f = %.1f\n", a, b, potencia);

    raiz_a = sqrt(a);
    printf("A raiz quadrada de %.1f eh %.1f\n", a, raiz_a);

	raiz_b = sqrt(b);
    printf("A raiz quadrada de %.1f eh %.1f\n", b, raiz_b);
	
    return 0;
}
