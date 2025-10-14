#include<stdio.h>
int main()
{ 
    int num;
    printf("Enter the positive number: ");
    scanf("%d",&num);

    do
    {
        printf("Enter the positive number: ");
        scanf("%d",&num);
    }
    while(num<=0);

    printf("%d",num);
    return 0;
}