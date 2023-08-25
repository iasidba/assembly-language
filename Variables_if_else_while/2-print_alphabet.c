/**
 * file:2-print_alphabet.c
 * Author:Abdi Heydar
*/
#include <stdio.h>
/**
 * main - print alphabets in lowercase
 *
 *Return:Always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

