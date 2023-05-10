#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes thechar c to stout
 * @c: the char to print
 *
 * Return: on success 1
 * On error -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
