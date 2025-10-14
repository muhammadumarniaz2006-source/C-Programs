#include <stdio.h>
int main() 
{
    char device1[50], device2[50], device3[50];
    float c1, c2, c3;
    int THRESHOLD=10.0;

    // Input for device 1
    printf("Enter device 1 name: ");
    scanf("%s", device1);
    printf("Enter daily energy consumption (kWh): ");
    scanf("%f", &c1);

    // Input for device 2
    printf("\nEnter device 2 name: ");
    scanf("%s", device2);
    printf("Enter daily energy consumption (kWh): ");
    scanf("%f", &c2);

    // Input for device 3
    printf("\nEnter device 3 name: ");
    scanf("%s", device3);
    printf("Enter daily energy consumption (kWh): ");
    scanf("%f", &c3);

    // Report
    printf("\n------ Daily Energy Consumption Report ------\n");

    printf("%s: %.2f kWh - ", device1, c1);
    if (c1 > THRESHOLD) 
    {
        printf("HIGH CONSUMPTION!\n");
    } 
    else 
    {
        printf("Normal\n");
    }

    printf("%s: %.2f kWh - ", device2, c2);
    if (c2 > THRESHOLD) 
    {
        printf("HIGH CONSUMPTION!\n");
    } 
    else
    {
        printf("Normal\n");
    }

    printf("%s: %.2f kWh - ", device3, c3);
    if (c3 > THRESHOLD) 
    {
        printf("HIGH CONSUMPTION!\n");
    } 
    else 
    {
        printf("Normal\n");
    }

    return 0;
}
