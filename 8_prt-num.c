#include <stdio.h>
/**
 *main - prt numbers up to n
 *Return: 0 success
 */
int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if(n > 0)
	{
		 printf("Numbers up to %d is\n", n);

		int i;
		for(i = 1; i <= n; i++)
		{
			printf("%d" , i);
			printf(" , ");

			if(i % 10 == 0)
			{
				printf("\n");
			}
		}
	}
	else
	{
		printf("Erro:pls provide valid number");
	}
	return 0;
}

