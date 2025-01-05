#include <stdio.h>
int main()
{
	char n;
	printf("Enter your letter= ");
	scanf("%c",&n);
	switch (n)
	{
		case 'a':
		case 'A':
		printf("%c is a vowel",n);
		break;
		case 'e':
		case 'E':
		printf("%c is a vowel",n);
		break;
		case 'i':
		case 'I':
		printf("%c is a vowel",n);
		break;
		case 'o':
		case 'O':
		printf("%c is a vowel",n);
		break;
		case 'u':
		case 'U':
		printf("%c is a vowel",n);
		break;
		default:
		printf("%c is consonant",n);
	}
	return 0;
}