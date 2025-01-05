#include<stdio.h>
int main()
{
	int a,b,c,d,e,sub;
	printf("Enter your Integer number");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sub=((a+b)*(c/d)-a);
	printf("Result is=%d",sub);
	return 0;
}