#include <stdio.h>
#include <conio.h>
int main()
{
	char n;
	printf("Enter any upper letter= ");
	scanf("%c",&n);
	printf("%c = %c",n,n+32);
	getch();
	return 0;
}