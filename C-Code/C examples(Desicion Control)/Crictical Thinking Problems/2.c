#include<stdio.h>
int main()
{
    int x;
    int y;

    printf("Enter the x-coordinate: ");
    scanf("%d",&x);

    printf("Enter the y-coordinate: ");
    scanf("%d",&y);

    if(x>0 && y>0)
    {
        printf("The point (%d,%d) lies in the First Quadrant",x,y);
    }

    else if(x<0 && y>0)
    {
        printf("The point (%d,%d) lies in the Second Quadrant",x,y);
    }

    else if(x<0 && y<0)
    {
        printf("The point (%d,%d) lies in the Third Quadrant",x,y);
    }

    else if(x>0 && y<0)
    {
        printf("The point (%d,%d) lies in the Fourth Quadrant",x,y);
    }

    else
    {
        printf("The point (%d,%d) lies at the Origin",x,y);
    }

    return 0;

}