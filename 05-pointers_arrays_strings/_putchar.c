#include "main.h"
#include <unistd.h>
/**
 *_putchar - write char to stdout
 *@c char to be write
 *Return:on success 1,
 *on error -1 returned
 *errerno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
