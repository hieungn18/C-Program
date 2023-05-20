#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
        double amount,rate;

        int number,i;

        double A,r;
        double INT[10],B[10],P[10];

         printf("Enter amount of loan : $ ");
         scanf("%lf",&amount);

         printf("Enter interest rate per year : %% ");
         scanf("%lf",&rate);

         printf("Enter number of payments : ");
         scanf("%d",&number);

         r=rate/1200;

         A=amount*((r*pow(1+r,number))/(pow(1+r,number)-1));
         
        

        printf("Monthly payment should be %.2lf\n",A);
         
         B[0]=amount;
         

         printf("# \t Payment \t Principal \t Interest \t Balance\n");
         for(i=1;i<=number;i++)
         {
                 INT[i]=B[i-1]*r;
                 P[i]=A-INT[i];
                 B[i]=B[i-1]-P[i];


                 printf("%d \t $%0.2lf \t $%0.2lf \t $%0.2lf ",i,A,P[i],INT[i]);

                 if(INT[i]/10.0 < 1.0)
                printf("\t\t $%0.2lf", B[i]);
                 else
                 printf("\t $%0.2lf", B[i]);
                 printf("\n");

        }
        return 0;
 }

