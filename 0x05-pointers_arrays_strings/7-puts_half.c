#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length - 1) / 2 + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
		_putchar('\n');
}
