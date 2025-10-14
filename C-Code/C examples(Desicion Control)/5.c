#include <stdio.h>
int main() 
{
    char ticketClass;
    int row;
    int withChild;

    printf("Enter ticket class (B=Business, E=Economy): ");
    scanf(" %c", &ticketClass);

    printf("Enter seat row number: ");
    scanf("%d", &row);

    printf("Traveling with child under 5? (1=Yes, 0=No): ");
    scanf("%d", &withChild);

    printf("\n--- Boarding Group Assignment ---\n");

    // Group assignment rules
    if (ticketClass == 'B' || ticketClass == 'b') 
    {
        printf("Assigned to Group A (Business class)\n");
    }
    else if (withChild == 1) 
    {
        printf("Assigned to Group A (Traveling with young child)\n");
    }
    else if (ticketClass == 'E' || ticketClass == 'e') 
    {
        if (row >= 1 && row <= 10) 
        {
            printf("Assigned to Group B (Economy, front rows)\n");
        }
        else if (row >= 11 && row <= 20) 
        {
            printf("Assigned to Group C (Economy, middle rows)\n");
        }
        else if (row >= 21) 
        {
            printf("Assigned to Group D (Economy, back rows)\n");
        }
        else 
        {
            printf("Invalid row number\n");
        }
    }
    else 
    {
        printf("Invalid ticket class entered\n");
    }

    return 0;
}
