#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 *@dest:destination pointer address
 *@src:source pointer
 *Return:dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] !='\0'; j++)
	{
		dest[j + i] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
