#include <stdio.h>
int main() 
{
    float temperature;
    int snowfall, humidity;

    printf("Enter temperature (°C): ");
    scanf("%f", &temperature);

    if (temperature < 0) 
    {
        printf("Is snowfall detected? (1 for Yes, 0 for No): ");
        scanf("%d", &snowfall);

        if (snowfall == 1) 
        {
            printf("Alert: Snowstorm Alert\n");
        } 
        else 
        {
            printf("Alert: Frost Warning\n");
        }
    } 
    else if (temperature > 35) 
    {
        printf("Is humidity high? (1 for Yes, 0 for No): ");
        scanf("%d", &humidity);

        if (humidity == 1) 
        {
            printf("Alert: Heatwave with High Humidity Alert\n");
        } 
        else 
        {
            printf("Alert: Dry Heatwave Alert\n");
        }
    } 
    else 
    {
        printf("Message: Normal Weather\n");
    }

    return 0;
}
