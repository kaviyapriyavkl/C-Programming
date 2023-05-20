#include<stdio.h>
int main()
{
	int i,sum=0;
	int a[5]={};    //**since array curly braces are given **
	                // if curly braces are not given then they are used to store strings
	int length=sizeof(a)/sizeof(0);               
	                
	printf("**** Sum of array numbers ****");
	
	
	for(i=0;i<length;i++)
	
	{
		
	printf("\n Enter the number ");
	scanf("%d",&a[i]);
	sum=sum+a[i];
	
	
    }
	printf("the sum of array elemnts are: %d",sum);
	return 0;
}
