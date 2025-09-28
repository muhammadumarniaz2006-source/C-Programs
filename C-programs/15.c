#include<stdio.h>
int main()
{
    int a,s,p;
    char e;
    float m,n;

    printf("Enter the account number: ");
    scanf("%d",&a);

    printf("Enter the type of customer: ");
    scanf(" %c", &e);

    printf("Enter the number of basic service connections: ");
    scanf("%d",&s);

    printf("Enter the number of premium service connections: ");
    scanf("%d",&p);

    if(e=='r'|| e=='R')
    {
        m=4.50+20.50*s+7.50*p;
        printf("Account number: %d",a);
        printf("\nDue amount is: $%.3f",m);
        return 0;
    }

    else if(e=='b'||e=='B')
    {
        if(s>10)
        {
            n=15.00+10*75.00+(s-10)*5.00+50.00*p;
            printf("Account number: %d",a);
            printf("\nDue amount is: $%.3f",n);
            return 0;
        }

        else
        {
            n=15.00+75.0*s+50.00*p;
            printf("Account number: %d",a);
            printf("\nDue amount is: $%.3f",n);
            return 0;
        }    
    }

    else
    {
        printf("Invalid input");   
    }
    return 0;

}