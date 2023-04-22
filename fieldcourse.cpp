#include<stdio.h>
#include<conio.h>
int main()
{
	int field,course;
	printf("Enter your willing field : \n1.Engineering \n2.Medical \n3.Arts and Science");
	scanf("%d",&field);
	switch(field)
	{
		case 1:
			printf("\nYou have chosen Engineering field ");
			printf("\nCOURSES AVAILABLE \n1.CSE \n2.ECE ");
			printf("\nEnter the course yopu want");
			scanf("%d",&course);
			switch(course)
			{
				case 1:
					printf("\nYou have chosen CSE :)");
					break;
			    case 2:
				    printf("\nYou have chosen ECE :)");
				    break;
				default:
					printf("\nYou didn't enter a valid course ");
					break;
		    }
	    break;
		case 2:
			printf("\nYou have chosen medical field ");
			printf("\nCOURSES AVAILABLE \n1.MBBS \n2.BDS");
			printf("\nEnter the course you want");
			scanf("%d",&course);
			switch(course)
			{
				case 1:
					printf("\nYou have chosen MBBS :)");
					break;
			    case 2:
				    printf("\nYou have chosen BDS :)");
					break;
				default:
				    printf("\nYou didn't enter a valid course");
					break;
	    	}
	    break;
		case 3:
		    printf("\nYou have chosen Arts and Science ");
			printf("\nCOURSE AVAILABLE \n1.B.com \n2.Bcs maths");
			printf("\nEnter the course you want");
			scanf("%d",&course);
			switch(course)
			{
				case 1:
					printf("\nYou have chosen B.com :)");
					break;
			    case 2:
				    printf("\nYou have chosen Bsc maths");
					break;
				default:
				    printf("\nYou didn't enter a valid course");
					break;			
			}
		break;
		default:
			printf("\nYou didn't enter valid field ");
			
								
	}
	return 0;
}
