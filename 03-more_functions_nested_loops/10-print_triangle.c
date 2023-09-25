#include "main.h"
/**
 *print_triangle - function that prints a triangle, followed by a new line
 *@size:size of triangles that print char #
 */
void print_triangle(int size)
{
	int i, j, sp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <=size; i++)
		{
			for (sp = size - i; sp >= 1; sp--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
