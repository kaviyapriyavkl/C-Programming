                       //***subtraction OF TWO MATRIX USING DIMENSIONAL ARRAY***

#include<stdio.h>
#include<conio.h>

int main()
{ 
    int a,b,i,j;   //a , b = values stored in dimensions 
    printf("         ______PROGRAM TO DISPLAY ADDTION OF TWO MATRIX_____\n");
	printf("enter the rows :");
    scanf("%d",&i);
    printf("enter the coloum :");
    scanf("%d",&j);
    
    int mat_A[a][b];
    int mat_B[a][b];     
    int mat_c[a][b];

        
    printf("matrix A\n");
    
    for(a=0;a<i;a++)
    {
    	for(b=0;b<j;b++)
    	{
    		printf("MAT_A[%d][%d]=",a,b); 
    		scanf("%d",&mat_A[a][b]);        //store the value at mat[a][b]
		}
   }
   
   printf("matrix B\n");
   for(a=0;a<i;a++)
   {
   	for(b=0;b<j;b++)
   	   {
   	   	printf("MAT_B[%d][%d]=",a,b);
   	   	scanf("%d",&mat_B[a][b]);
			   		
	   }
   }
   
   for(a=0;a<i;a++)
   {
   	for(b=0;b<j;b++)
   	   {
   	     mat_c[a][b]=mat_A[a][b]-mat_B[a][b];
		 printf("\nmat_c[%d][%d]=%d",a,b,mat_c[a][b]);		
	   }
	   
   }
   
   //another method to print mat_c
   
   printf("\n\n                         ***subtraction of two matrix***\n\n\n");
   for(a=0;a<i;a++)
   {
   	for(b=0;b<j;b++)
   	{
   		printf("mat_c[%d][%d]=%d\n",a,b,mat_c[a][b]);
   		
   		
	   }
	} 
   return 0;
}
