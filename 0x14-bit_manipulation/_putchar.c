#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _putchar - write a character
 * @c: char
 *
 * Return:1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
