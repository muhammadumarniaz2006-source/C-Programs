#include <stdio.h>
#include <math.h>

int main() 
{
    int mode, choice;
    double num, result, base, exponent;

    printf("Choose mode (1=Basic, 2=Advanced): ");
    scanf("%d", &mode);

    if (mode == 1) 
    {  // Basic Mode
        printf("Basic Mode Options:\n");
        printf("1. Square Root\n");
        printf("2. Power\n");
        printf("3. Logarithm (base e)\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter number: ");
            scanf("%lf", &num);
            result = sqrt(num);
            printf("Square Root = %.2lf\n", result);
        } 
        else if (choice == 2) 
        {
            printf("Enter base: ");
            scanf("%lf", &base);
            printf("Enter exponent: ");
            scanf("%lf", &exponent);
            result = pow(base, exponent);
            printf("Power Result = %.2lf\n", result);
        } 
        else if (choice == 3) 
        {
            printf("Enter number: ");
            scanf("%lf", &num);
            result = log(num);
            printf("Natural Logarithm = %.2lf\n", result);
        } 
        else 
        {
            printf("Invalid choice in Basic Mode!\n");
        }
    } 
    else if (mode == 2) 
    {  // Advanced Mode
        printf("Advanced Mode Options:\n");
        printf("1. Sine\n");
        printf("2. Cosine\n");
        printf("3. Tangent\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter angle (in radians): ");
            scanf("%lf", &num);
            result = sin(num);
            printf("Sine = %.2lf\n", result);
        } 
        else if (choice == 2) 
        {
            printf("Enter angle (in radians): ");
            scanf("%lf", &num);
            result = cos(num);
            printf("Cosine = %.2lf\n", result);
        } 
        else if (choice == 3) 
        {
            printf("Enter angle (in radians): ");
            scanf("%lf", &num);
            result = tan(num);
            printf("Tangent = %.2lf\n", result);
        } 
        else 
        {
            printf("Invalid choice in Advanced Mode!\n");
        }
    } 
    else 
    {
        printf("Invalid mode selected!\n");
    }

    return 0;
}
