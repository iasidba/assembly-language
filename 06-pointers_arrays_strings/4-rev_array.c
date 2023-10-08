#include "main.h"
#include <string.h>
/**
 *reverse_array - function that reverses the content of an array of integers
 *@a:char array
 *@n:numbers of elements of array
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0;

	n = n - 1;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}

