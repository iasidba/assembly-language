#include "main.h"
/**
 **_strcpy - function that copies the string pointed to by src,
 *	including the terminating null byte (\0),to the buffer pointed to by dest
 *@dest:pointer to dest
 *@src:pointer to source
 *Return:dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start_dest);
}
