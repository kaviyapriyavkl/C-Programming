                                //string functions

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{   char fn[20];
    char ln[20];
    char cp[20];
    
	printf("enter your first name :");
	gets(fn);
	printf("\nenter your last name :");
	gets(ln);
	
	printf("\nyour full name : %s",strcat(fn,ln));   
	
	printf("\n\nhello welcome %s",strupr(fn));     
	
	printf("\n\ncopy of your name %s",strcpy(cp,fn));   
	
	printf("\n\nyour name contains %d letters ",strlen(fn));
	
	;return 0;
}
