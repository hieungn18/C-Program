#include <stdio.h> 
#include <math.h>
#include<stdlib.h>
int main(int argc, char *argv[] ) {
double amount,rate,number; double INT,P;
int i=1;

amount = atof(argv[1]);
rate = atof(argv[2]);
number = atof(argv[3]);
printf("Enter amount of loan: $ %.lf \n",amount); 
//scanf("%lf", &amount);
printf("Enter Interest rate per year: %% %.1lf\n",rate); 
//scanf("%lf", &rate);
printf("Enter Number of payments: %.lf\n",number); 
//scanf("%lf", &number);
rate=rate/1200;

double monthly = (amount*rate)/(1-pow(1+rate, -number)); 
printf("\nMonthly payment should be %.2lf\n",monthly);
printf("\n=========================AMORTIZATION SCHEDULE==========================\n");
printf("#\tPayment\t\tPrincipal\tInterest\tBalance\n"); 
while(i<=number)
{
INT=rate*amount;
P=monthly-INT;
amount=amount-P;
printf("%d\t$%.2lf\t\t$%.2lf\t\t$%.2lf\t\t$%.2lf\n",i++, monthly,P,INT,amount);
}
return 0; }
