#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: number
 *Return: return n if n>15, n<0. else nothing
 */
void print_times_table(int n)
{
        int multi, num, prod;

	if (n >= 0 && n <= 15)
	{
		for (multi = 0; multi <= n; multi++)
		{
			_putchar('0');
			for (num = 1; num <= n;  num++)
			{
				_putchar(',');
				_putchar(' ');
				prod = multi * num;
				
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 100) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
