#include <stdio.h>
int main()
{
	int n;
	printf("Enter your Integer number= ");
	scanf("%d",&n);
	if(n%2==0){
	printf("\n%d is Even Number\n",n);}
	else{
	printf("\n%d is Odd Number\n",n);}
	return 0;
}