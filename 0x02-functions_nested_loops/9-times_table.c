#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0.
 * Return: number
 */
void times_table(void)
{
	int multi, num ,prod;
	for (multi = 0; multi <= 9; multi++)
	{
		_putchar('0');
		for (num =1; num <= 9;  num++)
		{
			_putchar(',');
			_putchar(' ');

			prod = multi * num;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
