#include <stdio.h>
int main() 
{
    int loanType;       
    float salary;
    int creditScore;
    float interest;

    printf("Enter loan type (1=Home Loan, 2=Car Loan, 3=Other): ");
    scanf("%d", &loanType);

    interest = (loanType == 1) 
                 ? (printf("Enter salary: "), scanf("%f", &salary), (salary > 100000 ? 0.08 : 0.1))
                 : (loanType == 2) 
                     ? (printf("Enter credit score: "), scanf("%d", &creditScore), (creditScore > 700 ? 0.09 : 0.12))
                     : (loanType == '3' )
                     ? 0.15 : 0;

    printf("Applicable Interest Rate: %.2f%%\n", interest*100);

    return 0;
}
