#include "main.h"
#include <stdio.h>
/**
 *main - 50 fib to newline start with 1 & 2
 *	followed comma nd white space
 */
int main(void)
{
	unsigned int fib_1st = 1, fib_2nd = 2,fib_nth;
	int i, n = 50;

	for ( i = 2; i < n; i++)
	{
		fib_nth = fib_1st + fib_2nd;
		printf("%lu", fib_nth);

		if (i < n)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		fib_1st = fib_2nd;
		fib_2nd = fib_nth;
	}
	return (0);
}
