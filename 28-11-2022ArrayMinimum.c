#include <stdio.h>
int main ()
{
	int num [100],n,i;
	printf("How many number = ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	int min = num[0];
	for (i=1;i<n;i++)
	{
		if (min > num[i])
		min = num[i];
	}
	printf("Maximum number is = %d",min);
	return 0;
}