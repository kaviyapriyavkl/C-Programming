#include<stdio.h>
#include<conio.h>
  
main()

{
	char firstname[20];
	char lastname[20];
	printf("enter your firstname :\n");
	scanf("%s",&firstname);
	printf("enter your lastname :\n");
	scanf("%s",&lastname);
	printf("your full name %s%s",firstname,lastname);
	char b;
	b=getch();        //it is a function used to get the string 
    printf("\n%c",b);
return 0;	
  }  
