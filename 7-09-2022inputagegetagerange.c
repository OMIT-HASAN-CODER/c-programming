#include <stdio.h>
int main()
{
	float age;
	printf("Enter your age= ");
	scanf("%f",&age);
	if(age<12)
	{
		printf("You are Child");
	}
	else if(age<18)
	{
		printf("You are Teenager");
	}
	else if(age<=40)
	{
		printf("You are Young");
	}
	else
	{
		printf("You are old");
	}
	return 0;
}