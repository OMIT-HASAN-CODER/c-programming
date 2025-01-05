#include <math.h>
#include <stdio.h>
int main()
{
	float a,b,c,s,area;
	printf("Enter first side ");
	scanf("%f",&a);
	printf("\nEnter second side ");
	scanf("%f",&b);
	printf("\nEnter third side ");
	scanf("%f",&c);
	s=(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nResult is= %.2f\n",area);
	return 0;
}