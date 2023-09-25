/**
 * file:7-print_tebahpla.c
 * Author:Abdi Heydar
 */
#include <stdio.h>
/**
 * main - print alphabets lowercase in reversed.
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
