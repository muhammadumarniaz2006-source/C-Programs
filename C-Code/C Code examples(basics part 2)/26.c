#include<stdio.h>
int main()
{
    float p,t,r,s;
    printf("Enter the value of p: ");
    scanf("%f",&p);
    printf("Enter the value of t: ");
    scanf("%f",&t);
    printf("Enter the value of r: ");
    scanf("%f",&r);

    s=(p*t*r)/100;
    printf("Simple Interest is: %f",s);
    return 0;
}