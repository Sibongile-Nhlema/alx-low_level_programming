#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a signle char to stdout
 * @c: char
 *
 * Return: Always 0
 */

int _putchar(char *)
{
	return (write(1, &c, 1));
}
