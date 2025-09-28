#include<stdio.h>
int main ()
{
    int y;
    char c;
    float G;

    printf("\nEnter the deparment ");
    scanf("%c", &c);


    if(c=='c' || c=='C')
    {
        printf("\nWelcome to Computer Science Department");
        printf("\nEnter the study year ");
        scanf("%d",&y);



        if(y==3 || y==4)
        {
            printf("\nEnter your GPA ");
            scanf("%f",&G);

            if(G>=3.0)
            {
                printf("\nYou allowed to take Advanced Programming");
            }

        }
        else if(y==2)
        {
            printf("\nEnter your GPA ");
            scanf("%f",&G);

            if(G<3.0)
            {
                printf("\nYou are allowed to take Intro to programming");
            }
        }
        else if(y==1 || y==2)
        {
            printf("\nYou are allowed to take Foundations of Computing");

        }

    }

    else if(c=='s' || c=='S')
    {
        printf("\nWelcome to Software Engineering Department");
        printf("\nEnter the study year ");
        scanf("%d",&y);



        if(y==4)
        {
            printf("\nEnter your GPA ");
            scanf("%f",&G);

            if(G>=3.2)
            {
                printf("\nYou allowed to take Software Engineering Project");
            }

        }
        else if(y==2)
        {
            printf("\nEnter your GPA ");
            scanf("%f",&G);

            if(G<3.2)
            {
                printf("\nYou are allowed to take Software Fundamentals");
            }
        }
        else if(y==1)
        {
            printf("\nYou are allowed to take Intro to Software Concepts");
        }

    }

    else if(c=='i' || c=='I')
    {
        printf("\nWelcome to IT department");
        printf("\nEnter the study year ");
        scanf("%d",&y);

        if((y==2 || y==3 || y==4) && y!=1)
        {
            printf("\nEnter your GPA ");
            scanf("%f",&G);

            if(G>=2.8)
            {
                printf("\nYou allowed to take Networking Basics");
            }

            else if(G<2.8)
            {
                printf("\nYou are allowed to take Computer Fundamentels");
            }

        }
        
        else if(y==1)
        {
            printf("\nYou are allowed to take Introduction to IT");
        }

    }
    return 0;

}