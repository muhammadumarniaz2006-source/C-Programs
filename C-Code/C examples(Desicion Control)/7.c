#include <stdio.h>
int main() 
{
    int balance = 100000;   
    int dailyLimit = 50000;
    int invalidAttempts = 0;
    int blocked = 0;
    int withdraw;

    printf("Initial Balance: Rs. %d\n", balance);

    // Transaction 1
    if (blocked == 0) 
    {
        printf("\nTransaction 1: Enter withdrawal amount: Rs. ");
        scanf("%d", &withdraw);

        if (withdraw > dailyLimit) 
        {
            printf("Declined! Amount exceeds daily limit Rs. %d\n", dailyLimit);
            invalidAttempts++;
        } 
        else if (withdraw > balance) 
        {
            printf("Declined! Insufficient balance.\n");
            invalidAttempts++;
        } 
        else 
        {
            balance -= withdraw;
            printf("Successful! Remaining Balance: Rs. %d\n", balance);
        }

        if (invalidAttempts >= 3) 
        {
            printf("⚠ Account blocked due to too many invalid attempts.\n");
            blocked = 1;
        }
    }

    // Transaction 2
    if (blocked == 0) 
    {
        printf("\nTransaction 2: Enter withdrawal amount: Rs. ");
        scanf("%d", &withdraw);

        if (withdraw > dailyLimit) 
        {
            printf("Declined! Amount exceeds daily limit Rs. %d\n", dailyLimit);
            invalidAttempts++;
        }
        else if (withdraw > balance) 
        {
            printf("Declined! Insufficient balance.\n");
            invalidAttempts++;
        } 
        else 
        {
            balance -= withdraw;
            printf("Successful! Remaining Balance: Rs. %d\n", balance);
        }

        if (invalidAttempts >= 3) 
        {
            printf("⚠ Account blocked due to too many invalid attempts.\n");
            blocked = 1;
        }
    }

    // Transaction 3
    if (blocked == 0) 
    {
        printf("\nTransaction 3: Enter withdrawal amount: Rs. ");
        scanf("%d", &withdraw);

        if (withdraw > dailyLimit) 
        {
            printf("Declined! Amount exceeds daily limit Rs. %d\n", dailyLimit);
            invalidAttempts++;
        } 
        else if (withdraw > balance) 
        {
            printf("Declined! Insufficient balance.\n");
            invalidAttempts++;
        } 
        else 
        {
            balance -= withdraw;
            printf("Successful! Remaining Balance: Rs. %d\n", balance);
        }

        if (invalidAttempts >= 3) 
        {
            printf("⚠ Account blocked due to too many invalid attempts.\n");
            blocked = 1;
        }
    }


    printf("\nFinal Balance: Rs. %d\n", balance);
    return 0;
}
