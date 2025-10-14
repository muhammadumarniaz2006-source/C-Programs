#include<stdio.h>
int main()
{
	double a;
	
	printf("Enter the floating point number");
	scanf("%lf",&a);
	
	printf("3 decimal number is: %.3f",a);
	printf("\n6 decimal number is: %.6f",a);
	
    return 0;
}
