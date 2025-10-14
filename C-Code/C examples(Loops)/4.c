#include<stdio.h>
int main()
{
    char choice;
    float balance;
    printf("Enter Your Balance: ");
    scanf("%f",&balance);

    // while(balance>10)
    // {
    //     balance=balance-10;
    //     printf("New balance is: %f\n",balance);
    // }

    for(int i=1; i<10; i++)
    {
        balance=balance-10;
        printf("New balance is: %f\n",balance);
    }
    
        printf("Recharge Required");
        return 0;
  
}

