#include<stdio.h>
int main()
{
	int i,j;
	char ltr,alpha='A';
	printf("end letter(caps) :");
	scanf("%c",&ltr);
	for(i=1;i<=(ltr-'A'+1);++i)
	{
		for(j=1;j<=i;++j){
		printf("%c ",alpha);}
		++alpha;
		printf("\n");
	}
	return 0;
}
