#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double amount, rate, monthlyRate;

	double A, B;

	int number, i;

	double interestArr[30], principalArr[30], endingBalanceArr[30];

	printf("Enter amount of loan: $");
	scanf("%lf", &amount);

	printf("Enter Interest rate per year: %% ");
	scanf("%lf", &rate);

	printf("Enter Number of payments: ");
	scanf("%d", &number);

 monthlyRate = (rate / (12*100.0));

 A = amount * (monthlyRate / (1 - pow( (1 + monthlyRate) , (-number) )));

 B = amount;

	printf("\n\n Monthly Payment: $%.2f \n", A);

	for(i = 1; i <= number; i++)
	{
		*(interestArr+i-1) = (B * monthlyRate);
		*(principalArr+i-1) = A - *(interestArr+i-1);

		*(endingBalanceArr+i-1) = (B - *(principalArr+i-1));

		B = *(endingBalanceArr+i-1);
	}	
	printf("\n=========================AMORTIZATION SCHEDULE==========================\n");
	 printf("#\t\tPayment\t\tPrincipal\tInterest\tBalance\n");

for(i = 1; i <= number; i++)
{

	printf("%d\t\t$%.2lf\t\t$%.2lf\t\t$%.2lf\t\t$%.2lf\t\t",i, A, *(principalArr+i-1), *(interestArr+i-1), *(endingBalanceArr+i-1));
	printf("\n");
}
	return 0;

}
