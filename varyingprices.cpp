#include<stdio.h>
 
int main()
 {
 	int i,a,min,max;
 	printf("enter the number of prices  :");
 	scanf("%d",&i);
 	a=i;
 	int prc[i]={};
 	
 	for(i=0;i<a;i++)
 	{
 		printf("enter the varying cost %d  :",i+1);
 		scanf("%d",&prc[i]);
 		
	}
	
	max=prc[0];
	min=prc[0];
	
	
 	for(i=0;i<a;i++)
 	{
 		if (max<prc[i])
 		{
		 max=prc[i];
		}
	}
	for(i=0;i<a;i++)
	{
		if(min>prc[i])
		{
			min=prc[i];
		}
	}
	printf("\nthe amount perfect for buying :%d",min);
	printf("\nthe amount perfect for selling  :%d",max);
    return 0;
 }
 
