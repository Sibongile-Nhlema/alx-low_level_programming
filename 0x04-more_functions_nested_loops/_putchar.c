#include <unistd.h>
/**
*_putchar - write the character c to stout
*@c:The char
*Return 1 if true and 0 if not.
*on error return -1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
