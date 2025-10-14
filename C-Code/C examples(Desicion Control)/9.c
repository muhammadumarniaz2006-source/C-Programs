#include <stdio.h>
int main()
{
    int switches;
    
    printf("Enter number of tab switches: \n");
    scanf("%d",&switches);
    
    switch(switches)
    {
                    case 0:
                         printf("The exam completed successfully without any warnings!. \n");
                         break;
                         
                    case 1:
                         printf("Warning! you switched the tab once.\n");
                         printf("Exam completed with warnings.\n");
                         break;
                         
                    case 2:
                         printf("Warning! you switched the tab twice. \n");
                         printf("Exam completed with warnings.\n");
                         break;
                         
                    case 3:
                         printf("The exam is terminated. \n");
                         break;
                         
                    default:
                            printf("Invalid Input!\n");
                            break;
    }
    
    return 0;
}