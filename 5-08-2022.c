#include <stdio.h>
int main()
{
	float a,b,add,sub,mul,div;
	printf("Enter two numbers\n");
	scanf("%f%f",&a,&b);
	add =(a+b);
	sub = (a-b);
	mul = (a*b);
	div = (a/b);
	printf("\nResult of Addition= %.2f\n\n",add);
	printf("Result of Subtraction= %.2f\n\n",sub);
	printf("Result of Multiplication= %.2f\n\n",mul);
	printf("Result of Division= %.2f\n",div);
	return 0;
}