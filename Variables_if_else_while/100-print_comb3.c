/**
 * file:100-print_comb3.c
 * Author:Abdi Heydar
 */

#include <stdio.h>
/**
  * main - Prints the numbers from 00 to 99, numbers separated by
  *                     comma followed by a space, in ascending order.
  * Return: Always 0(Success).
  */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = c + 1; i <= '9'; i++)
		{
			putchar(c);
			putchar(i);

			if (c != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
