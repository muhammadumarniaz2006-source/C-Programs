#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

   
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            printf("Not a prime number");
            return 0;
        }
    }
    printf("Prime number");
    return 0;
}
