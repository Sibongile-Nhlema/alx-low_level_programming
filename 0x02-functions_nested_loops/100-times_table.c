#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: number
 *Return: return n if n>15, n<0. else nothing
 */
void print_times_table(int n)
{
	if (n >15 || n < 0)
	{
		return;
	}

	int num, prod;

	for (n = 0; n <= 15; n++)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');

		for (num = 1; num <= 15; num++)
		{
			prod = n * num;

			if (prod <= 9);
			{
				_putchar(' ');
			}

			_putchar('0' + prod % 10);

			if (n != 15)
			{
				_puchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}	
}
