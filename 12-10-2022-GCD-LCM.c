#include <stdio.h>
int main()
{
	int num1,num2,a,b,rem,gcd,lcm;
	printf("Enter your two number= ");
	scanf("%d%d",&num1,&num2);
	a=num1;
	b=num2;
	while(b!=0)
	{
		rem=a%b;
		a=b;
		b=rem;
	}
	gcd=a;
	lcm=(num1*num2)/gcd;
	printf("GCD is=%d\n",gcd);
	printf("LCM is=%d\n",lcm);
	return 0;
}