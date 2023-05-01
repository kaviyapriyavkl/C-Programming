#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int m,i,index;
	const char *grade[10];
	printf("Enter your marks for (60):");
	scanf("%d",&m);
	index=m/10;
	switch(index)
	{
		case 6:
		 grade[i]="First grade";
		 break;
		case 5:
		 grade[i]="Second grade";
		 break;
		case 4:
		 grade[i]="Third grade";
		 break;
	    default:
		 grade[i]="Fail";
	     break;
	}
	printf("%s",grade[i]);
	return 0;
}
