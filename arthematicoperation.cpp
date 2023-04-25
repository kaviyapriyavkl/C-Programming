#include<stdio.h>
#include<conio.h>
#include<string.h> 

int main()
{
	char ao[5] ;
	int a, b, c ;
	
	printf("arthematic operation");
	printf("\n");
	
    
	printf("\ntype add for addition");
	printf("\ntype sub for subtraction");
	printf("\ntype mul for multiplication");
	printf("\ntype div for division");
	printf("\n");
	
	printf("\nenter :");
	scanf("%s", &ao);

    if(!strcmp(ao,"add" ))
	{
		printf( "\nnumber one :");
    	scanf("%d", &a);
    	printf( "\nnumber two :");
    	scanf("%d", &b);
		c=a+b;
		printf("\n %d + %d = %d", a, b, c);
	}
	else if(!strcmp(ao,"sub" ))
	{
		printf( "\nnumber one :");
    	scanf("%d", &a);
    	printf( "\nnumber two :");
    	scanf("%d", &b);
		c=a-b;
		printf("\n %d - %d = %d", a, b, c);
	}
	else if(!strcmp(ao,"mul" ))
	{
		printf( "\nnumber one :");
    	scanf("%d", &a);
    	printf( "\nnumber two :");
    	scanf("%d", &b);
		c=a*b;
		printf("\n %d x %d = %d", a, b, c);
	}
	else if(!strcmp(ao,"div" ))
	{
		printf( "\nnumber one :");
    	scanf("%d", &a);
    	printf( "\nnumber two :");
    	scanf("%d", &b);
		c=a/b;
		printf("\n %d / %d = %d", a, b, c);
	}
	else
	{
		printf("\ntyped the wrong word");
	}
    
	
    return 0;

}
