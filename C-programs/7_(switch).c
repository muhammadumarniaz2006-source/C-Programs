#include <stdio.h>

int main()  
{ 
    int value; 
    printf("Please enter a value in the range (1-7): "); 
    scanf("%d", &value); 

    switch (value) 
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6:
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:
            printf("\nYou entered an incorrect value.");
    }
    
    return 0;
}