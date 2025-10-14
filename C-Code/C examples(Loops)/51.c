#include<stdio.h>
int main()
{
    int count[10]={0};
    int num;

    printf("Enter a number (0-9): ");
    scanf("%d",&num);
    count[num]++;

    while(1)
    {
        printf("Enter a number (0-9): ");
        scanf("%d",&num);
        if(num<0 || num>9)
        {
            break;
        }
        count[num]++;
    }

    for(int i=0;i<10;i++)
    {
        printf("Count of %d is %d \n",i,count[i]);
    }
    
    return 0;

}