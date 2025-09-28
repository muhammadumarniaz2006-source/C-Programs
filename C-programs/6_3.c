#include<stdio.h>
int main()
{
    int i,j,k;

    //(c)
    i=5,j=3,k=7;

    if(i<j)
    {
        if(j<k)
        {
            i=j;
        }
        else
        {
           j=k; 
        }
            
    }
    else
    {
        if(j>k)
        {
            j=i;
        }
        else
        {
            i=k;
        }
    }

    printf("%d \n%d \n%d", i, j, k);

    return 0;
}