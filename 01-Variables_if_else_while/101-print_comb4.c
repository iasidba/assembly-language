/**
 * file:101-print_comb4.c
 * Author:Abdi Heydar
 */
#include <stdio.h>
/**
  * main - prints all possible different combinations of three digits
  *             comma followed by a space, in ascending order.
  * Return: Always 0(Success)
  */
 int main(void)
 {
	 int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = c + 1; i <= '9'; i++)
		{
			for (k = i + 1; k <= '9'; k++)
			{
				putchar(c);
				putchar(i);
				putchar(k);
				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
