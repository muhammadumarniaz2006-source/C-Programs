#include<stdio.h>
int main()
{
    int rfloor;
     printf("Enter your desire floor: ");
     scanf("%d",&rfloor);

     if(rfloor<0 || rfloor>50)
        {
            printf("Error");
            return 0;
        }

     for(int i=1; i<=rfloor; i++)
     {
        printf("%d floor comes\n", i);
     }

     printf("Your arrived at your desire floor ");
     return 0;
}