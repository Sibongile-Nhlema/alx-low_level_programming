#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * putchar - writes a single character to standard output
 * @c: character
 *
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
