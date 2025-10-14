#include<stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)
    {
        printf("\n");
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
    }

    printf("\n");
    for(int i=1; i<=rows; i++)
    {
        printf("\n");
        for(int j=1; j<= rows-i+1; j++)
        {
            printf("* ");
        }
    }
    
    printf("\n");
    for(int i=1; i<=rows; i++)
    {
        printf("\n");
        for(int k=1; k<=rows-i; k++)
        {
            printf("  ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
    }
    return 0;
}