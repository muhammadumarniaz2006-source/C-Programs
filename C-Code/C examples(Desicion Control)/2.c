#include <stdio.h>
int main()
{
    int n, c1=0, c2=0, c3=0, c4=0, c5=0;
    int valid = 1;

    printf("Enter number of courses: ");
    scanf("%d", &n);

    if (n > 5 || n < 1) {
        printf("Invalid number of courses!\n");
        return 0;
    }

    if (n >= 1) {
        printf("Enter course 1 code: ");
        scanf("%d", &c1);
    }
    if (n >= 2) {
        printf("Enter course 2 code: ");
        scanf("%d", &c2);
    }
    if (n >= 3) {
        printf("Enter course 3 code: ");
        scanf("%d", &c3);
    }
    if (n >= 4) {
        printf("Enter course 4 code: ");
        scanf("%d", &c4);
    }
    if (n >= 5) {
        printf("Enter course 5 code: ");
        scanf("%d", &c5);
    }
    
    if ((c1 && (c1==c2 || c1==c3 || c1==c4 || c1==c5)) ||
        (c2 && (c2==c3 || c2==c4 || c2==c5)) ||
        (c3 && (c3==c4 || c3==c5)) ||
        (c4 && (c4==c5))) {
        printf("Invalid! Duplicate course selection.\n");
        valid = 0;
    }

    if ((c1==2) ||
        (c2==2 && c1!=1) ||
        (c3==2 && c1!=1 && c2!=1) ||
        (c4==2 && c1!=1 && c2!=1 && c3!=1) ||
        (c5==2 && c1!=1 && c2!=1 && c3!=1 && c4!=1)) {
        printf("Wrong order: CS102 requires CS101 first\n");
        valid = 0;
    }
    if ((c1==3) ||
        (c2==3 && c1!=2) ||
        (c3==3 && c1!=2 && c2!=2) ||
        (c4==3 && c1!=2 && c2!=2 && c3!=2) ||
        (c5==3 && c1!=2 && c2!=2 && c3!=2 && c4!=2)) {
        printf("Wrong order: CS103 requires CS102 first\n");
        valid = 0;
    }

    if ((c1==1 || c2==1 || c3==1 || c4==1 || c5==1) &&
        (c1==4 || c2==4 || c3==4 || c4==4 || c5==4)) {
        printf("Invalid! CS101 clashes with CAL1001.\n");
        valid = 0;
    }
    if ((c1==2 || c2==2 || c3==2 || c4==2 || c5==2) &&
        (c1==5 || c2==5 || c3==5 || c4==5 || c5==5)) {
        printf("Invalid! CS102 clashes with AP1010.\n");
        valid = 0;
    }

    if (valid)
        printf("Course registration successful!\n");
    else
        printf("Course registration unsuccessful!\n");

    return 0;
}