#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - writes a single char to standard output
 * @c: char
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
