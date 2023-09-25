#include "lists.h"

/**
 * _putchar - writes character to stdout
 * @c: character
 * Return : ALWAYS 0
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
