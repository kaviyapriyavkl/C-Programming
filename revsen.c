#include<stdio.h>
void revsen()
{
	char S;
	scanf("%c",&S);
	if(S!='\n')
	{
		revsen();
		printf("%c",S);
	}
}
main()
{

	printf("ENTER THE SENTENCE:");
	revsen();
	return 0;
}


