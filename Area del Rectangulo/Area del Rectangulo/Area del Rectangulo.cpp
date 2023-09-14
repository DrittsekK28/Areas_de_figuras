#include <stdio.h>

void main(void)
{
	float base, altura;
	float area;
	printf("base: ");
	scanf_s("%f", &base);
	printf("altura: ");
	scanf_s("%f", &altura);
	area = base * altura;
	printf("area: %10.2f", area);
}