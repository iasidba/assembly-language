#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times alphabets in lowercase in newline
 *
 */
void print_alphabet_x10(void)
{
	char c, k;

	for (k = 1; k <= 10; k++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
