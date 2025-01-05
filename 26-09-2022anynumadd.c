#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf(" Enter your input number= ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=1)
	sum=i+sum;	
	{
		printf("\n%d",sum);
	}
	return 0;
}