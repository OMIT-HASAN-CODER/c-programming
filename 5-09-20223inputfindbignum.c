#include <stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter your first number= ");
	scanf("%d",&n1);
	printf("Enter your second number= ");
	scanf("%d",&n2);
	printf("Enter your third number= ");
	scanf("%d",&n3);
	if((n1>n2)&&(n1>n3))
	{
		printf("%d is big number",n1);
	}
	else if((n2>n1)&&(n2>n3))
	{
		printf("%d number is big",n2);
	}
	else if((n3>n1)&&(n3>n2))
	{
		printf("%d is big number",n3);
	}
	else
	{
		printf("You number is equal");
	}
	return 0;
}