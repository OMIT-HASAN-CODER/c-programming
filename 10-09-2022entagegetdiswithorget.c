#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age= ");
	scanf("%d",&age);
	if((age<=12)||(age>=60))
	{
		printf("You will get discount");
	}
	else
	{
		printf("You will not get discount");
	}
	return 0;
}