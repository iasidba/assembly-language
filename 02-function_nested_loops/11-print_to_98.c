#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - funct to print natural num from n to 98
 *@n:num to be printed
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i <  98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n;i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
