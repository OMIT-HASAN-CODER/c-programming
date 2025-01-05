#include <stdio.h>
#include <math.h>
int main ()
{
	float a,b,c,korno;
	printf("Enter first value");
	scanf("%f",&a);
	printf("Enter second value");
	scanf("%f",&b);
	printf("Enter third value");
	scanf("%f",&c);
	korno = sqrt((a*a)+(b*b)+(c*c));
	printf("Result is = %.2f",korno);
	return 0;
}