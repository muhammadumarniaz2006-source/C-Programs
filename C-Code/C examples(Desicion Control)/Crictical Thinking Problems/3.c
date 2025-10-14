#include<stdio.h>
int main()
{
    int age;
    char eyesight, written, driving, medical;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) 
    {
        printf("You are ineligible for a driving license.\n");
        return 0;
    }

    printf("Have you passed (P) or failed (F) your eyesight exam? ");
    scanf(" %c", &eyesight);

    if (eyesight == 'F') 
    {
        printf("You might need a prescription for glasses.\n");
        return 0;
    }

    printf("Have you passed (P) or failed (F) your written test? ");
    scanf(" %c", &written);

    if (written == 'F') 
    {
        printf("You need to retake the written test.\n");
        return 0;
    }

    printf("Have you passed (P) or failed (F) your driving test? ");
    scanf(" %c", &driving);

    if (driving == 'F') 
    {
        printf("You are not eligible for the license.\n");
        return 0;
    }

    if (age > 60) 
    {
        printf("Do you have a medical fitness certificate? (Y/N): ");
        scanf(" %c", &medical);

        if (medical == 'Y')
        {
            printf("You are eligible for the license.\n");
        } 
        else 
        {
            printf("You are not eligible for the license.\n");
            return 0;
        }
    } 
    else 
    {
        printf("You are eligible for the license.\n");
    }

    return 0;
}


