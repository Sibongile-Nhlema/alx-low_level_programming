#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - prints a charater
 * @c: char
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
