#include <stdio.h>

void main(void)
{
	float lado;
	float area;
	printf("lado: ");
	scanf_s("%f", &lado);
	area = lado * lado;
	printf("area: %10.2f", area);
}