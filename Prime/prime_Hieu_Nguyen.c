#include<stdio.h>

int main()
{
	int n, x, y,i=3;

	printf("Enter the value of n: ");
	scanf("%d",&n);

	if ( n >= 1 )
	{	
		printf("First %d prime numbers are : 2 ",n);
		
	}

	for ( x = 2 ; x <= n ;)
	{
		for ( y = 2 ; y <= i - 1 ; y++ )
		{	
			if ( i%y == 0 )
			break;
		}
		if ( y == i )
		{
			printf("%d ",i);
			x++;
		}
			i++; 
	}

return 0;
}
