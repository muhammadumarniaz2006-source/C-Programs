#include<stdio.h>
int main()
{
	int value;
	
	printf("Please enter a value in the range (1-7)");
	scanf("%d",&value);
	
	if(value==1)
	{
		printf("Monday");
		return 0;
	}
	
	else if(value==2)
	{
		printf("Tuesday");
		return 0;
	}
	
	else if(value==3)
	{
		printf("Wednesday");
		return 0;
	}
	
	else if(value==4)
	{
		printf("Thursday");
		return 0;
	}
	
	else if(value==5)
	{
		printf("Friday");
		return 0;
	}
	
	else if(value==6)
	{
		printf("Saturday");
		return 0;
	}
	
	else if(value==7)
	{
		printf("Sunday");
		return 0;
	}
	
	else
	{
		printf("\nYou entered a value out of range");
	}
	
	return 0;
	
}
