#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: Always 0
 */

void print_numbers(void)
{
	int num = 0;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && num != 52)
		{
		_putchar(num);
		}
	}
	_putchar('\n');
}
