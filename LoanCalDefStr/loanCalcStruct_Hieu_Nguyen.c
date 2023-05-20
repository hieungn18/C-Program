#include<stdio.h>
#include<math.h>

typedef struct Loan{
float INT;
float P;
float B;
}loan;

int main()
{
	float c, p, rate, r;
	int i, n;

	printf("Enter amount of loan: $ ");
	scanf("%f", &p);

	printf("Enter Interest rate per year: % ");
	scanf("%f", &rate);

	printf("Enter number of payments: ");
	scanf("%d", &n);

	loan ln[n];

	r = rate/1200;
	ln[0].B = p;

for(i=1; i<=n; i++)
{

	ln[i-1].INT = ln[i-1].B * r;
	c = p * r * pow(1+r, n)/(pow(1+r, n) - 1);

	ln[i].B = pow(1+r, i)*p - ((pow(1+r, i)-1)*c/r);

	ln[i-1].P = c - ln[i-1].INT;
}


	c = p * r * pow(1+r, n)/(pow(1+r, n) - 1);

printf("\nMonthly payment should be %5.2f", c);
printf("\n=========================AMORTIZATION SCHEDULE==========================");
printf("\n#\tPayment\t\tPrincipal\tInterest\tBalance\n");
for(i=0; i<n; i++)
{
	printf("%d\t$ %5.2f\t$ %5.2f \t$ %5.2f \t$ %5.2f\n" , i+1, c, ln[i].P, ln[i].INT, ln[i+1].B);
}
return 0;
}

