#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter the character : ");
	scanf("%c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("the character is vowel");
	}
	else
	
	{
		printf("the character is consonent");
	}
	return 0;
}
	
