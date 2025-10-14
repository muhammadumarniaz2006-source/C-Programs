#include <stdio.h>
int main() 
{
    int medicalClearance; 
    int age;
    float performance;

    printf("Do you have medical clearance? (1=Yes, 0=No): ");
    scanf("%d", &medicalClearance);

    if (medicalClearance == 1) 
    { 
        printf("Enter age: ");
        scanf("%d", &age);

        if (age >= 18 && age <= 35) 
        {
            printf("Enter performance score (percentage): ");
            scanf("%f", &performance);

            if (performance > 80) 
            {
                printf("Result: Player Selected!\n");
            } 
            else 
            {
                printf("Result: Not Eligible (performance too low)\n");
            }
        } 
        else 
        {
            printf("Result: Not Eligible (age not in range)\n");
        }
    } 
    else 
    {
        printf("Result: Rejected (no medical clearance)\n");
    }

    return 0;
}
