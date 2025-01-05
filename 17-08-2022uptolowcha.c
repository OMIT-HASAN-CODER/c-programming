#include <stdio.h>
#include <conio.h>
int main()
{
	char n;
	printf("Entet any upper letter= ");
	scanf("%c",&n);
	printf("Your lower letter is= %c",n+32);
	getch();
	return 0;
}