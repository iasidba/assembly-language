#include "main.h"
/**
 *rev_string - function that reverses a string
 *@s:char string
 */
void rev_string(char *s)
{
	char *rev;
	char temp;

	rev = s;
	while (*(rev + 1) != '\0')
	{
		rev++;
	}
	while (s < rev)
	{
		temp = *rev;
		*rev = *s;
		*s = temp;
		s++;
		rev--;
	}
}
