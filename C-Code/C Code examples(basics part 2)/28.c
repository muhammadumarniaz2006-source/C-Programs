#include<stdio.h>
int main ()
{
    float f,C;

    printf("Enter the value of f: ");
    scanf("%f", &f);

    C = (f-32)*5/9;

    printf("The value of C is: %f", C);

    return 0;

}