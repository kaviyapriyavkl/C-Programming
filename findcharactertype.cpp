#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter a character :");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("the given character is small letter");
	}
	else if(ch>='A'&&ch<='Z')
	{
		printf("the given character is capital letter");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("the given character is a digit");
	}
	else
	{
		printf("the given character is a special character");
	}
	return 0;
}
