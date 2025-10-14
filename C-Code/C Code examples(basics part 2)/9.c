#include<stdio.h>
int main()
{
    const float PI=3.142;
    int r;
    float c;

    printf("Enter the radius of a circle:");
    scanf("%d",&r);

    c=2*PI*r;

    printf("The circumference of circle %f",c);

    return 0;
    
}