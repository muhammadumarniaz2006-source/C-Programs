#include<stdio.h>
#include<string.h>
int main()
{
    int daily_limit=5000;
    int amount;
    char country[50];
    int hr;


    printf("Enter the amount: ");
    scanf("%d",&amount);

     if(amount>daily_limit)
    {
        printf("Suspicious: Daily limit exceeded!");
        return 0;
    }

    printf("Enter the name of your country: ");
    scanf("%s",&country);

    if(country == "Pakistan" && "Qatar")
    {
        printf("\nSuspicious: Unsual country %s!",country);
        return 0;
    }

    printf("Enter the number of transaction in an hour: ");
    scanf("%d",&hr);

    if(hr>3)
    {
       printf("\nSuspicious: Too many transaction in short time!");
       return 0;  
    }

    else
    {
        printf("\nTransaction proceed");
    }

    return 0;

}