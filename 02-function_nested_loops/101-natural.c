#include "main.h"
#include <stdio.h>
/**
 *main - prints the sum of all the multiples of 3 or 5 below 1024 
 *Return:0(success)
 */
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			result +=  i;
		}
	}
	printf("result are:%d\n", result);
	return (0);
}
