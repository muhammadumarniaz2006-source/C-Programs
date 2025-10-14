#include<stdio.h>
int main()
{
    int i,j,k;

    //(f)
    i=7,j=5,k=3;

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