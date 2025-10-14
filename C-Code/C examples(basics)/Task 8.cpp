#include<stdio.h>
int main()
{
    int a,b;
    int A,B,C,D,E;

    printf("Enter the value of a");
    scanf("%d",&a);

    printf("\nEnter the value of b");
    scanf("%d",&b);

    A=a+b;
    B=a-b;
    C=a*b;
    D=a/b;

    printf("\nThe addition is: %d",A);
    printf("\nThe subtraction is: %d",B);
    printf("\nThe multiplication is: %d",C);
    printf("\nThe division is: %d",D);

    return 0;

}