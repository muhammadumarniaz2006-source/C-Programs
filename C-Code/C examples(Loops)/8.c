#include <stdio.h>
#include <string.h>

int main() 
{
    int password=123456;
    for(int i=1; i<=5; i++)
    {
        printf("Enter password (at least 6 characters): ");
        scanf("%s",&password);

        if (password==123456) 
        {
            printf("Password accepted. Access granted.\n");
            return 0;
        } 
        else 
        {
            printf("Invalid password! Must be at least 6 characters.\n");
        }

    }

    printf("Account Locked.\n");

    return 0;
}
