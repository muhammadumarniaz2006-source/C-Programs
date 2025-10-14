#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        sum=sum+num;
        printf("Enter a number: ");
        scanf("%d", &num);
        
    }

    printf("%d",sum);
    return 0;
}