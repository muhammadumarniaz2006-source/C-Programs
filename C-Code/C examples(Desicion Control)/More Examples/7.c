#include <stdio.h>
int main() 
{
    int age;
    char rating;          
    int subscription;     

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) 
    {  // under 18
        printf("Enter movie rating (G = General, P = PG-13, R = Restricted, A = Adult): ");
        scanf(" %c", &rating);

        if (rating == 'G' || rating == 'P') 
        {
            printf("Access Granted: You can watch this movie (allowed for under 18).\n");
        } 
        else 
        {
            printf("Access Denied: Restricted content for under 18.\n");
        }
    } 
    else 
    { // adult
        printf("Enter movie rating (G = General, P = PG-13, R = Restricted, A = Adult): ");
        scanf(" %c", &rating);

        printf("Enter subscription type (1=Basic, 2=Premium): ");
        scanf("%d", &subscription);

        if (subscription == 1) 
        {
            printf("Access Granted: You can watch in Standard Definition (SD).\n");
        } 
        else if (subscription == 2) 
        {
            printf("Access Granted: You can watch in High Definition (HD).\n");
        } 
        else 
        {
            printf("Invalid subscription type entered.\n");
        }
    }

    return 0;
}
