#include "main.h"
/**
 *leet - function that encodes a string into 1337
 *	Letters a and A should be replaced by 4
 *	Letters e and E should be replaced by 3
 *	Letters o and O should be replaced by 0
 *	Letters t and T should be replaced by 7
 *	Letters l and L should be replaced by 1
 *@str:string to be encoded
 *Return:encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	char letter[] = "aeotl";
	char number[] = "43071";

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == letter[j] || str[i] == letter[j] - 32)
			{
				str[i] = number[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
