#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    (num<0)?printf("%d",abs(num)):printf("%d",num);

    return 0;
}