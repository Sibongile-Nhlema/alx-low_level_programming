#include <unistd.h>
/**
 * Putchar - writes char c to stdout
 * @c: character
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
