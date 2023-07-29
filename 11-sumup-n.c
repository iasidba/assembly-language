#include <stdio.h>
/**
 *sum of n natural numbers
 *
 */
int main(void)
{
	int n, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

		int i = 1;
		while(i <= n)
		{
			sum  += i;
			i++;
		}
	printf("sum of %d natural numbers: %d\n" , n, sum);
	return 0;
}
