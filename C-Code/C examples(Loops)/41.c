#include<stdio.h>
int main()
{
    int a,b,c,d;
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

    d=a*b;

    for(int i=c; i<=d; i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM is %d",i);
            return 0;
        }
    }

    return 0;

}