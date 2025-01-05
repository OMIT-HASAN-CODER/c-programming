#include <stdio.h>
int main()
{
	int n;
	printf("Enter you Number= ");
	scanf("%d",&n);
	if(n>=80)
	{
		printf("Your gread is A+");
	}
	else if (n>=70)
	{
		printf("Your gread is A");
	}
	else if (n>=60)
	{
		printf("Your gread is A-");
	}
	else if (n>=50)
	{
		printf("Your gread is B");
	}
	else if (n>=33)
	{
		printf("Your gread is C");
	}
	else
	{
		printf("Your gread is F");
	}
	return 0;
}