#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("The given character is small letter");
	}
	else if(ch>='A'&&ch<='Z')
	{
		printf("The given character is capital letter");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("The given character is a digit");
	}
	else
	{
		printf("The given character is a special character");
	}
	return 0;
}
