#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);

  do
  {
        sum = sum + num;
        if(num==0)
        {
            break;
        }
        printf("Enter a number: ");
        scanf("%d", &num);
  } while (num!=0);
  

    printf("%d",sum);
    return 0;
}