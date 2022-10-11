#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "portuquese_Brazil");
	
	float m, d, s, a, n1, n2;
	
	printf("Calculadora\n");
	
	printf("informe o primeiro número: ");
	scanf("%f", &n1);
	
	printf("informe o segundo número: ");
	scanf("%f", &n2);
	
	m = n1*n2;
	
	d = n1 /n2;
	
	s = n1 - n2;
	
	a = n1 + n2;
	
	printf("O resultado da Multiplicação %f, %f foi:%f\n", n1, n2, m);
	
	printf("O resultado da divisão %f, %f foi:%f\n", n1, n2, d);
	
	printf("O resultado da subtração %f, %f foi:%f\n", n1, n2, s);
	
	printf("O resultado da adição %f, %f foi:%f\n", n1, n2, a);
	
	return 0;
	
}
