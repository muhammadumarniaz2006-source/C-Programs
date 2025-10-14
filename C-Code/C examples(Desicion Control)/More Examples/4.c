#include <stdio.h>
int main() 
{
    int loggedIn;       
    int membershipType;  
    int phdStudent;      

    printf("Are you logged in? (1=Yes, 0=No): ");
    scanf("%d", &loggedIn);

    if (loggedIn == 1) 
    {  
        printf("Enter membership type (1=Free, 2=Standard, 3=Premium): ");
        scanf("%d", &membershipType);

        if (membershipType == 1) 
        { 
            printf("Access Granted: Open e-Books only\n");
        } 
        else if (membershipType == 2) 
        {  
            printf("Access Granted: e-Books and Journals\n");
        } 
        else if (membershipType == 3) 
        {  
            printf("Are you a PhD student? (1=Yes, 0=No): ");
            scanf("%d", &phdStudent);

            if (phdStudent == 1) 
            {
                printf("Access Granted: e-Books, Journals, Research Papers, Datasets, and Archived Collections\n");
            } 
            else 
            {
                printf("Access Granted: e-Books, Journals, Research Papers, and Datasets\n");
            }
        } 
        else 
        {
            printf("Invalid membership type entered!\n");
        }
    } 
    else 
    {
        printf("Access Denied: Please log in to continue\n");
    }

    return 0;
}
