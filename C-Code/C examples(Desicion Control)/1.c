#include <stdio.h> 
int main()
{
    int age;
    char name[50];
    char condition;
    char PriorityCard[50];
    
    printf("Enter the age: ");
    scanf("%d",&age);
    
    printf("Enter the name: ");
    scanf("%s",&name);
    
    printf("Enter the condition: (C for critical, M for moderate, m for mild): ");
    scanf(" %c",&condition);
    
    
    if(age<12 || age >65 || condition== 'C') 
    {
                  printf("\t Emergency Card \n");
                  printf("Name: %s\n",name);
                  printf("Age: %d\n", age);
                  
                  printf("Condition: Critical \n");
                  printf("High Priority Card!\n");
             
    }
    
    else if(condition == 'M') 
    {
                  printf("\t Emergency Card \n");
                  printf("Name: %s\n",name);
                  printf("Age: %d\n" ,age);
                  printf("Condition: Moderate \n");
                  printf("Medium Priority Card!\n");
    }
    
    else if (condition== 'm') 
    {
                  printf("\t Emergency Card \n");
                  printf("Name: %s\n",name);
                  printf("Age: %d\n" ,age);
                  printf("Condition: mild \n");
                  printf("Low Priority Card!\n");
    } 
    else  
    {
        printf("Invalid Condition entered!\n");
    }
  
    return 0;
}