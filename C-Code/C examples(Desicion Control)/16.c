#include<stdio.h>
int main()
{
    int age,n,c;
    int r,v,p,R,V,P;
    
    printf("Welcome to Science Exhibition");
    printf("\nEnter your age: ");
    scanf("%d",&age);

    if(age>=16 && age<=64)
    {
        printf("Enter the number of tickets");
        scanf("%d",&n);
        printf("Enter the category of seats\n1.Regular\n2.VIP\n3.Premium\n");
        scanf("%d",&c);

        if(c==1)
        {
            r=800*n;
            printf("\nTotal cost of tickets is %d",r);
            if(r>3500)
            {
                r=r-(0.1*r);
                printf("\nDiscounted price of Regular ticket is %d",r);
            }
            return 0;
        }
        else if(c==2)
        {
            v=1000*n;
            printf("\nTotal cost of tickets is %d",v);
            if(v>3500)
            {
                v=v-(0.1*v);
                printf("\nDiscounted price of VIP ticket is %d",v);
            }
            return 0;
        }
        else if(c==3)
        {
            p=1500*n;
            printf("\nTotal cost of tickets is %d",p);
            if(p>3500)
            {
                p=p-(0.1*p);
                printf("\nDiscounted price of Premium ticket is %d",p);
            }
            return 0;
        }

    }

    else if(age>=65)
    {
        printf("Enter the number of tickets");
        scanf("%d",&n);
        printf("Enter the category of seats\n1.Regular\n2.VIP\n3.Premium\n");
        scanf("%d",&c);

        if(c==1)
        {
            R=700*n;
            printf("\nTotal cost of tickets is %d",R);
            if(R>3500)
            {
                R=R-(0.1*R);
                printf("\nDiscounted price of Regular ticket is %d",R);
            }
            return 0;
        }
        else if(c==2)
        {
            V=900*n;
            printf("\nTotal cost of tickets is %d",V);
            if(V>3500)
            {
                V=V-(0.1*V);
                printf("\nDiscounted price of VIP ticket is %d",V);
            }
            return 0;
        }
        else if(c==3)
        {
            P=1300*n;
            printf("\nTotal cost of tickets is %d",P);
            if(P>3500)
            {
                P=P-(0.1*P);
                printf("\nDiscounted price of Premium ticket is %d",P);
            }
            return 0;
        } 
    }
    else
    {
        printf("\nYou are not eligible to attend the exhibition");
        return 0;  
    }

    

}