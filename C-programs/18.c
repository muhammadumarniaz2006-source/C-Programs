#include<stdio.h>
int main ()
{
    char l,,s;

    printf("\nEnter the type of loan \n1. Home Loan \n2. Car Loan \n3. Personal Loan ");
    scanf("%c", &l);

    printf("\nEnter the customer category \n1. Salaried \n2. Buisness ");
    scanf(" %c", &c);

    printf("\nEnter the credit score ");
    scanf(" %c", &s);

    
            if (s>100000)
            {
                printf("\nLoan Approved");
            }
            else if(s<100000 && s>50000)
            {
                printf("\nLoan partially approved");
            }
            else
            {
                printf("\nLoan Rejected");
            }
         

    return 0;
}