#include<stdio.h>
int main ()
{
    float p,r,t,c;

    printf("Enter the value of p: ");
    scanf("%f",&p);
    printf("Enter the value of r: ");
    scanf("%f",&r);
    printf("Enter the value of t: ");
    scanf("%f",&t);

    c=p*(1+(r/100)*t);
    printf("Compound Interest is: %f",c);
    return 0;
}