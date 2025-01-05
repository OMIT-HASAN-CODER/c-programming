#include <stdio.h>
int main()
{
	char c;
	int lowV, upV;
	printf("Enter any alphabet: ");
	scanf("%c",&c);
	lowV = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	upV = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
	if(lowV || upV)
	printf("%c is a Vowel",c);
	else
	printf("%c is Consonant",c);
	return 0;
}