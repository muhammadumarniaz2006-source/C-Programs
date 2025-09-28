#include <stdio.h>
int main() {
    int personType;  
    int studentType;  
    int facultyType;  
    int hour;       
    int appointment;  

    printf("Enter person type (1=Student, 2=Faculty, 3=Visitor): ");
    scanf("%d", &personType);

    if (personType == 1) 
    {
        printf("Enter student type (1=Undergraduate, 2=Postgraduate): ");
        scanf("%d", &studentType);

        if (studentType == 1) 
        { 
            printf("Enter current hour (0-23): ");
            scanf("%d", &hour);

            if (hour >= 8 && hour < 18) 
            {
                printf("Access Granted: Undergraduate Student (within hours)\n");
            } 
            else 
            {
                printf("Access Denied: Undergraduate Student (outside hours)\n");
            }
        } 
        else 
        {
            printf("Access Granted: Postgraduate Student (24-hour access)\n");
        }
    } 
    else if (personType == 2) 
    { 
        printf("Enter faculty type (1=Full-time, 2=Visiting): ");
        scanf("%d", &facultyType);

        if (facultyType == 1) 
        {
            printf("Access Granted: Full-time Faculty (always allowed)\n");
        } 
        else 
        {
            printf("Enter current hour (0-23): ");
            scanf("%d", &hour);

            if (hour >= 8 && hour < 18) 
            {
                printf("Access Granted: Visiting Faculty (within hours)\n");
            } 
            else 
            {
                printf("Access Denied: Visiting Faculty (outside hours)\n");
            }
        }
    } 
    else if (personType == 3) 
    {
        printf("Do you have a valid appointment? (1=Yes, 0=No): ");
        scanf("%d", &appointment);

        if (appointment == 1) 
        {
            printf("Access Granted: Visitor with valid appointment\n");
        } 
        else 
        {
            printf("Access Denied: Visitor without appointment\n");
        }
    } 
    else 
    {
        printf("Invalid input! Please enter correct person type.\n");
    }

    return 0;
}
