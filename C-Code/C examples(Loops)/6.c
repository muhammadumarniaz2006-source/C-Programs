#include<stdio.h>
int main()
{
    int light;
    printf("Enter the number of lights you want to open: ");
    scanf("%d",&light);

        for(int i=1; i<=light; i++)
        {
            int a;
            printf("Is any light is damaged\n1.Yes\n2.No\n");
            scanf("%d",&a);

            if(a==1)
            {
               continue;
            }
            
            printf("Light is on\n");
        }

    printf("Streetlight activation complete.");
    return 0;
}
