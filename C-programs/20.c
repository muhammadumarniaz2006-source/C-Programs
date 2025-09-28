#include<stdio.h>
int main ()
{
    int a,b,c;

    printf("\nSelect the cuisine \n1. Pakistani \n2. Italian \n3. Chinese\n ");
    scanf("%d", &a);

    printf("\nsSelect the food type \n1. Vegetarian \n2. Non-Vegetarian\n ");
    scanf(" %d", &b);

    printf("\nSelect meal type \n1. Starter \n2. Main course \n3. Dessert\n");
    scanf(" %d", &c);

    if(a==1)
    {
        if(b==1 && c==1)
        {
            printf("\nPakora has been served");
        }
        else if(b==2 && c==2)
        {
            printf("\nBiryani has been served");
        }
    }

    else if(a==2)
    {
        if(b==1 && c==2)
        {
            printf("\nPasta has been served");
        }
        else if(b==2 && c==1)
        {
            printf("\nChicken wings has been served");
        }
    }

    else if(a==3)
    {
        if(b==1 && c==2)
        {
            printf("\nVeg noodles has been served");
        }
        else if(b==2 && c==2)
        {
            printf("\nChilli Chicken has been served");
        }
    }
    return 0;
}