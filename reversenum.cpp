#include <stdio.h>
int main()

 {
    int n, rem,rev=0;
    printf("enter the number :");
    scanf("%d",&n);                                                                   /*char s[100];
                                                                                       	fgets(s,100,stdin);
                                                                                     	printf("rev =%s",strrev(s));*/
    while(n!=0)
    {
    	rem=n%10;
    	rev=rev*10+rem;
    	n=n/10;
	}
	printf("the reverse of the number is :%d",rev);
	return 0;
} 
