#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers -  prints the numbers, from 0 to 9, followed by \n
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
	}
	_putchar('\n');
}
