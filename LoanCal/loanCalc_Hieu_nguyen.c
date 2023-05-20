#include <stdio.h>
#include <math.h>

int main() {
        double amount,rate,number;
        double INT,P;
        int i=1;

        printf("Enter amount of loan: $ ");
        scanf("%lf", &amount);

        printf("Enter Interest rate per year: %% ");
        scanf("%lf", &rate);

        printf("Enter Number of payments: ");
        scanf("%lf", &number);

        rate=rate/1200;

    

        double monthly = (amount*rate)/(1-pow(1+rate, -number));

        printf("Monthly payment should be %.2lf\n",monthly);

        
        
        printf("#\tPayment\t\tPrincipal\tInterest\tBalance\n");
        while(i<=number)
        {
                INT=rate*amount;
                P=monthly-INT;
                amount=amount-P;
                printf("%d\t$%.2lf\t\t$%.2lf\t\t$%.2lf\t\t$%.2lf\n",i++, monthly,P,INT,amount);
}
        return 0;
 }

