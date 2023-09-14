#include <stdio.h>

void main(void)
{
	float radio, Pi;
	float area;
	printf("radio: ");
	scanf_s("%f", &radio);
	Pi = 3.14159265;
	area = Pi * (radio * radio) ;
	printf("area: %10.2f", area);
}