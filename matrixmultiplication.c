#include<stdio.h>
int main()
{
	int i,j,k,a,b;
	printf("enter the number of rows :");
	scanf("%d",&a);
	printf("enter the number of column :");
	scanf("%d",&b);
	int mat_A[a][b];
	int mat_B[a][b];
	int multi_[a][b];
	printf("\nfor mat_A\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		   printf("enter the value mat_A[%d][%d] :",i+1,j+1 );
		   scanf("%d",&mat_A[i][j]);
		}
	}
	printf("\nfor mat_B\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("enter the value mat_B[%d][%d] :",i+1,j+1 );
		    scanf("%d",&mat_B[i][j]);
		}
	}
	printf("\n\n\n                             the multiplication of two matrix  \n\n\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{  
		    multi_[i][j]=0;
			for(k=0;k<b;k++)
			{   
				multi_[i][j]+=mat_A[i][k]*mat_B[k][j];
			}
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf(     "%d\t",multi_[i][j]);
		    
		}
		printf("\n");
	}
	return 0;
}
