#include "list.h"

/**
 * _putchar - writes a  single char directly to standard output
 * @c: charcater
 *
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
