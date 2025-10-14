#include<stdio.h>
int main()
{
    int num,a;
    printf("Enter a number: ");
    scanf("%d",&a);

    num=(a%2==0)?printf("%d is even",a):printf("%d is odd",a);

    return 0;


}