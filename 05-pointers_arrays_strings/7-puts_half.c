#include "main.h"
/**
 *puts_half - function that prints half of a string, followed by a new line
 *		should print the second half of the string
 *		If the number of characters is odd, the function should
 *		 print the last n characters of the string,
 *		where n = (length_of_the_string - 1) / 2
 *@str:char string
 */
void puts_half(char *str)
{
	int i, middle, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		middle = length / 2;
		for (i = middle; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		middle = (length - 1) / 2;
		for (i = middle + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
