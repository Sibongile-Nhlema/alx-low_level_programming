#include "main.h"
#include <stdio.h>
#include <unistdio.h>

/**
 * _putchar - writes a single char
 * @c: char
 * Return 0
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
