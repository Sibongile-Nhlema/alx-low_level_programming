#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9, followed by \n
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int num;

	for (num >= 48; num <= 57; num++)
	{
		if (num != 50 && num != 54)
			return (0);
		_putchar(num);
	}
	_putchar('\n');
}
