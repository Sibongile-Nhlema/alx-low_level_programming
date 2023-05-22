#include "main."
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: char
 * Return: 1 if success
 * on error: -1
 */

int _putchar(char c)
{
	return (write(1, $c, 1));
}
