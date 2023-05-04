#include<stdio.h>
int main()
{
	int a;
	printf("TO CHECK WHETHER THE NUMBER IS POSITIVE NEGATIVE OR ZERO");
	printf("\nenter a number :");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is a positive number ",a);
	}
	else if(a==0)
	{
		printf("%d is a whole number ",a);
	}
	else
	{
		printf("%d is a negative number ",a);
	}
	return 0;
}
