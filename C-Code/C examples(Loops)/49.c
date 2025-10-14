#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num<0)
        {
            continue;
        }
        sum=sum+num;
    }while(num!=0);
    
    printf("%d",sum);
    return 0;
}