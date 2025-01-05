#include <stdio.h>
#include <conio.h>
int main()
{
	char n;
	printf("Enter any lower letter= ");
	scanf("%c",&n);
	printf("Your upper letter is= %c",n-32);
	getch();
	return 0;
}