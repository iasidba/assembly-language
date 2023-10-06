#include "main.h"
/**
 *swap_int - swap the value of two int
 *@a:first int
 *@b:second int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
