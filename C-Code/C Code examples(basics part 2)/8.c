#include<stdio.h>
int main()
{
    char m[20];
    char n[10];
    int age;

    printf("Enter the first name:");
    scanf("%s",&m);

    printf("\nEnter the last name:");
    scanf("%s",&n);

    printf("\nEnter the age:");
    scanf("%d",& age);

    printf("\nyour name: %s %s \nage %d", m , n ,age);

    return 0;


}