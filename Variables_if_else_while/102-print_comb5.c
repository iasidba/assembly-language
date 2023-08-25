/**
 * file:101-print_comb4.c
 * Author:Abdi Heydar
 */

#include <stdio.h>
/**
  * main - prints all possible combinations of two two-digit numbers 0 to 99 
  *                     separated by comma followed by a space, in ascending order.
  * Return: Always 0(Success).
  */
int main(void)
 {
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1 ; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0') ;
			putchar((num2 % 10) + '0');
			if (num1 != 98)
			{

				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
