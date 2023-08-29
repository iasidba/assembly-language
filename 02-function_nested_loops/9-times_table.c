#include "main.h"
/**
 *times_table - function prints 9 times table from 0
 */
void times_table(void)
{
	int i, j, pro;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			pro = i * j;
			if (pro <= 9)
			{
				_putchar(' ');
			}
			else
			{

				_putchar((pro / 10) + '0');
			}
			_putchar((pro % 10) + '0');
		}
	_putchar('\n');
	}
}
