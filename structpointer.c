#include<stdio.h>
#include<conio.h>
struct info
{
	char name[25];
	int age;
	
};
 void get(struct info*k)
 {
     printf("enter your name");
	scanf("%s",&k->name);
	printf("\n enter your age");
	scanf("%d",&k->age);
	
	
}
void put(struct info*k)
{
	printf("\nNAME:%s \nAGE:%d",k->name,k->age);

}
int main()
{
	struct info s1,s2,*s,*v;
	s=&s1;
	v=&s2;
	get(s);
	get(v);
	put(s);
	put(v);
}
