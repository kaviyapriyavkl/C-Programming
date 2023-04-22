#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
  char ch;
printf("\nOutput for getch()\n");
ch=getch(); //gets the value
printf("Value of ch = %c",ch);

printf("\nOutput for getche()\n");
ch=getche();  //while getting the value it prints at he same time
printf("\nValue of ch = %c",ch);
return 0;
}

