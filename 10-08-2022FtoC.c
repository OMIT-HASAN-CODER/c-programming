#include <stdio.h>
int main()
{
	float C,F;
	printf("Enter Fahrenheit value");
	scanf("%f",&F);
	C=((5*F-160)/9);
	printf("Result is= %.2f",C);
	return 0;
}