#include<stdio.h>
int main()
{
    int compartment, passenger, total=0;

    printf("Enter the no. of compartment train have: ");
    scanf("%d", &compartment);

    for(int i=1; i<=compartment; i++)
    {
        printf("\nEnter the number of passengers: ");
        scanf("%d", &passenger);

        if(passenger> 10)
        {
            printf("\nPassenger limit exceeded");
            passenger=10;
        }
        else if(passenger==0)
        {
            printf("\nCompartment empty");
            continue;
        }
        total = total + passenger;

    }

    printf("\nTotal number of passengers: %d", total);
    return 0;   
}