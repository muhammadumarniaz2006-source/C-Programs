#include<stdio.h>
int main ()
{
    int t;
    int car=100;
    int bike=80;
    int truck=60;
    int speed;
    int fine;
    
    printf("\nSelect the vehicle type \n1. Car \n2. Bike \n3. Truck\n");
    scanf("%d", &t);

    printf("\nEnter the speed of vehicle\n");
    scanf(" %d", &speed);

    if(t==1)
    {
        if(speed>car)
        {
            fine=(speed-car)*50;
            printf("\nyour fine is %d",fine);
        }
        else
        {
            printf("\nNo fine");
        }
    }

    else if(t==2)
    {
        if(speed>bike)
        {
            fine=(speed-bike)*50;
            printf("\nyour fine is %d",fine);
        }
        else
        {
            printf("\nNo fine");
        }
    }

    else if(t==3)
    {
        if(speed>truck)
        {
            fine=(speed-truck)*50;
            printf("\nyour fine is %d",fine);
        }
        else
        {
            printf("\nNo fine");
        }
    }

    if(fine%1000 == 0)
    {
        fine = fine + 500;
        printf("\nfine after additional charges amount is %d",fine);
    
        if(t==1)
        {
            if(speed==200)
            {
                printf("\nLicense cancelled");
            }
        }

        else if(t==2)
        {
            if(speed==160)
            {
                printf("\nLicense cancelled");
            }
        }

        else if(t==3)
        {
            if(speed==120)
            {
                printf("\nLicense cancelled");
            }
        }
}
    return 0;
}