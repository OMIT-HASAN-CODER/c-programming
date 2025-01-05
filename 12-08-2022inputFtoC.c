#include <stdio.h>
int main ()
{
	float F,C;
	printf("Enter Fahrenheit Temperature: ");
	scanf("%f",&F);
	C = ((5*F-160)/9);
	printf("\n%.2f°F = %.2f°C\n",F,C);
	return 0;
}