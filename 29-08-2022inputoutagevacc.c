#include <stdio.h>
int main()
{
	int n;
	printf("Enter your age= ");
	scanf("%d",&n);
	if(n>=12)
	{
		printf("\nYour age is %d\n\nYou will get vaccine\n",n);
	}
	else
	{
		printf("\nYour age is %d\n\nYou will not get vaccine\n",n);
	}
	return 0;
}