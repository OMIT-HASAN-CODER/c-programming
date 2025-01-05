#include <stdio.h>
int main()
{
	float ict,bangla,english,average;
	ict = 86;
	bangla = 81;
	printf("Enter English marks= ");
	scanf("%f",&english);
	average = (ict+bangla+english)/3;
	printf("Result is= %.2f",average);
	return 0;
}