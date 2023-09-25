/**
 * file:5-print_numbers.c
 * Author:Abdi Heydar
 */
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0 in newline
 *
 * Return:Always 0(success)
 */
int main(void)
{
	int num = 0;

	while (num <= '9')
	{
		num++;
		putchar(num);
	}
	putchar('\n');
	return (0);
}
