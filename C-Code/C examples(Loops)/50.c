#include<stdio.h>
int main()
{
    int num;

    for(int i=1; i>0; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&num);

        if(num<0)
        {
            break;
        }
        printf("%d\n",num*num);
    }

    return 0;
}