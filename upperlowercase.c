#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[100];
	
	printf("enter any string :");
	gets(a);
	printf("\n\nthe string in uppercase :\n%s",strupr(a));
	printf("\n\nthe string in lower case :\n%s",strlwr(a));
	
	return 0;
	
}
