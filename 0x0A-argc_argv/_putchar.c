#include <unistd.h>

/**
 * _putchar - write a single char
 * @c: char
 *
 * Return: 1 on success, -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
