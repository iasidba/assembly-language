#include "main.h"
/**
 *_isalpha -function to check that aphabetic character
 *@c:character to be checked
 *Return:1 if lowercase or uppercase, 0 else.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' &&  c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
