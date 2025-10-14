#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    int i=num;
    while (i>0)
    {
        rev=rev*10+i%10;
        i=i/10;
    }  
    
    printf("Reversed number is %d",rev);
    return 0;
}