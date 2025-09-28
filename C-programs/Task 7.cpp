#include<stdio.h>
int main()
{
	char name[20];
	int age;
	
	printf("Enter your name ");
	scanf("%s",&name);
	
	printf("Enter your age ");
	scanf("%d",&age);
	
	printf("Hello %s",name);
	printf("\nYou are %d years old",age);
	
	return 0;
	
}