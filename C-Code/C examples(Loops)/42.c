#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);

    if(a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }

    for(int i=c; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("GCD is %d",i);
            return 0;
        }
    }

    return 0;

}