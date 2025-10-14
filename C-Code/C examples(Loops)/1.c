#include<stdio.h>
int main()
{
    int bag;
    int susp;

    printf("Enter the number of bags: ");
    scanf("%d",&bag);

    for(int i=1; i<=bag; i++)
    {
        printf("\nIS this bag contains any suspicious item 1.Yes\n2.No \n");
        scanf("%d",&susp);

        if(susp==1)
        {
           printf("\nThis bag contain harmful element");
           return 0;
        }
        
    }
    printf("\nAll the bags cleared successfully");

    return 0;
    
}