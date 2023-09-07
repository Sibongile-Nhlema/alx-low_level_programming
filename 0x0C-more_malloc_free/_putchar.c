#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes a single char to standard output
 * @c: char
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
