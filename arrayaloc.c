#include <conio.h>
#include <stdio.h>
#include <string.h>
int main()
{
int arr[2][4]={
{1,2,3,4},
{5,6,7,8}
};
int i,j;
int (*pt)[4];
pt= arr;
for( i=0;i<2;i++)
{
	for(j=0;j<4;j++)
	{
		printf("\n arrray[%d][%d] =%d",i,j,&arr[i][j]);
		
	}
}

printf("\n add %d",*pt+1);
printf("\n value %d",*((*pt+1)));
printf("\n   %d",*(pt+1));
printf("\n  value %d",*(*(pt+1)));
//printf("")

}

