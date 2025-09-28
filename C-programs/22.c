#include<stdio.h>
int main ()
{
    int calories,fatgrams,caloriesfromfat;
    float caloriespercentage;

    printf("Enter the number of calories ");
    scanf("%d",&calories);

    printf("Enter the fat grams ");
    scanf("%d",&fatgrams);

    if(calories<0 || fatgrams<0)
    {
        printf("\neither the calories or fat grams were entered incorrectly");
        return 0;
    }

    caloriesfromfat=fatgrams*9;

    if(caloriesfromfat>calories)
    {
        printf("\neither the calories or fat grams were entered incorrectly");
        return 0;
    }

    caloriespercentage=(float)caloriesfromfat/calories;

    printf("\nthe percentage of calories from fat is %f",caloriespercentage);

    return 0;

}