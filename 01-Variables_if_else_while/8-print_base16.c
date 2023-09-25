/**
 * file:8-print_base16.c
 * Author:Abdi Heydar
 */
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,in a new line
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
