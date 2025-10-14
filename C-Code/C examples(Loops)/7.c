#include<stdio.h>
int main()
{
    int petrol, price, cost=0;

    printf("Enter the amount of petrol in liters: ");
    scanf("%d",&petrol);
    printf("Enter the price of petrol per liter: ");
    scanf("%d",&price);

    for(int i=1; i<=petrol; i++)
    {
        cost=i*price;
    }
    printf("Total cost of petrol: %d",cost);
    return 0;   
}