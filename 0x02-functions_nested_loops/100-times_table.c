#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: number
 *Return: return n if n>15, n<0. else nothing
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}

	for (n = 0; n <= 15; n++)
	{
		_putchar('0');
		int num, prod;

		for (num = 1; num <= 15;  num++)
		{
			_putchar(',');
			_putchar(' ');
			prod = n * num;
			if (prod <= 15)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
