#include<stdio.h>
int main()
{
    int time;
    printf("Enter the allocated time in minutes: ");
    scanf("%d",&time);

    for(int i=time ; time>0 ; i++)
    {
        time=time-1;
        printf("Remaining time is: %d\n",time);
    }

    printf("Time is up-Exam submitted");
    return 0;   
}