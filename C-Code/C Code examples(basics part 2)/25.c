#include<stdio.h>
int main()
{
    int b,h,a;

    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of h: ");   
    scanf("%d",&h);

    a=1/2*(b*h);

        printf("Area of triangle is: %d",a);
    
    return 0;
}