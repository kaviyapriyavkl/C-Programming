#include<stdio.h>

int main()
{
	int i, num;
	printf("enter the number for its table :");
	scanf("%d",&num);
	for(i=1;i<=50;i++)
	{
		printf("%d X %d = %d\n",num,i,num*i);
	 } 
	 return 0;
}
