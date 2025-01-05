#include <stdio.h>
int main ()
{
	float a,b,sum;
	printf("Enter first value");
	scanf("%f",&a);
	printf("Enter second value");
	scanf("%f",&b);
	sum = (a+b);
	printf("%.2f + %.2f = %.2f",a,b,sum);
	return 0;
}