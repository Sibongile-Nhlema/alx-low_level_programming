#include "main.h"
#include <stdio.h>
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: number
 *Return: return n if n>15, n<0. else nothing
 */
void print_times_table(int n)
{
	int n, multi, prod;

	for (n = 0; n <= 15; n++)
	{
		_putchar('0');

		for (multi = 1; multi <= 15; multi++)
		{
			_putchar(',');
			_putchar(' ');
			prod = n * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
