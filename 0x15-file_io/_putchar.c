#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes a character to the standard output
 * @c: character to print
 *
 * Return: always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
