#include<stdio.h>
int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    (score>80)?(printf("High")):(score<=80 && score>=50)?(printf("Moddrate")):(printf("Low"));
    return 0;
}
