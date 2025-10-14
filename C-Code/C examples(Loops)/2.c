#include<stdio.h>
int main()
{
    int day=1,fine=0;

    printf("Enter the number of days you late: ");
    scanf("%d",&day);

    for(int i=1; i<=day; i++)
    {
        fine=fine+5;
    }

    printf("Your fine amount is: %d",fine);

    return 0;
}