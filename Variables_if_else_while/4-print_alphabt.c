/**
 * file:4-print_alphabet.c
 * Author:Abdi Heydar
 */

#include <stdio.h>
/**
 * main - print alphabets in lowercase except  e and q.
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
