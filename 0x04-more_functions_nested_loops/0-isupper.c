#include "main.h"

/**
 *_isupper - checks for uppercase characters
 *@c: character
 *Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
