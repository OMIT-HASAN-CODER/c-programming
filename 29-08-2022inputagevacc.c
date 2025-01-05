#include <stdio.h>
int main()
{
	int n;
	printf("Enter your age= ");
	scanf("%d",&n);
	if(n>=12)
	{
		printf("You will get vaccine");
	}
	else
	{
		printf("You will not get vaccine");
	}
	return 0;
}