#include <stdio.h>
#include <locale.h>
 int main() {
 	setlocale(LC_ALL, "portuquese_Brazil");
 	
 	float minutos, segundos;
 	
 	printf("programa que recebe a quantidade de minutos e segundos\n");
 	
 	printf("infrome os minutos: ");
 	scanf("%f", &minutos);
 	
 	segundos = minutos*60;
 	
 	printf("A quantidade de segundos existentes em minutos é: %1.f", segundos);
 	
 	
 	return 0;
 }
