#include<stdio.h>
#include<conio.h>
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\nit is  inside the function \nthe value of a %d\nthe value of b %d",a,b);
}
int main()
{
	int a=10,b=20;
		printf("\nit is before function call\nthe value of a %d\nthe value of b %d",&a,&b);

	swap(&a,&b);
	printf("\nit is after the function call\nthe value of a %d\nthe value of b %d",a,b);
}
