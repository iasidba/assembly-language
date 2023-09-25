/**
 * file:3-print_alphabets.c
 * Author:Abdi Heydar
 */
#include <stdio.h>
/**
 * main - print alphabets in lowercase and uppercase
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}	
	putchar('\n');
	return (0);
}
