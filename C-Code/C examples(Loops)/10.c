#include<stdio.h>
int main()
{
    int fuel;
    
    printf("Enter the ttal amunt of fuel in Rocket: ");
    scanf("%d",&fuel);

    for(int i=fuel; fuel>100; i++)
    {
        fuel = fuel -100;
        printf("The remaining fuel is %d\n",fuel);
        
    }
     printf("Final stage Reached\n");
}