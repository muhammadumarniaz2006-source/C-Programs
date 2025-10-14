#include<stdio.h>
int main()
{
   int r,l,A;
  
   printf("Enter the value of r:");
   scanf("%d",&r);

   printf("Enter the value of l:");
   scanf("%d",&l);

   A = r*l/2;

   printf("The Area of triangle:%2d",A);

   return 0;
}