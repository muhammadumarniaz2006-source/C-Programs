#include <stdio.h>
int main() 
{
    int vehicles;
    int emergency;

    printf("Is there an emergency vehicle? (1 = Yes, 0 = No): ");
    scanf("%d", &emergency);

    if (emergency == 1) 
    {
        printf("Emergency detected! Signal switched to GREEN immediately.\n");
    } 

    else 
    {
        printf("Enter number of vehicles waiting: ");
        scanf("%d", &vehicles);

        if (vehicles < 10) 
        {
            printf("Green light ON for 15 seconds.\n");
        } 
        else if (vehicles >= 10 && vehicles <= 30) 
        {
            printf("Green light ON for 30 seconds.\n");
        } 
        else 
        {
            printf("Green light ON for 60 seconds.\n");
        }
    }

    return 0;
}
