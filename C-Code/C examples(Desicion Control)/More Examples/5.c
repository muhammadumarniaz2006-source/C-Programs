#include <stdio.h>
int main() 
{
    int examType;   
    char grade;     

    printf("Enter exam type (1=Midterm, 2=Final): ");
    scanf("%d", &examType);

    printf("Enter grade (A, B, C, D, F): ");
    scanf(" %c", &grade); 

    switch (examType) 
    {
        case 1: // Midterm
            switch (grade) 
            {
                case 'A':
                    printf("Midterm Remark: Excellent Progress\n");
                    break;
                case 'B':
                    printf("Midterm Remark: Good Progress\n");
                    break;
                case 'C':
                    printf("Midterm Remark: Average Performance\n");
                    break;
                case 'D':
                    printf("Midterm Remark: Needs More Practice\n");
                    break;
                case 'F':
                    printf("Midterm Remark: Poor Performance\n");
                    break;
                default:
                    printf("Invalid Grade Entered!\n");
            }
            break;

        case 2: // Final
            switch (grade) 
            {
                case 'A':
                    printf("Final Remark: Excellent Overall Performance\n");
                    break;
                case 'B':
                    printf("Final Remark: Very Good, Keep It Up\n");
                    break;
                case 'C':
                    printf("Final Remark: Satisfactory but Can Improve\n");
                    break;
                case 'D':
                    printf("Final Remark: Below Average, Retake Suggested\n");
                    break;
                case 'F':
                    printf("Final Remark: Retake Required\n");
                    break;
                default:
                    printf("Invalid Grade Entered!\n");
            }
            break;

        default:
            printf("Invalid Exam Type Entered!\n");
    }

    return 0;
}
