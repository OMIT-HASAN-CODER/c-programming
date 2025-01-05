#include <stdio.h>
int main()
{
	float a;
	printf("Enter your number= ");
	scanf("%f",&a);
	if(a>0)
	{
		printf("%.2f is positive number",a);
	}
	else
	{
		printf("%.2f is negetive number",a);
	}
	return 0;
}