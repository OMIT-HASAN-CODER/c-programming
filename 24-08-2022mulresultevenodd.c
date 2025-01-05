#include <stdio.h>
int main()
{
	int a,b,add,sub,mul;
	printf("Enter first number= ");
	scanf("%d",&a);
	printf("Enter second number= ");
	scanf("%d",&b);
	add = (a+b);
	if(add%2==0)
	{
		printf("\n%d is Even Number\n",add);
	}
	else
	{
		printf("\n%d is Odd Number\n",add);
	}
	sub =(a-b);
	if(sub%2==0)
	{
		printf("\n%d is Even Number\n",sub);
	}
	else
	{
		printf("\n%d is Odd Number\n",sub);
	}
	mul=(a*b);
	if(mul%2==0)
	{
		printf("\n%d is Even Number\n",mul);
	}
	else
	{
		printf("\n%d is Odd Number\n",mul);
	}
	return 0;
}